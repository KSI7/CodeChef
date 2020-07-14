#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define w(x)                  int x; cin>>x; while(x--)
#define ll					          long long int
#define fo(i,k,n,type)		    for(type i = k ; k < n ? i < n : i > n ; k < n ? i++ : i--)
#define deb(x) 				        cout << #x << "=" << x << endl
#define setbits(x)            __builtin_popcountll(x)
#define F                     first
#define S                     second
#define pb                    push_back
#define mp                    make_pair
#define mk(arr,n,type)        type *arr=new type[n]
#define ios                   ios_base::sync_with_stdio(0);	cin.tie(0); cout.tie(0)

typedef map<int, int> mii;
//typedef unordered_map<int, int> umii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
//typedef unordered_set<int> usi;
typedef set<pii> spii;
typedef priority_queue<int> pqi;

const int mod = 1e9 + 7;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main()
{
	ios;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		int n;
		cin >> n;

		mii x_cor, y_cor;

		fo(i, 0, 4 * n - 1, int)
		{
			int x, y;
			cin >> x >> y;

			x_cor[x]++;
			y_cor[y]++;
		}

		int miss_x, miss_y;

		for (auto i : x_cor)
			if (i.S & 1)
			{
				miss_x = i.F;
				break;
			}	
		for (auto i : y_cor)
			if (i.S & 1)
			{
				miss_y = i.F;
				break;
			}	

		cout << miss_x << " " << miss_y << endl;
	}

	return 0;
}
