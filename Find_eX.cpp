#include <bits/stdc++.h>

using namespace std;

int lcm(int a , int b){
    int a=7, b=5, c;
   if(a>b)
   c = a;
   else
   c = b;
   while(1) {
      if( c%a==0 && c%b==0 ) {
         break;
      }
      c++;
   }

   return c;
}

// void solve()
// {

//     long long a, b, c, d;
//     cin >> a >> b >> c >> d;
//     if((a+1)%b==(c+1)%d){
//         cout<<1<<endl;
//     }
//     else{

//     }
// }

int main()
{
     int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+1)%b==(c+1)%d){
            cout<<1<<endl;
            continue;
        }
        int val = lcm(b,d);
        cout<<val - (a%b)<<endl;
    }

    return 0;
}