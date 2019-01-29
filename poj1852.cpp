#include <stdio.h>
#include <iostream>

using namespace std;

int ant[1000000];

void solve(int length, int number){
  int early=0,late=0;
  for (int i = 0; i < number; i++) {
    early=max(early,min(ant[i],length-ant[i]));
    late=max(late,max(ant[i],length-ant[i]));
  }
  cout<<early<<' '<<late<<endl;
  return;
}

int main(){
  int n;
  cin>>n;
  for (int i = 0; i < n; i++) {
    int length,number;
    cin>>length>>number;
    for (int j = 0; j < number; j++) {
      cin>>ant[j];
    }
    solve(length,number);
  }
  return 0;
}
