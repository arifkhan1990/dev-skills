#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j,k,l,ca=0,p;
    string a1,b1,c1,d1;
    size_t p1;
    char ch;
    char a2[10001],b2[10001];
    while(cin >> d1 ){
            ca=p=0;
            p1 = d1.find(',');
            a1 = d1.substr(0,p1);
            b1 = d1.substr(p1+1);
        reverse(a1.begin(),a1.end());
        reverse(b1.begin(),b1.end());
        k = max(a1.size(),b1.size());
    if(a1.size()==k)
            for(i = b1.size();i<k;i++)b1[i]= '0';
        else
             for(i = a1.size();i<k;i++)a1[i]= '0';

        for(i=0;i<k;i++){
                l = (a1[i]-48)+(b1[i]-48);
            if((l+ca)<10){
                a2[i]=((a1[i]-'0')+(b1[i]-'0')+ca)+48;
                ca=0;
            }else{
                a2[i]=(((int)((a1[i]-'0')+(b1[i]-'0')+ca))%10)+48;
                ca = 1;
            }
        }
        if(ca!=0)a2[i]=1+48;
        for(j=0;j<=i;j++){
            if(a2[j]>48)
                b2[p]=a2[j],p++;
            else
                if(strlen(b2)!=0) b2[p]=a2[j],p++;
        }
        c1=b2;
        reverse(c1.begin(),c1.end());
        cout<<c1<<endl;
        for(j=0;j<=i;j++) a2[j]=0,b2[j]=0;
    }
    return 0 ;

}
