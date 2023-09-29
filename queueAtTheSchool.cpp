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
	int i,j;cin>>i>>j;
	string x;cin>>x;
	char c;
	while(j){
		for(int i=0;i<x.length()-1;i++){
			c=x[i];
			if(c=='B' && x[i+1]=='G'){
				x[i]='G';
				x[i+1]='B';
				i++;
			}
		}
		j--;
	}
	cout<<x<<endl;
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
 
