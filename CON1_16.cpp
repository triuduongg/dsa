#include<bits/stdc++.h>
#define mod				 1000000007
#define ll				 long long
#define	p(x)			 pair<x,x>
#define v(x)			 vector<x>
#define tree			 node*
#define sz(a)			 a.size()
#define f 				 first
#define s 				 second
#define pb(a)			 push_back(a)
#define pf(a)			 push_front(a)
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)		 FOR(i,0,n)cin>>M[i]
#define cout(M,n)		 FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)		     memset(M,x,sizeof(M))
#define reset()			 FOR(i, 0, 1000001)A[i].clear(),check[i]=false
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)
#define pq(x )			 priority_queue<x>
#define neg_pq(x)		 priority_queue<x, vector<x>, greater<x>>
#define all(M)			 M.begin(),M.end()
using namespace std;

//_______________________NGUYỄN_NGỌC_TOÀN_______________________//


int main() {
	faster();
	int n, k; cin >> n >> k;
	int M[100][100];
	FOR(i, 0, n )FOR(j, 0, n )cin >> M[i][j];
	v(int) X(n);
	iota(all(X), 0);
	v(v(int)) res;
	do {
		int sum = 0;
		FOR(i, 0, n )sum += M[i][X[i]];
		if (sum == k)res.pb(X);
	} while (next_permutation(all(X)));
	cout << sz(res) << endl;
	for (auto x : res) {
		FOR(i, 0, n)cout << x[i] + 1 << " ";
		cout << endl;
	}
}

//_________________________B20DCPT173__________________________//