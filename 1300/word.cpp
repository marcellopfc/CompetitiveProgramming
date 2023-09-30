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
	string s;cin>>s;
	int a=0;
	for(int i=0;i<s.length();i++){
		if(islower(s[i])){
			a++;
		}else{
		a--;
		}
	}
	if(a>=0){
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
	}else{
		for(int i=0;i<s.length();i++){
			s[i]=toupper(s[i]);
		}
	}
	cout<<s;
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
