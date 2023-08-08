#include<bits/stdc++.h>
using namespace std;
int merge(int low,int mid,int high,vector<int>&arr){
    vector<int>temp;
    while()
}
int mergerSort(int low,int high,vector<int>&arr){
    if(low<high){
        int mid=(low+high)/2;
        mergerSort(low,mid,arr);
        mergerSort(mid+1,high,arr);
        merge(low,mid,high,arr);
    }
}
int countInversion(vector<int>&num){
    int 
}
int main(){
    return  0;
}