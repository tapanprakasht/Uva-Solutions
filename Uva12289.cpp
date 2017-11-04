#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int t,two,one;
  string s;
  cin>>t;
  while(t--) {
    cin>>s;
    if(s.length() == 5) {
      cout<<"3"<<endl;
    } else {
        if(s[0]=='t' && s[1]=='w' && s[2]=='o') cout<<"2\n";
        else if(s[0]=='t' && s[1]=='w')  cout<<"2\n";
        else if(s[0]=='t' && s[2]=='o')  cout<<"2\n";
        else if(s[1]=='w' && s[2]=='o')  cout<<"2\n";
        else if(s[0]=='o' && s[1]=='n' && s[2]=='e') cout<<"1\n";
        else if(s[0]=='o' && s[1]=='n')  cout<<"1\n";
        else if(s[0]=='o' && s[2]=='e')  cout<<"1\n";
        else if(s[1]=='n' && s[2]=='e')  cout<<"1\n";
    }
  }
  return 0;
}
