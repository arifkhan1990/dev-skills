#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double a,b,c,d;
    cin >>n;
    while(n--){
            cin >> a >> b >> c;
    d = sqrt((a*a)+(b*b)+(c*c));
    printf("%.2lf\n",d);
    }
    return 0;
}
