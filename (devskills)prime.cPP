#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0,n;
   	cin >>n;
   	while(n--){
            count=0;
    cin>>num;
    for(int i=1;i<=sqrt(num);i++)
    if (num%i==0){
            count++;
           if(count>1) break;
    }
        if(count>1 || num<2)cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
