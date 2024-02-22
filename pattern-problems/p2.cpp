#include<iostream>
using namespace std;

// 111
// 222
// 333

int main(){
  int i = 0;
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< i+1;
      j++;
    }
    cout<<endl;
    i++;
  }
}