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

bool isPrime(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int nextPrime(int a){
	bool nextPrime=false;
	while(!nextPrime){
		a++;
		if(isPrime(a)){
			nextPrime=true;
		}
	}
	return a;
}
void solve(){
	int n,m;cin>>n>>m;
	int k=nextPrime(n);
	if(k==m){
		cout<<"YES";
		return;
	}cout<<"NO";
	return;
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


 
