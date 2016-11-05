#include<iostream>
using namespace std;

int main()
{
    int n,x,y,i,p,l,k,sum=0,sum1=0;
    cin>>n;
    while(n--){
        cin>>x;
        sum=sum1=0;
        for(i=0;i<x;i++){
                cin>>p;
            sum+=p;
            if((p-i)>0)
            sum1+=p-i;
        }
        cout<<sum-sum1<<endl;
    }
    return 0;
}
