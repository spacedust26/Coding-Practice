#include<iostream>
using namespace std;

// 123
// 456
// 789

int main(){
  int i = 0, k=1;
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< k++;
      j++;
    }
    cout<<endl;
    i++;
  }
}