#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x,va,ma,mi;
    string s,s1,s2;
    cin>>n;
    while(n--){
        cin>>x;
        ma=0,mi=1000000;
        for(i=0;i<x;i++){
            cin>>s>>va;
           if(ma<va)
            ma=va,s1=s;
            if(mi>va)
                mi = va,s2=s;
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
