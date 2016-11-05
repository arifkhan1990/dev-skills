#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cx,cy,px,py,i;
    double r,d;
    cin >>n;
    for(i=1;i<=n;i++){
            cin >> cx >> cy >> r >> px >> py;
    d = sqrt(((px-cx)*(px-cx))+((py-cy)*(py-cy)));
    printf("Case %d: ",i);
    if(d<r)cout<<"Inside\n";
    else if(d==r) cout<<"OnCircle\n";
    else cout<<"Outside\n";
    }
    return 0;
}
