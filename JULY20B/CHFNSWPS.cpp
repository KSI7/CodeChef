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
typedef unordered_map<ll, ll> umii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef set<pii> spii;
typedef priority_queue<int> pqi;

const int mod = 1e9 + 7;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main()
{
	ios;
	
	w(t)
	{
		int n;
		cin>>n;
		
		mk(arrA,n,ll);
		mk(arrB,n,ll);
		
		ll big = (ll)1e10;
		
		umii freqtotal, freqhalf, ref; 

		fo(i,0,n,1,int)
		{
			cin>>arrA[i];
			big = min(big,arrA[i]);
			freqtotal[arrA[i]]++;
		}

		fo(i,0,n,1,int)
		{
			cin>>arrB[i];
			big = min(big,arrB[i]);
			freqtotal[arrB[i]]++;
		}
		
		bool flag = 0;
		
		for(auto x : freqtotal)
		{
			if(x.S & 1)
			{
				flag = 1;
				break;
			}	
			else
				freqhalf[x.F] = x.S / 2;
		}

		if(flag)
		{
			cout<<-1<<endl;
			continue;
		}
		
	    ref = freqhalf;
	    
		vi vecA,vecB;
		
		fo(i,0,n,1,int)
		{	
			if (ref[arrA[i]])
				ref[arrA[i]]--;
			else
				vecA.pb(arrA[i]);
		}

		ref = freqhalf;
		
		fo(i,0,n,1,int)
		{
			if(ref[arrB[i]])
				ref[arrB[i]]--;
			else
				vecB.pb(arrB[i]);
		}
		
		if(vecA.size() == 0 || vecB.size() == 0)
			cout<<0<<endl;
		
		else if (vecA.size() != vecB.size())
			cout<<-1<<endl;
		else
		{
    		ll minswaps = 0;
    		
    		sort(vecA.begin(),vecA.end());
    		sort(vecB.begin(),vecB.end(),greater<int>());
    
    		fo(i,0,vecA.size(),1,int)
    			
    			minswaps += min(2*big,min(vecA[i],vecB[i]));
    			
    		cout<<minswaps<<endl;
		}
	}
	return 0;
}
