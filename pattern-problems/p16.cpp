#include<iostream>
using namespace std;

// A
// B C
// D E F

int main(){
  int i = 0;
  char k = 'A';
  while(i < 3){
    int j = 0;
    while(j <= i){
      cout<< k++ << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}