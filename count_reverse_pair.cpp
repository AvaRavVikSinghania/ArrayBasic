#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,vector<int>&arr){
    vector<int>temp;
   int left=low;
   int right=mid+1;
   while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(arr[right]);
        right++;
    }
   }
   while(left<=mid){
    temp.push_back(arr[left]);
    left++;
   }
   while(right<=high){
    temp.push_back(arr[right]);
    right++;
   }
   int index=low;
   for(int i=0;i<temp.size();i++){
      arr[low]=temp[i];
      low++;
   }
}
int count_pair(int low,int mid,int high,vector<int>arr){
    int right=mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++){
        while(right<=high && arr[low]>2*arr[right]){
            right++;
        }
       cnt+=right-(mid+1);
    }
}
int mergesort(int low,int high,vector<int>&arr){
    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
   cnt+=mergesort(low,mid,arr);
   cnt+=mergesort(mid+1,high,arr);
   cnt+=count_pair(low,mid,high,arr);
    merge(low,mid,high,arr);
    return cnt;
}
int count_reverse(vector<int>&arr){
    int n=arr.size();
    mergesort(0,n-1,arr);
}
int main(){

}