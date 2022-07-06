#include<bits/stdc++.h>

using namespace std;    
void print_vec(vector<int> v){
   // cout<<"size of vector is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print_vec_pair(vector<pair<int,int> >v){
    cout<<"the size of vector is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" ";
    }cout<<endl;
}
int main() {
  /* vector<pair<int,int> > v ={{1,2},{3,4},{5,6},{7,8}};
  // print_vec_pair(v);
  
  vector<pair<int,int> >v2;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v2.push_back({x,y});
      // v2.push_back(make_pair(x,y));  these functions acts same 
      
  }
  print_vec_pair(v2);
  */
  
  
  //===========================================//
  
  // ARRAY OF VECTORS
  /*
  int N;
  cin>>N;
  vector<int> v[N];
  for(int i=0;i<N;i++){
      int n;
      cin>>n;
      for(int j=0;j<n;j++){
          int x;
          cin>>x;
          v[i].push_back(x);
      }
        print_vec(v[i]);
  } 
  */
  


// we have problems with array of vectors as arrays are fixed in size so if we have
// to increase the no of vectors in array we can't do so

// for this problem we use vector of vector

//=============================================//

// VECTOR OF VECTOR
 int N;
 cin>>N;
 vector<vector<int> > v;
 for(int i=0;i<N;i++){
     int n;
     cin>>n;
     vector<int> temp;
     for(int j=0;j<n;j++){
         int x;
         cin>>x;
         temp.push_back(x);
     }
     v.push_back(temp);
     
 }for(int i=0;i<v.size();i++){
   //  cout<<"the size of current vector is: "<<endl;
      print_vec(v[i]);
      }cout<<endl;
 

}
