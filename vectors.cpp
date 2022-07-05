#include<bits/stdc++.h>

using namespace std;    
void print_vec(vector<int> v){
    cout<<"size of vector is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
   
 vector<int> v;  //we can use any data type we can also create vector of vector
 // vector<int> v(10,3). this implies that a vector of size of 10 is declared and each value is assigned a value of 3
 
 //int n;
 //cin>>n;
 /*
 for(int i=0;i<n;i++){
     int x;
     cin>>x;
     v.push_back(x);   // O(1) 
     
 }
 */
 v.push_back(7);   //adds element at the last of the vector
 v.push_back(6);
 
// v.pop_back(); // removes element from the end of the vector
 // pop_back function is of comlexity O(1)
 
 
  vector<int> v2=v;  // here a copy of v is done on v2 
  //time comlexity is O(n) as each element is copied 
  //if we make changes in v2 then no changes in v will be made
  // if we address for ex:-  vector<int> &v2=v;  then a copy is not created instead whole of the vector is passed into another vector
   v2.push_back(5);
   print_vec(v);
   print_vec(v2);
   
}
