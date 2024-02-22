#include<iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main(){
  int i = 0, k=1;
  while(i < 4){
    int j = 0;
    while(j <= i){
      cout<< k++ << ' ';
      j++;
    }
    cout<<endl;
    i++;
  }
}