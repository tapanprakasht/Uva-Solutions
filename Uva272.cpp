#include<iostream>
#include<cstring>
using namespace std;

int main() {
  string s;
  int c = 0;
  while(getline(cin,s)) {
    int l = s.length();
    for(int i=0;i<l;i++){
	    if(s[i]=='"'){
		    if(c==1){
          c--;
	 	      cout<<"''";
		    } else {
          c++;
          cout<<"``";
        }
	    } else {
        cout<<s[i];
      }
    }
    cout<<endl;
  }
}
