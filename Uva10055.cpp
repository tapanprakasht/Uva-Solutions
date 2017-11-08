#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  long long a,b,d;
  while(cin>>a>>b) {
    d = (a>b)?(a-b):(b-a);
    cout<<d<<endl;
  }
  return 0;
}
