#include<bits/stdc++.h>
//O(n^3) solution
void trpletSum(int a[],int size,int sum){
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        for(int k=0;k<size;k++){
            if(a[i]+a[j]+a[k]==sum){
              cout<<a[i]<<a[j]<<a[k];
            }
        }
      }
    }
}
//O(n^2) solution
void tripletSum(int a[],int size,int sum){
  for(int i=0;i<size-2;i++){
    int l=i+1;
    int r=size-1;
    while(l<r){
      if(a[i]+a[l]+a[r]==sum){
        cout<<a[i]<<a[l]<<a[r];
      }else if(a[i]+a[l]+a[r]<sum)
              l++;
            else
              r++;
    }
  }
}
//O(n^2) solution using set but will have repeat number anomalie
void trpletSum(int a[],int size,int sum){
for(int i=0;i<size-1;i++){
         int current_sum=x-arr[i];
         set<int> s;
         for(int j=i+1;j<size;j++){
             if(s.find(current_sum-arr[j])!=s.end()){
                 //cout<<arr[i]<<" "<<current_sum-arr[j]<<" "<<arr[j]<<endl;
                 int result[]={arr[i],current_sum-arr[j],arr[j]};
                 sort(result,result+3);
                 cout<<result[0]<<" "<<result[1]<<" "<<result[2]<<endl;
             }
             s.insert(arr[j]);
         }
     }
     }
 int main(){
   int a[]={1,5,2,3,4,6};
   int size=sizeof(a)/sizeof(a[0]);
   FindTriplet(a,size,6);
   return 0;
 }
