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
	int n;cin>>n;
	int *v=new int[n];
	for(int i=0;i<n;i++){
		int k;cin>>k;
		v[i]=k;
	}
	int minor=v[0],major=v[0];
	int count=-1,p1=0,p2=0;
	for(int i=1;i<n;i++){
		if(v[i]>major){
			major=v[i];
			p1=i;
		}if(v[i]<=minor){
			minor=v[i];
			p2=i;
		}
	}
	count=count+p1+(n-p2);
	if(p1>p2) count--;
	cout<<count;
	delete[]v;
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


 
