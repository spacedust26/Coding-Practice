#include<iostream>
using namespace std;

// ****
//  ***
//   **
//    *

int main(){
  for(int i = 0 ; i < 4 ; i++){
    for(int k = 0 ; k < i; k++) {
      printf(" ");
    }
    for(int j = 0 ; j < 4-i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
}