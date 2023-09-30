    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int x;cin>>x;
    	int a1,a2,a3,a4;
    	do{
    		x++;
     
    		a1=x%10;
    		a2=(x%100-a1)/10;
    		a3=(x%1000)/100;
    		a4=(x-a3)/1000;
    	}while(a1==a2 ||  a1==a3 || a1==a4 || a2==a3 || a2==a4 || a3==a4 );
    	//	cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl;
    	cout<<x;
     
    	return 0;
     
    }
