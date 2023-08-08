#include<bits/stdc++.h>
using namespace std;
//Question is something like that we have a roartion array in which we can rotate the key (basically a circle) in both clockwise and anticlock wise direction and after that if  we will able to make such combination in which initial state is equla to final state then  it is poosible to return true; 
bool Ispossible(vector<int>&rotation){
    int n=rotation.size();
    //we have to every possible combination 
    //in which if element is present is clock wise and if number is not present take is anticlock wise direction
    for(int i=0;i<(1<<n);i++){
        int total_rotation=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)==1){
                total_rotation+=rotation[i];
            }else{
                 total_rotation-=rotation[i];
            }
        }
        if(total_rotation%360==0){
            return true;
        }
    } 
    return false;
}
int main(){

}