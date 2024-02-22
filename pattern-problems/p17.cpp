#include<iostream>
using namespace std;

// A
// B C
// C D E
// D E F G

int main(){
  int i = 0;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< char('A' + i + j) << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}