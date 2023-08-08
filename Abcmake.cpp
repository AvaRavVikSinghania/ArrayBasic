#include<bits/stdc++.h>
using namespace std;
int count_insertion(string word){
    int count=0;
    int n=word.size();
    int i=0;
    while(i<n){
        if(i+2<n){
            if(word[i]=='a' && word[i+1]=='b' && word[i+2]=='c'){
              i+=3;
            }
            else if(word[i]=='a' && word[i+1]=='b'){
                  count+=1;
                  i+=2;
            }
            else if(word[i])
        }
    }
}
int  main(){

}