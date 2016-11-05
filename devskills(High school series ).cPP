/*                                      CODEMAN
                                     Arif khan Nihar
                                 devskills - Where is the gold?
                                      date - 4/11/2016
                                 */
#include<bits/stdc++.h>
using namespace std;
#define cube(n) n*n*n
int main()
{
    //freopen("in.txt","r",stdin);
    int i,n,m,r,c;
    long int sum;
    cin>>n;
    for(int j =1;j<=n; j++){
            sum = 0;
        cin>>m;
        printf("Case %d: ",j);
        for(int i = 1; i<= m ;i++)
            sum+= cube(i);

            cout<<sum<<endl;
    }

    return 0;
}

