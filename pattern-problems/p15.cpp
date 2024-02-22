#include<iostream>
using namespace std;

// A
// B B
// C C C

int main(){
  int i = 0;
  while(i < 3){
    int j = 0;
    while(j <= i){
      cout<< char('A' + i) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}