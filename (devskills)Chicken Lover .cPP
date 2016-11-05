#include<iostream>
using namespace std;

int main()
{
    int n,i,d;

    cin>> n;
    for(i=1;i<=n;i++){
            cin>>d;
          if(d<120)
          cout<<"Naughty Boy Sifat"<<endl;
          else
            cout<<"Good Boy Sifat\n";
    }

    return 0;
}

