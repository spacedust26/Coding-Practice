#include<iostream>
using namespace std;

// A A A
// B B B
// C C C

int main(){
  int i = 0;
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< char('A' + i) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}