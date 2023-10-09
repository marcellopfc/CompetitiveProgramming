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
	string t={};
	int i1=0,i2=0,i3=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='1')i1++;
		else if(s[i]=='2')i2++;
		else if(s[i]=='3')i3++;
	}
	for(int i=0;i<i1;i++){
		t+="1+";
	}

	for(int i=0;i<i2;i++){
		t+="2+";
	}
	for(int i=0;i<i3;i++){
		t+="3+";
	}t.pop_back();
	cout<<t<<endl;
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


 
