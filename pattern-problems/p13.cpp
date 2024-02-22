#include<iostream>
using namespace std;

// A B C
// D E F
// G H I

int main(){
  int i = 0;
  char a = 'A';
  while(i < 3){
    int j = 0;
    while(j < 3){
      cout<< a++ << " ";
      j++;
    }
    cout<<endl;
    i++;
  }
}