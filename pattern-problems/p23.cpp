#include<iostream>
using namespace std;

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main(){
 int i = 0;
 while(i < 5){
  int j = 5 - i;
  int k = 1;
  while(j > 0){
    cout << k++;
    j--;
  }
  k = 0;
  while(k < i){
    cout<<"**";
    k++;
  }
  k = 5 - i;
  int p = 5 - i;
  while(p > 0){
    cout << k--;
    p--;
  }
  cout<<endl;
  i++;
 }
}