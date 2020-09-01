//program to find area of intersection of two rectangles.
#include<bits/stdc++.h>
 using namespace std;
 int main(){
     //fropen("input.txt","r",stdin);
     //fropen("output.txt","w",stout);
     int x1,y1,x2,y2;
     cin>>x1>>y1>>x2>>y2;
     int x3,y3,x4,y4;
     cin>>x3>>y3>>x4>>y4;
     int A=(x2-x1)*(y2-y1);
     int B=(x4-x3)*(y4-y3);
     int left=min(x1,x3);
     int right=min(x2,x4);
     int bottom=max(y3,y1);
     int top=min(y2,y4);
     int Aintr=0;
     if((left<right) && (bottom<right)){
         Aintr=(right-left)*(top-bottom);
     }
     int result=A+B-Aintr;
     cout<<result;
     return 0;
 }
