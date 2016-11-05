#include <bits/stdc++.h>
using namespace std;

int main() {
	int t_t,ad[101],s,p,sum=0,i,n;
	while(cin >> t_t >> p){
            sum=n=0;
	for(i=0;i<p;i++){
		cin>>s;
		sum+=s;
	}
    while(t_t>0){
    t_t-=sum;
    n++;
    }
    if(n==1)
    cout<<"Project will finish within "<<n<<" day.\n";
    else
    cout<<"Project will finish within "<<n<<" days.\n";

	}

	return 0;
}
