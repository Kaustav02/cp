#include <bits/stdc++.h>
using namespace std;



void solve(){
int n,a,b;
	  
	  cin>>n>>a>>b;
      int sum=0;
      if(n==1){
	    cout<<b<<endl;
	    
	}
    // else{
	//   for(int i=0;i<n;i++){
	//     if(i%2==0){
	//       sum=sum+(i*a);
	//     }
	//     else{
	//       sum=sum+(i*b);
	//     }


    //   }
    else{
        for(int i=0;i<n;i++){
            if(i%2==0){
                sum=sum+(i*a);
            }
            else{
                sum=sum+(i*b);
            }
        }

        cout<<sum<<endl;
    }






}



int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
