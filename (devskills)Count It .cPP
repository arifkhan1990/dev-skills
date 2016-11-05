#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,i,j,k,l=0,count[26];
    string a1,b1,c1;
    char ad[101],bd[101];
    int re;
    cin>> n;
    while(n--){
           for(i=0;i<26;i++)count[i]=0;
            c=j=re=0;
        cin >> a1;
        for(i=0;i<a1.size();i++){
           count[a1[i]-'a']++;
            }
          printf("Case %d:\n",++l);
          for(i=0;i<26;i++){
           if(count[i]!=0)
            printf("%c %d\n",'a'+i,count[i]);
            }
        }
    return 0;
}
