/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include <vector>





int main()
{
   int n,count=0,j=0;
   cin>>n;
  vector <int>v(n);
  vector <int>v2(n);
  for(int i=0;i<v.size();i++){
      cin>>v[i];
  }
   

for(int i=1;i<v.size();i++){
  v[i]+=v[i-1];
}
for(int i=0;i<v.size();i++){
    cout<<v[i];
}
    return 0;
}
