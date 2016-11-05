/*                                      CODEMAN
                                     Arif khan Nihar
                                 devskills - Where is the gold?
                                      date - 4/11/2016
                                 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,n,m,r,c;
    char ch;
    vector<pair<int , int> >ans;
    cin>>n;
    for(m=1;m<=n;m++){
        cin>>r>>c;
        for(int i = 1; i<= r ; i++){
            for(int j = 1; j<=c ; j++){
                cin>> ch;
                if(ch == '$')
                    ans.push_back(make_pair(i,j));
            }
        }
        printf("Case %d:\n",m);
        if(ans.empty())
            cout<<"No Gold Found\n";
        else{
        for(int i = 0 ;i<ans.size();i++)
            cout<<ans[i].first<<","<<ans[i].second<<endl;
        }
        ans.clear();
    }
    return 0;
}
