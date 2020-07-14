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

int getSum(int n)
{
	int sum;
	for (sum = 0; n > 0; sum += n % 10, n /= 10);
	return sum;
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
		int n;
		cin >> n;

		mk(arrA, n, int);
		mk(arrB, n, int);

		fo(i, 0, n, int)
		{
			cin >> arrA[i];
			cin >> arrB[i];
		}

		int pointsA = 0 , pointsB = 0;

		fo(i, 0, n, int)
		{
			int sumA = getSum(arrA[i]), sumB = getSum(arrB[i]);

			if (sumA > sumB)
				pointsA++;
			else if (sumA == sumB)
			{
				pointsA++;
				pointsB++;
			}
			else
				pointsB++;
		}

		if (pointsA > pointsB)
			cout << 0 << " " << pointsA << endl;
		else if (pointsA == pointsB)
			cout << 2 << " " << pointsA << endl;
		else
			cout << 1 << " " << pointsB << endl;
	}

	return 0;
}
