#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,m=0,x1,y1;
    cin>>n;
    while(n--){

        cin>>x>>y>>x1>>y1;
        printf("Case %d: ",++m);
        if(x1>=x && y1>=y) x = x1-x,y = y1-y,cout<<x+y<<endl;
        if(x>x1 && y>y1) x = x-x1,y = y-y1,cout<<x+y<<endl;
        if(x1>x && y>y1) x = x1-x,y = y-y1,cout<<x+y<<endl;
        if(x>x1 && y1>y) x = x-x1,y = y1-y,cout<<x+y<<endl;
    }
    return 0;
}
