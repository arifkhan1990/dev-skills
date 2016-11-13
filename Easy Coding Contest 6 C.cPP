/*                         CODEMAN
                        Arif Khan Nihar
                    Problem - Easy Sequence


*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,i,k,l;
   int ar[45];
    ar[1] = 1;
    ar[2] = 3;
    for(i = 3 ; i < 45 ;i++)
         ar[i] = ar[i-1] + ar[i-2];
    cin >> n ;
    while(n--){
        cin>>k;
        cout<<ar[k]<<endl;
    }
    return 0;
}


