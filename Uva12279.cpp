#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,p,g,a,k=1;
  while(cin>>n) {
    if(n==0) break;
    p = g =0;
    while(n--) {
      cin>>a;
      if(a>0) p++;
      else g++;
    }
    cout<<"Case "<<k<<": "<<p-g<<endl;
    k++;
  }
  return 0;
}
