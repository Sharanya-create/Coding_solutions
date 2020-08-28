//problem statement: remove contiguous duplicates
//source: geeks for geeks

#include<iostream>
using namespace std;

typedef long int k1;
int main(){
  string s;
  k1 top=-1;
 
  
  getline(cin,s);
  char stack[s.length()];
  
  stack[++top]=s[0];
  
  for(k1 i=1; s[i]!='\0';i++){
      if(s[i]!=stack[top]){
          stack[++top]=s[i];
          
      }
      
  }
 
  for(k1 i=0; i<=top; i++){
      cout<<stack[i];
  }
  
  
  
      
  
  return 0;
}
