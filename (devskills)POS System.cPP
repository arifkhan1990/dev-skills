/*                                       CODEMAN
                                      Arif Khan Nihar
                                   Problem - POS System

                                   */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double p1,amount;
    int q1,ans,n,k,g_a;
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
            amount = 0;
            cin>>k;
    while(k--){
        cin>>p1>>q1;
        amount += (p1*q1);
        }
    cin >> g_a;
    cout<<"Case "<<i<<": "<<(int)(g_a - amount)<<endl;
    }
    return 0;
}
