#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int k,n,m,x,y;
  while(cin>>k) {
    if(k==0) break;
    cin>>n>>m;
    while(k--) {
      cin>>x>>y;
      x = x - n; y = y - m;
      if(x==0 || y == 0) {
        cout<<"divisa\n";
      } else if(x>0 && y>0) {
        cout<<"NE\n";
      } else if(x<0 && y>0) {
        cout<<"NO\n";
      } else if(x<0 && y<0) {
        cout<<"SO\n";
      } else if(x>0 && y<0) {
        cout<<"SE\n";
      }
    }
  }
  return 0;
}
