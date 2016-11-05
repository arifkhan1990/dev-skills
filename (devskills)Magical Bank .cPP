#include<iostream>
using namespace std;
int main()
{
    int n,x,c,i;
    cin>>n;
    while(n--){
            c=0;
        cin>>x;
        for(i=1;x>0;i++){
            x-=i;
            c++;
        }
    cout<<c<<endl;
    }
    return 0;
}
