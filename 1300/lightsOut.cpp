// #include <bits/stdc++.h>
#include <iostream>
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
	short int a[3][3]={1,1,1,1,1,1,1,1,1};
	int b[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(b[i][j]%2){
				a[i][j]=(a[i][j]+1)%2;
				for(int k=i-1;k<i+2;k++){
					if(k>=0 && k<3){
						a[k][j]=(a[k][j]+1)%2;
					}
				}
				for(int k=j-1;k<j+2;k++){
					if(k>=0 && k<3){
              a[i][k]=(a[i][k]+1)%2;
            }
 
				}
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j];
		}cout<<endl;
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
