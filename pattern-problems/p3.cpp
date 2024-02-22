#include<iostream>
using namespace std;

// 1234
// 1234
// 1234
// 1234

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j < 4){
      cout<< j+1;
      j++;
    }
    cout<<endl;
    i++;
  }
}