#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int>vis(103,0);
        //[-14,9,13,-26,47,-39,-49,-14,29]
        //9
        //4
       // int minElement=*min_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            vis[nums[i]+51]++;
            if((i+1)-k>=0){
                int count =0;
                for(int j=0;j<=102;j++){
                   cout<<j<<" "<<vis[j]<<" ";
                   if(vis[j]!=0){
                       count+=vis[j];
                   }
                   if(count==x){
                       cout<<count<<j-51<<endl;
                       if(j-51<=0)ans.push_back(j-51);
                       else ans.push_back(0);
                       break;
                   }
                }
                vis[nums[i-k+1]+51]--;
            }
        }
        return ans;
    }
};
int  main(){
     Solution solution;
     vector<int>temp={-14,9,13,-26,47,-39,-49,-14,29};
     vector<int>arr=solution.getSubarrayBeauty(temp,9,4);
     return 0;
}