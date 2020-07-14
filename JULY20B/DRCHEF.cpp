#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define w(x)                  int x; cin>>x; while(x--)
#define ll					  long long int
#define fo(i,k,n,x,type)	  for(type i = k ; k < n ? i < n : i > n ; k < n ? i+=x : i-=x)
#define deb(x) 				  cout << #x << "=" << x << endl
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

bool close(ll a, ll b, ll c)
{
	ll i = 0, j = 0;

	while(a<c)
	{
		a*=2;
		i++;
	}

	while(b<c)
	{
		b*=2;
		j++;
	}

	if(i>j)
		return 0;
	return 1;
}

int main()
{
	ios;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	w(t)
	{
		ll n,x,days=0;
		cin>>n>>x;

		mk(arr,n,ll);

		fo(i,0,n,1,ll)
			cin>>arr[i];

		sort(arr, arr+n);

		ll start = 0 , end = n-1;

		if(x>=arr[n-1])
			cout<<n<<endl;
        else if (x <= arr[start])
		{	
			fo(i,0,n,1,ll)
			{
				if(x == arr[i])
				{
					x = arr[i]*2;
					days++;
				}
				else
				{
					while(x<arr[i])
					{
						x*=2;
						days++;
					}
					x=arr[i]*2;
					days++;
				}
			}
			cout<<days<<endl;
		}
		else
		{
			bool loop = 0;

			while(arr[start] < x)
			{
				start++;
				days++;
			}

			ll m = start;

			while(start>0 && (arr[start-1]*2 >= arr[start] || close(arr[start-1],x,arr[start])))
			{
				loop = 1;
				start--;
				days--;
			}

			if(loop)
			{
				m = start;
				x = arr[m];
			}

			while(m<n)
			{
				if(arr[m]>x)
				{
					x*=2;
					days++;
				}
				else if(arr[m]==x)
				{
					x*=2;
					days++;
					m++;
				}
				else
				{
					x = arr[m]*2;
					m++;
					days++;
				}
			}

			cout << days << endl;
		}
	}

	return 0;
}
