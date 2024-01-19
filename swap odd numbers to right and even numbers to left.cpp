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
int temp=0;
while(left_pointer<right_pointer){
    if(v[left_pointer]%2!=0&& v[right_pointer]%2==0){
        temp=v[left_pointer];
        v[left_pointer++]=v[right_pointer];
        v[right_pointer++]=temp;
        
        
        
    }
   if(v[left_pointer]%2==0){
        v[left_pointer++];
    }
    if(v[right_pointer]%2!=0){
        v[right_pointer--];
    }
}
   for(int i=0;i<n;i++){
       cout<<v[i]<<endl;
   }
   
    return 0;
}
