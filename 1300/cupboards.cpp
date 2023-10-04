#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout<<#x <<" = "<< x << endl

using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const ll LINF=0x3f3f3f3f3f3f3f3fll;

void solve(){
	int x,l=0,m=0;cin>>x;
	int a,b,r=0;
	for(int i=0;i<x;i++){
		cin>>a>>b;
		l+=a;
		m+=b;
	}
	(l>x/2) ?r+=x-l:r+=l;
	(m>x/2) ?r+=x-m: r+=m;
	cout<<r<<endl;
}


int main(){_
	bool multi=false;
  if(multi){
  	int c;cin>>c;
    for(int i=0;i<c;i++){
    	solve(); 
    }
		return 0;
  }
    solve();
    return 0;
}


 
