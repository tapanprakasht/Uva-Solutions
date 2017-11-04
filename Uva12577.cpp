#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  string s;
  int k=1;
  while(cin>>s) {
    if(s == "*") break;
    cout<<"Case "<<k<<": ";
    if(s == "Hajj") cout<<"Hajj-e-Akbar\n";
    else cout<<"Hajj-e-Asghar\n";
    k++;
  }
  return 0;
}
