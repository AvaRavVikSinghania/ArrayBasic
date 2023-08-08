#include<bits/stdc++.h>
using namespace std;
int findOmegas(vector<int> &A) {
    int maxelement=*max_element(A.begin(),A.end());
    vector<int>BitMask(maxelement+1);
    for(auto it:A){
        for(int i=2;i<=it;i++){
        if(it%(i*i)==0){
            BitMask[it]=1;
            break;
        }
       }
    }
    int mod=1e9+7;
    vector<int>dp(maxelement+1,0);
    dp[0]=1;
    for(int num=1;num<=maxelement;num++){
        if(BitMask[num]==0){
            for(int i=(1<<num)-1;i>=0;i--){
                if(dp[i]){
                    dp[i|(1<<num)]=(dp[i|(1<<num)]+dp[i])%mod;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<(1<<(maxelement+1));i++){
        ans=(ans+dp[i])%mod;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
       
    return  0;
    }
}