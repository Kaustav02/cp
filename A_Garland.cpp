#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin>>s;
    map<char,int>mp;
    for(auto x: s) mp[x]++;
    int sz=mp.size();
    if(sz==4 or sz==3) cout<<4<<endl;
    else if(sz==1) cout<<-1<<endl;
    else{
        for(auto x: mp){
            if(x.second==3) {
                cout<<6<<endl;
                return;
            }
        }
        cout<<4<<endl;
    }
}


int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();

    }



    return 0;
}