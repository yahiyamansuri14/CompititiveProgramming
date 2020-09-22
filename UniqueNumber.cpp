#include<bits/stdc++.h>
 using namespace std;
 /* O(N) time-complexity and O(N) space-complexity
   int uniqueCharacter1(int arr[],int size){
    int hash[size]={0};
        for(int i=0;i<size;i++)
            hash[a[i]]++;
        for(int i=0;i<size;i++)
            if(hash[i]==1)
                return i;
  }
  /* O(N) time-complexity
  int uniqueCharacter(int arr[],int size){
    int result=arr[0];
     for(int i=1;i<size;i++){
         result=result^arr[i];
     }
     return result;
     
  }
 int main(){
     int a[]={2,3,1,6,3,6,2};
     cout<<uniqueCharacter(a,7);
     return 0;
 }
