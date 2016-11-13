/*                         CODEMAN
                        Arif Khan Nihar
                  Problem - My Merit Position


*/
#include<bits/stdc++.h>
using namespace std;

struct man_records{
string t_name;
double v;
}team_records[101];

bool cmp(const man_records &x, const man_records &y){
if(x.v != y.v)
return x.v > y.v;
else
 return x.t_name < y.t_name;
}
int main()
{
      int n,k=1;
      cin>>n;
      for(int i = 0; i< n ;i++){
             cin>>team_records[i].t_name;
            cin>>team_records[i].v;
      }
      stable_sort(team_records,team_records+n,cmp) ;

      for ( int  i  =  0 ;  i < n ; i++)  {
            if(team_records[i].v == team_records[i-1].v)
                cout<<k-1<<".";
            else cout<<k++<<".";
          cout<<team_records[i].t_name<<endl;
      }

    return 0;
}


