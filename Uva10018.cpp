#include<iostream>
using namespace std;
long long findReverse(long long n) {
  long long mod,rev=0;
  while(n>0) {
    mod = n%10;
    rev = rev*10 + mod;
    n = n/10;
  }
  return rev;
}
int isPallindrome(long long n) {
  if(findReverse(n) == n) return 1;
  else return 0;
}
int main(int argc, char const *argv[]) {
  int t;
  long long n,rev,i,sum;
  cin>>t;
  while(t--) {
    cin>>n;
    i = 0;
    sum = n;
    do {
      i++;
      rev = findReverse(sum);
      sum = rev + sum;
    } while(!isPallindrome(sum));
    cout<<i<<" "<<sum<<endl;
  }
  return 0;
}
