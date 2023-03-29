#include <bits/stdc++.h>
using namespace std;



void solve(){
int n,a,b;
	  
	  cin>>n>>a>>b;
      int sum=0;
      if(n%2==0){
        cout<<a*(n/2)+b*(n/2)<<endl;
      }
      else{
         cout<<a*(n/2)+b*(n/2+1)<<endl;
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
