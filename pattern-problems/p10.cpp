#include<iostream>
using namespace std;

// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< i-j+1 << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}