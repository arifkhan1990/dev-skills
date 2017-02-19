#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long r1,r2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%ld %ld",&r1,&r2);
        cout << 2*((r1*r2)/__gcd(r1,r2))<< endl;
    }
    return 0;
}
