#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     //fropen("input.txt","r",stdin);
     //fropen("output.txt","w",stout);
     int n;
     cin>>n;
     int arr[1001]={0};
     for(int i=0;i<n;i++){
         int p1,p2;
         cin>>p1>>p2;
         arr[p1]++;
         arr[p2]++;
     }
     int max=0;
     for(int i=0;i<n;i++){
         if(max<arr[i])
            max=arr[i];
     }
     for(int i=0;i<n;i++){
         if(arr[i]==max)
            cout<<i<<endl;
     }
     return 0;
 }
