#include<bits/stdc++.h>
using namespace std;
int f(vector<int>&arr,int low ,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
int quicsortAlgorthm(vector<int>&arr ,int low,int high){
   if(low<high){
      int PIndex=f(arr,low,high);
      quicsortAlgorthm(arr,low,PIndex-1);
      quicsortAlgorthm(arr,PIndex+1,high);
   }
}
int main(){

}