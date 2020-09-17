#include<iostream>
 using namespace std;
 int kadane(int a[],int size){
    int current_sum=0;
    int best_sum=0;
    for(int i=0;i<size;i++){
        current_sum+=a[i];
        if(best_sum<current_sum)
            best_sum=current_sum;
        if(current_sum<0)
            current_sum=0;
    }
    return current_sum;
 }
 int main(){
    int a[]={1,2,-3,4,5,6};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"max sub array sum is:-"<<kadane(a,size);
    return 0;
 }
