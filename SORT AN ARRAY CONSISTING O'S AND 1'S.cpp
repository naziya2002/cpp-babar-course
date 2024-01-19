/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;






int main()
{
   int n,count=0;
   cin>>n;
   int arr[n],answerarr[n],j=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   for(int i=0;i<n;i++){
       if(arr[i]==0){
           count++;
       }
   }
   for(int i=0;i<count;i++){
       answerarr[j++]=0;
   }
   for(int i=count;i<n;i++){
       answerarr[j++]=1;
   }
   for(int i=0;i<n;i++){
       cout<<answerarr[i]<<endl;
   }
   
    return 0;
}
