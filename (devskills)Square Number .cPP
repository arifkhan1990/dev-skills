#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x,i,y;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        y = sqrt(x);
        printf("Case %d: ",i);
        if(y*y == x) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
