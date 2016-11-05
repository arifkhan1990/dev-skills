#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t_f1r,t_s1r,t_f2r,t_s2r,f1_r1,f1_r2,s1_r1,s1_r2,f2_r1,f2_r2,s2_r1,s2_r2,n;
    cin>>n;
    while(n--){
            t_f1r = t_f2r = t_s1r = t_s2r = 0;
        cin>>f1_r1>>f1_r2>>s1_r1>>s1_r2;
        cin>>f2_r1>>f2_r2>>s2_r1>>s2_r2;
        t_f1r = f1_r1+f1_r2,t_s1r=s1_r1+s1_r2,t_f2r=f2_r1+f2_r2,t_s2r=s2_r1+s2_r2;
    if(t_f1r > t_s1r && t_f2r > t_s2r) cout<<"Banglawash\n";
    else cout<<"Miss\n";
    }
    return 0;

}
