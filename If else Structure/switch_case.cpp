#include<iostream>
using namespace std;

int main(){
  int ratings=6;
  
  switch(ratings){
  case 1: cout<<"very poor"<<endl;
          break;
  case 2: cout<<"poor"<<endl;
          break;
  case 3: cout<<"average"<<endl;
          break;
  case 4: cout<<"good"<<endl;
          break;
  case 5: cout<<"very good"<<endl;
          break;
  default: cout<<"not defined"<<endl;
  
  }

return 0;
}
