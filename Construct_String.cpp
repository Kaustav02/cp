#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string str, p = "";
        int n;
        cin >> n >> str;
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == str[i + 1])
            {
                c++;
            }
            else if (c == 1)
            {
                p += str[i];
                 c = 1;
            }
            else if (c == 2)
            {
                p += str[i];
                p += str[i];
                c = 1;
            }

            else
                
                {
                    p += str[i];
                    c = 1;
                }
        }
        cout << p << endl;
    }
    return 0;
}