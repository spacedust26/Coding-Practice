#include<iostream>
using namespace std;

// A B C
// A B C
// A B C

int main(){
  int i = 0;
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< char('A' + j) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}