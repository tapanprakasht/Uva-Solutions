#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,n,*a,min,max,i;
  cin>>t;
  while(t--) {
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++) {
      cin>>a[i];
    }
    max = min = a[0];
    for(i=1;i<n;i++) {
      if(a[i] > max ) {
        max = a[i];
      }
      if (a[i] < min) {
        min = a[i];
      }
    }
    cout<<2*(max-min)<<endl;
  }
  return 0;
}
