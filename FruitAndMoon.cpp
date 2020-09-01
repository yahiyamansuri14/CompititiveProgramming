#include<bits/stdc++.h>
 using namespace std;
 bool canEquallyDistribute(int  fruits){
     return (fruits%11==1?true:false);
 }
 int main(){
     //fropen("input.txt","r",stdin);
     //fropen("output.txt","w",stout);
     int fruits;
     cin>>fruits;
     int foolMoon=0;
     while(!canEquallyDistribute(fruits)){
        foolMoon+=1;
        fruits=2*fruits;
     }
     cout<<foolMoon<<" "<<fruits<<endl;
     return 0;
 }
