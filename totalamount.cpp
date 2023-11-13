#include <iostream>
using namespace std;

int main() {
int totalamount;
  cout<<"enter total amount"<<endl;
  cin>>totalamount;
  int hundered=totalamount/100;
  int twenty=(totalamount%100)/20;
  int one=((totalamount%100)/20)%20;
  int op;
  cout<<"enter the no of notes you want";
  cin>>op;
  switch(op){
    case 100: cout<<hundered<<endl;
    break;
    case 20:cout<<twenty<<endl;
    break;
    case 1:cout<<one<<endl;
    break;
    
  }
  
  
}