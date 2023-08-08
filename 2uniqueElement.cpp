#include<bits/stdc++.h>
using namespace std;
vector<int>ReturnTwoUniqueElement(vector<int>&arr){
    int xorAllElement=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        xorAllElement^=arr[i];
    }
    int countset=0;
    while(xorAllElement){
        if((xorAllElement&1)==1){
            break;
        }
        countset++;
        xorAllElement>>=1;
    }
    int firstElement=0;
    int secondElement=0;
    for(int i=0;i<n;i++){
        if(arr[i]&(1<<countset)==1){
            firstElement^=arr[i];
        }else{
            secondElement^=arr[i];
        }
    }
    return {firstElement,secondElement};
}
int main(){

}