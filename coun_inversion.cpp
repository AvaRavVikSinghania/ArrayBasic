#include<bits/stdc++.h>
using namespace std;
int merge(int low,int mid,int high,vector<int>&arr){
    vector<int>temp;
   int left=low;
   int right=mid+1;
   int cnt=0;
   while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(arr[right]);
        cnt+=(mid-left+1);
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
   return cnt;
}
int mergersort(int i,int j,vector<int>&arr){
        int cnt=0;
        if(i>=j) return cnt;
        int mid=(i+j)/2;
        cnt+= mergersort(i,mid,arr);
        cnt+=mergersort(mid+1,j,arr);
        cnt+=merge(i,mid,j,arr);
        return cnt;
}
int count_inversion(vector<int>&arr){
    int n=arr.size();
    int a=mergersort(0,n-1,arr);
}
int main(){
    vector<int>arr={5,3,2,4,1};
    cout<<count_inversion(arr);
    return 0;

}