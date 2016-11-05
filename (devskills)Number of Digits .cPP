#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(x<10)cout<<"1\n";
        else if(x<100)cout<<"2\n";
        else if(x<1000)cout<<"3\n";
        else cout<<"4\n";
    }
    return 0;
}

