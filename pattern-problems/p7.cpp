#include<iostream>
using namespace std;

// 1
// 22
// 333
// 4444

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< i+1;
      j++;
    }
    cout<<endl;
    i++;
  }
}