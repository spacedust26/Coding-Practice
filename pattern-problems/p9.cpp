#include<iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< i+j+1 << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}