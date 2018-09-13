#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
   int pindex=start;
   int pivot=arr[end];
   int temp,i;
   for(i=start;i<end;i++){
       if(arr[i]<=pivot){
        temp=arr[i];
        arr[i]=arr[pindex];
        arr[pindex]=temp;
        pindex++;
       }
   }
   temp=arr[end];
   arr[end]=arr[pindex];
   arr[pindex]=temp;
   return pindex;
}
void quicksort(int arr[],int start,int end){
   if(start<end){
      int pindex=partition(arr,start,end);
      quicksort(arr,start,pindex-1);
      quicksort(arr,pindex+1,end);
    }
}
int main(){
   int n;
   cin>>n;
   int *a=new int[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   quicksort(a,0,n-1);
   for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
   return 0;
}
