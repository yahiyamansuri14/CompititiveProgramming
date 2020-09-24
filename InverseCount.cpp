#include <bits/stdc++.h>

using namespace std;
long long merge(int a[],int left,int mid,int right){
    int i=left,j=mid,k=0;
    long long count=0;
    int temp[right-left+1];
    while(i<mid && j<=right){
        if(a[i]>=a[j]){
            temp[k++]=a[i++];
        }else{
            temp[k++]=a[j++];
            count+=mid-i;
        }
    }
    while(i<mid){
        temp[k++]=a[i++];
    }
    while(j<=right){
        temp[k++]=a[j++];
    }
    for(int i=left,k=0;i<=right;i++,k++){
        a[i]=temp[k];
    }
    return count;
}
long long mergeSort(int a[],int left,int right){
    long long count=0;
    if(right>left){
        int mid=(left+right)/2;
        long long leftcount=mergeSort(a,left,mid);
        long long rightcount=mergeSort(a,mid+1,right);
        long long mycount=merge(a,left,mid+1,right);
        return leftcount+rightcount+mycount;
    }
    return count;
}
/*long long getInversions(long long *arr, int n)
{
    long long answer=mergeSort(arr,0,n);
    return answer;
}
*/
long long getInversion(int a[],int n){
  long long answer=mergeSort(arr,0,n);
  return answer;
}
#O(N) solution
void inverseCount(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j] && i<j)
                count++;
        }
    }
    cout<<count;
    
}
int main()
{
   int a[]={2,5,1,3,4};
   int size=sizeof(a)/sizeof(a[0]);
   inverseCount(a,size);
   getInversion(a,size);
   return 0;
}
