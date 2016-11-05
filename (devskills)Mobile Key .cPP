#include<iostream>
using namespace std;

int main()
{
    int n,i;
   unsigned long long d;
    cin>> n;
    for(i=1;i<=n;i++){
            cin>>d;
        cout<<"Case #"<<i<<": ";
        if((d & 1)==0)
        cout<<d*3<<" "<<(d*3)-1<<" "<<(d*3)-2<<endl;
        else
        cout<<(d*3)-2<<" "<<(d*3)-1<<" "<<(d*3)<<endl;

          cout<<endl;
    }

    return 0;
}
