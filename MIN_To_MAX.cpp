#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int cnt=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<0<<endl;
    }

    else{
        int min = *min_element(arr, arr + n);

        for(int i=0;i<n;i++){
            if(arr[i]==min){
                cnt++;
            }
        }

        cout<<n-cnt<<endl;
    }

    

    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }



    return 0;
}