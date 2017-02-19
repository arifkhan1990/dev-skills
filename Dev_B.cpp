#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
     int x1,y1,y2,x2,n;
     char ch;
     while(cin >> n){
            int rp1 = 0,rp2 =0 ,rp3 = 0, rp4 = 0,tt = 1;
            map<string,int>op1,op2,op3,op4;
        for(int i = 1 ; i<= n ;i++){
                int ans = 0;
            scanf("%d %c %d",&x1,&ch,&y1);
            string s="",s1="";
            s += x1+48,s += (char)ch,s += y1+48;
            s1 += y1+48,s1 += (char)ch,s1 += x1+48;
            if(ch == '+'){
                 if(op1.count(s)!= 0){
                    printf("Instruction %d: repeat step %d\n",i,op1.find(s)->second);
                 }else if(op1.count(s1) != 0){
                     printf("Instruction %d: repeat step %d\n",i,op1.find(s1)->second);
                 }else{
                     printf("Instruction %d: add %d to %d\n",i,x1,y1);
                     op1.insert(pair<string,int>(s,tt));
                     tt++;
                 }
            }else if (ch == '-'){
                if(op2.count(s) != 0){
                    printf("Instruction %d: repeat step %d\n",i,op2.find(s)->second);
                    rp2++;
                 }else{
                     printf("Instruction %d: subtract %d from %d\n",i,y1,x1);
                     op2.insert(pair<string,int>(s,tt));
                     tt++;
                 }
            }else if(ch == '*'){
                if(op3.count(s) != 0){
                    printf("Instruction %d: repeat step %d\n",i,op3.find(s)->second);
                    rp3++;
                 }else if(op3.count(s1) != 0){
                     printf("Instruction %d: repeat step %d\n",i,op3.find(s1)->second);
                     rp3++;
                 }else{
                     printf("Instruction %d: multiply %d with %d\n",i,x1,y1);
                     op3.insert(pair<string,int>(s,tt));
                     tt++;
                 }
            }else if(ch == '/'){
                if(op4.count(s) != 0){
                    printf("Instruction %d: repeat step %d\n",i,op4.find(s)->second);
                    rp4++;
                 }else{
                     printf("Instruction %d: divide %d by %d\n",i,x1,y1);
                     op4.insert(pair<string,int>(s,tt));
                     tt++;
                 }
            }
          }
        }
    return 0;
}
