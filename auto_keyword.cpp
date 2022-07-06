#include<bits/stdc++.h>

using namespace std;    




int main() {
  vector<int> v = {1,2,3,4,5,6,7};
  for(auto i: v){
      cout<<i<<" ";
    }cout<<endl;
    /*
    for(int value : v){
        cout<<value<<" ";    
    }   
    */
    vector< pair<int,int>  > vp = {{1,2},{1,3},{1,4},{1,5}};
    for(pair<int,int> &value : vp){
        cout<<value.first<<" "<<value.second<<endl;
    } 
    
    // auto keyword automatically determines the datatype
    // helpful in cases of iteartors
    
    
    
}
