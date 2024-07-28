#include <iostream>
using namespace std;

void selection_sort(int a[],int n){
int temp,index;
      for(int i=0;i<n-1;i++){
            index=i;
        for(int j=i+1;j<n;j++){
            if(a[index]>a[j]){
                index=j;
            }

        }
         if(i!=index){
                temp=a[i];
                a[i]=a[index];
                a[index]=temp;
            }
      }

}
 void print_array(int A[],int size){
     for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
 }
int main(){

    int ar[6]={12,67,45,8,34,9};
     print_array(ar,6);
     cout<<endl;
     selection_sort(ar,6);
     print_array(ar,6);

}
