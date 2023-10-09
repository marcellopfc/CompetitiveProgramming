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
	int x;cin>>x;
	int a,b,n=0,max=0;
	cin>>a>>b;
	max=b-a;
	n=max;
	for(int i=1;i<x;i++){
		cin>>a>>b;
		n-=a;
		if(n+b>max)max=n+b;
		n+=b;
	}cout<<max;

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


 
