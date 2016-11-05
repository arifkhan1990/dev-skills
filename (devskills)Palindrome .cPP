#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j,k,l,ca=0,p;
    string a1,b1,c1,d1;
    size_t p1;
    char ch;
    char a2[10001],b2[10001];
    cin >> n;
    while(n--){
            cin >> a1;
            transform(a1.begin(), a1.end(), a1.begin(), ::tolower);
            b1 = a1;
        //reverse(a1.begin(),a1.end());
        for(i = 0 ,j=a1.size()-1;i<a1.size();i++,j--){
            if(a1[i]!=b1[j])break;
        }
        if(i==a1.size()) cout<<"Yes\n";
        else cout<<"No\n";
        //cout<<b1<< " == "<<a1<<endl;
    }

    return 0 ;
}

