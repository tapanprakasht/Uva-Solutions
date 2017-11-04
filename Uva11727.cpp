#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,a[3],i,j,temp;
  cin>>t;
  while (t--) {
    for(i=0;i<3;i++)
      cin>>a[i];
    for(i=0;i<3;i++) {
      for(j=0;j<2-i;j++) {
        if(a[j+1] < a[j]) {
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }
    }
    cout<<a[1]<<endl;
  }
  return 0;
}
