#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 void mergeArray(int a[],int b[],int n1,int n2){
    
    int size=n1+n2;
    int c[size];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=b[j++];
        }
    }
    while(i<n1)
        c[k++]=a[i++];
    while(j<n2)
        c[k++]=b[j++];
   
    
 }
int main()
{
   int a[]={1,4,7,8,10};
   int b[]={2,3,9};
   int n1=sizeof(a)/sizeof(a[0]);
   int n2=sizeof(b)/sizeof(b[0]);
   mergeArray(a,b,n1,n2);
   return 0;
}
