#include<bits/stdc++.h>
using namespace std;
int culculate_water(vector<int>&height){
    int n=height.size();
    vector<int>prefixlarger(n,0);
    vector<int>suffixlarger(n,0);
   
    int ans=0;
   for(int i=0;i<n;i++){
    //ans+=min(largerleft[i],largerright[i])-height[i];
   }
   return ans;;
}
int main(){
    vector<int>temp;
    temp={1,2,4,2,6,8,2,5};
    cout<<culculate_water(temp)<<endl;
    return 0;
}