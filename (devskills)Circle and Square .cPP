#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d;
    double r,s,ar,s1;
    cin >> n;
    while(n--){
        cin >> r >> s;
       // d = 1.41421* s;
        s1 =  r * sqrt(2);
          //d = ceilf(d * 100) / 100;
         s1 = ceilf(s1 * 100) / 100;

       ///ar = sqrt(((r+r)*(r+r))/2);

       if( s1 != s)
         cout<<"No\n";
       else
        cout<<"Yes\n";
    }
    return 0;
}
