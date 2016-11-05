#include<bits/stdc++.h>
using namespace std;

int get_second( pair<string, int> i ){ return i.second; }
struct record{
    string name;
    int value;
};
int main()
{
    record *p1 = new record[21];
    map<string,int>mymap;
     map<string,int>::iterator it;
    int n,i,j,x,va;
    string s;
    cin>>n;
    while(n--){
        cin>>x;
        for(i=0;i<x;i++){
            cin>>s>>va;
            mymap.insert(pair<string,int>(s,va));
        }
        vector<int> v(mymap.size());
        transform(mymap.begin(),mymap.end(),v.begin(),get_second);
        sort(v.begin(),v.end());
       for(it=mymap.begin();it!=mymap.end();it++)cout<<(*it).first<<": "<<(*it).second;
    }
    return 0;
}
