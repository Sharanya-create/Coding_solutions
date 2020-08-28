/*Problem Statement: Output the reduced string after removing k consecutive identical characters

source: GeeksforGeeks */

#include<iostream>
using namespace std;

typedef long int k1;
int main(){
  string s;
  k1 top=-1;
  k1 k;
  cin>>k;
  getline(cin,s);
  char stack[s.length()];
  k1 freq[s.length()];
  stack[++top]=s[0];
  freq[top]=1;
  for(k1 i=1; s[i]!='\0';i++){
      if(s[i]==stack[top]){
          freq[top]++;
          if(freq[top]==k){
              top--;
          }
      }
      else{
          stack[++top]=s[i];
          freq[top]=1;
      }
  }
  if(top!=-1){
  for(k1 i=0; i<=top; i++){
      cout<<stack[i];
  }
  }
  else{
      cout<<"-1";
  }
  
      
  
  return 0;
}
