/*                         CODEMAN
                        Arif Khan Nihar
                   Problem - Break Simulator


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double v,t,ans=0;
    int n;
    cin>>n;
    while(n--){
        cin>>v>>t;
        ans = (v/t)*(-1);
        printf("%.2lf\n",ans);
    }
    return 0;
}
