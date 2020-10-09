#include<bits/stdc++.h>
 using namespace std;
 int main(){
    cout<<"Enter the length of string\n";
    int n;
    cin>>n;
    cout<<"Enter the strings\n";
    string s,t;
    cin>>s>>t;
    int cost=0;
    for(int i=0;i<n;){
        if(s[i]!=t[i]){
            //Either swap or flip and increment the cose
            if(i+1<n && s[i]!=s[i+1] && s[i+1]!=t[i+1]){
                i+=2;
                swap(s[i],s[i+1]);
            }else{
                i++;
            }
        }else{
            i++;
        cost++;
    }
    }
    cout<<cost<<endl;
    return 0;
 }
