#include<iostream>
using namespace std;
int isMirrored(string s) {
  int i,j;
  for(i=0,j=s.length()-1;i<j;i++,j--) {
    if(s[i]=='A' && s[j] == 'A') continue;
    else if ((s[i]=='E' && s[j] == '3') || (s[i]=='3' && s[j] == 'E')) continue;
    else if ((s[i]=='H' && s[j] == 'H')) continue;
    else if ((s[i]=='I' && s[j] == 'I')) continue;
    else if ((s[i]=='J' && s[j] == 'L') || (s[i]=='L' && s[j] == 'J')) continue;
    else if ((s[i]=='M' && s[j] == 'M')) continue;
    else if ((s[i]=='O' && s[j] == 'O')) continue;
    else if ((s[i]=='S' && s[j] == '2') || (s[i]=='2' && s[j] == 'S')) continue;
    else if ((s[i]=='T' && s[j] == 'T')) continue;
    else if ((s[i]=='U' && s[j] == 'U')) continue;
    else if ((s[i]=='V' && s[j] == 'V')) continue;
    else if ((s[i]=='W' && s[j] == 'W')) continue;
    else if ((s[i]=='X' && s[j] == 'X')) continue;
    else if ((s[i]=='Y' && s[j] == 'Y')) continue;
    else if ((s[i]=='Z' && s[j] == '5') || (s[i]=='5' && s[j] == 'Z')) continue;
    else if ((s[i]=='1' && s[j] == '1')) continue;
    else if ((s[i]=='8' && s[j] == '8')) continue;
    else {
      return 0;
    }
  }
  return 1;
}
int main(int argc, char const *argv[]) {
  string s;
  int i,j,flag;
  while(cin>>s){
    flag = 0;
    for(i=0,j=s.length()-1;i<j;i++,j--) {
      if(s[i] != s[j]) {
        flag = 1; break;
      }
    }
    if(!flag) {
      if(isMirrored(s)) {
        cout<<s<<" -- is a mirrored palindrome.\n";
      } else {
        cout<<s<<" -- is a regular palindrome.\n";
      }
    } else {
      if(isMirrored(s)) {
        cout<<s<<" -- is a mirrored string.\n";
      } else {
        cout<<s<<" -- is not a palindrome.\n";
      }
    }
  }
  return 0;
}
