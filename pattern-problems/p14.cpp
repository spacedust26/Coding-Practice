#include<iostream>
using namespace std;

// A B C
// B C D
// C D E

int main(){
  int i = 0;
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< char('A'+i+j) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}