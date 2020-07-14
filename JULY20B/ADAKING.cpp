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
		int k;
		cin >> k;

		char matrix[9][9] = {
			"OXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX", "XXXXXXXX",
		};

		int i = 0, j = 1;
		while (k-- > 1)
		{
			if (j == 8)
			{
				i++;
				j = 0;
				matrix[i][j++] = '.';
			}
			else
				matrix[i][j++] = '.';
		}

		fo(i, 0, 8, int)
		{
			cout << endl;
			fo(j, 0, 8, int)
			cout << matrix[i][j];
		}
	}

	return 0;
}
