#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,i,j,k,l=0;
    string a1,b1,c1;
    char ad[101],bd[101];
    int re;
    cin>> n;
    while(n--){
            c=j=re=0;
        cin >> a1 >> b1;
        if(a1.size()<b1.size())c1=b1,b1=a1,a1=c1;
        transform(a1.begin(), a1.end(), a1.begin(), ::tolower);
        transform(b1.begin(), b1.end(), b1.begin(), ::tolower);
        for(i=0;i<a1.size();i++){
            while(a1[i]==b1[j] && a1[i]!='\0'&& b1[j]!='\0'){
                c++;j++,i++;
            }
            re = max(re,c);
            c=0,j=0;
        }
        printf("Case %d: %d\n",++l,re);
    }
    return 0;
}
