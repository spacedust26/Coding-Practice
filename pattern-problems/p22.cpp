#include<iostream>
using namespace std;

//    1
//   121
//  12321
// 1234321

int main(){
  for(int i = 0 ; i < 4 ; i++){
    for(int k = 0 ; k < 3 - i ; k++) {
      printf(" ");
    }
    for(int j = 0 ; j < i+1 ; j++){
      cout<< j+1 ;
    }
    int k = i;
    for(int l = 0 ; l< i ; l++){
      cout<< k--; 
    }
    cout<<endl;
  }
}