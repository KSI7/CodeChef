#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define w(x)                  int x; cin>>x; while(x--)
#define smol                  INT_MIN
#define setbits(x)            __builtin_popcountll(x)
#define F                     first
#define S                     second
#define pb                    push_back
#define mp                    make_pair
#define mk(arr,n,type)        type *arr=new type[n]
#define ios                   ios_base::sync_with_stdio(0);	cin.tie(0);cout.tie(0)

typedef long long ll;
typedef map<int, int> mii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
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
		long long int ts, js;
		cin >> ts;

		if (ts & 1)
			cout << ts / 2 << endl;
		else
		{
			long long int count = 0, bit_count = 0;
			while (ts % 2 == 0)
			{
				bit_count++;
				ts = ts >> 1;
			}
			for (long long int i = 2 ; i <= ts ; i += 2)
			{
				i >> bit_count;
				if (!(i & 1))
					count++;
			}
			cout << count << endl;
		}
	}

	return 0;
}