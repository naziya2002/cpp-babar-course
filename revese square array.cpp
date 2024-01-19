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
   

int left_pointer=0,right_pointer=v.size()-1;
vector <int> ans;
while(left_pointer<right_pointer){
    if(abs(v[left_pointer])<abs(v[right_pointer])){
        ans.push_back(v[right_pointer]*v[right_pointer]);
        right_pointer--;
        
    }
   else{
      
        
          ans.push_back(v[left_pointer]*v[left_pointer]);
    
        left_pointer++;
    }
   
}
// reverse(ans.begin,ans.end);
   for(int i=0;i<v.size();i++){
       cout<<ans[i]<<" ";
   }
   
    return 0;
}
