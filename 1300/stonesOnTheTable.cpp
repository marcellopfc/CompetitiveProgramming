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
	int i,k=0;cin>>i;
	string s;cin>>s;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1])
			k++;
	}
	cout<<k;
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


 
