#include<bits/stdc++.h>

using namespace std;    




int main() {
  //vector<int> v={1,2,3,4,5,6,7};
 /* for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
  }
  */
   // vector<int> :: iterator it = v.begin(); // declaring an iterator
  // to access the value of iterator 
 // cout<<*it+1<<endl;
 
 /*
 for(it=v.begin();it!=v.end();it++){
     cout<<*it<<" ";
 }
 */
  //vector<pair<int,int> > v ={{1,2},{3,4},{5,6},{7,8}};
  vector< pair<int,int> >  v_p={{1,2},{3,4},{5,6},{6,7}};
  vector< pair<int,int> > :: iterator it = v_p.begin();
  for(it = v_p.begin();it!= v_p.end();it++){
    // cout<<(*it).first <<" "<<(*it).second<<endl;
     cout<<(it->first) <<" "<<(it->second)<<endl; // same as above 
     // more preffered
 }
 
  
  
  
 

}
