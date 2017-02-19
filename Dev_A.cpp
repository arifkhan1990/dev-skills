#include<bits/stdc++.h>
using namespace std;
#define read freopen("in.txt","r",stdin)
#define pb push_back
#define rv reverse(s.begin(),s.end())
#define pf push_front
#define lli long long int
#define li long int

int main()
{
    int n,t,b,s,g,r,i = 0;
    long ma = -1111111111;
    cin >> n;
    while(n--){
            long t = 0;
        scanf("%d %d %d %d",&b,&s,&g,&r);
        t = (1*b) + (3*s) + (10*g) + (-5*r);
         ma = max(ma,t);
         if(t<0) t = 0;
         printf("Player %d: %ld\n",++i,t);
    }
    printf("High Score = %ld\n",ma);
    return 0;
}
