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
	int k[5];
	for(int i=0;i<5;i++){
		cin>>k[i];
	}
	int c=k[4];
	if(k[0]==1 or k[1]==1 or k[2]==1 or k[3]==1){
		cout<<c<<endl;
		return;
	}
	else{
		for(int i=1;i<=k[4];i++){
			if((i%k[0]!=0)&&(i%k[1]!=0)&&(i%k[2]!=0)&&i%k[3]!=0) c--;
		}
	}
	cout<<c<<endl;
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


 
