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
    int k = 0, c, x=0, y=0;
    for(int i=0;i<25;i++){
        cin>>c;
        if(c){
            x=i/5;
            y=i%5;
        }
    }
  //  dbg(x);dbg(y);
    cout<<((max(x,2)-min(x,2))+(max(y,2)-min(y,2)));
}
 
 
int main(){_
    bool multi = false;
    if(multi){
        int c;cin>>c;
         for(int i=0;i<c;i++){
            solve();
            cout<<endl; 
        }
        return 0;
    }
    solve();
    return 0;
}
