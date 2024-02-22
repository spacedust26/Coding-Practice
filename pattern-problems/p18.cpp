#include<iostream>
using namespace std;

// D
// C D
// B C D
// A B C D

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< char('D' - i + j) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}