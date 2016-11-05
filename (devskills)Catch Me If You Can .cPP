#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,m=0,d,t;
    cin>>n;
    while(n--){

        cin>>x>>y>>d>>t;
        t-=1;
        int w = 0;
        printf("Case %d: ",++m);
        if((x*t)<(y*t)+d){
            w = 1;
        }
         if(w==0)cout<<"Abir will be arrested\n";
         else cout<<"Abir will survive\n";
    }
    return 0;
}
