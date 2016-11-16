/*                                       CODEMAN
                                      Arif Khan Nihar
                                  Problem - Number Sort

                                   */

#include<bits/stdc++.h>
using namespace std;

struct match_records{
            string t_name;
            double n;

    }team_records[1001];

bool cmp(const match_records &x, const match_records &y)
{
  return x.n < y.n;
}
int main()
{
   freopen("in.txt","r",stdin);
    int n,k;
    scanf("%d",&n);
    while(n--){
       scanf("%d",&k);
       for(int i = 0; i<k ; i++){
            double kl;
           char s[9];
           char *p;
          scanf("%s",s);
        kl = strtod(s,&p);
        team_records[i].n = kl;
        team_records[i].t_name = s;
       }
      stable_sort(team_records,team_records+k,cmp);

      for(int i = 0; i < k ; i++){
        if(i != k-1)
        cout<<team_records[i].t_name<<",";
        else
        cout<<team_records[i].t_name<<endl;
      }
    }

    return 0;
}


