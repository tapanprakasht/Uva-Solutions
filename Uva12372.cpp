#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,l,w,h,k=1;
  cin>>n;
  while(n--) {
    cin>>l>>w>>h;
    if(l>20 || w>20 || h>20) {
      cout<<"Case "<<k<<": "<<"bad\n";
    } else {
      cout<<"Case "<<k<<": "<<"good\n";
    }
    k++;
  }
  return 0;
}
