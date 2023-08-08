#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>totalSubset(vector<int>arr){
    int n=arr.size();
    vector<vector<int>>ans;
    for(int i=0;i<(1<<n);i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            if(i &(1 <<j)){
              temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
   return ans;
   //Xor of all subset Element is equla to zero 
   //n==1 it will not be zero;
}
int main(){
    
}