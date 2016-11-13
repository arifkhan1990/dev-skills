/*                         CODEMAN
                        Arif Khan Nihar
                Problem - Square Sum Difference

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,i,k,l=1;
   long long sum = 0 ,sumd = 0,ans ;
   int ar[45];
       cin>>n;
    while(n--){
            sum = 0 ,sumd = ans = 0,l=1;
        cin>>k;
        while(l<=k){
            sumd += l;
            sum += l*l;
            l++;
        }

        ans = sumd*sumd - sum;
        printf("%lld\n",ans);
    }
    return 0;
}



