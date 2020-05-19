#include<bits/stdc++.h>

int main(){
  
  string s1, s2;
  cout << "Enter the string: ";
  cin >> s1;
  
  s2 = s1;
  
  reverse(s1.begin(), s1.end());
  
  if(s1 == s2)
    cout << "The string is a Palindrome" << endl;
  else
    cout << "The string is not a palindrome" << endl;
  
  return 0;
}
  
