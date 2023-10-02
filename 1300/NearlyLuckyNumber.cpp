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
	ll a;cin>>a;
	short int i,count=0;
	while(a!=0){
		i=a%10;
		if(i==4 or i==7){
			count++;
		}a/=10;
	}
	if(count==4 or count==7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
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


 
