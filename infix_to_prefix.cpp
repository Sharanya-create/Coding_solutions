#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int precedence(char ele);
void infix_to_postfix(char infix[],int m);
int main() {
    int i=0,m=0;
    char ch;
string infix1;
cin>>infix1;
char infix[infix1.length()];
for(int l=(infix1.length()-1);l>=0;l-- ){
    infix[m++]=infix1[l];
    //cout<<infix[--m];
}
//cout<<m;
infix[m]='\0';
//cout<<infix[m];
/*for(int i=0;i<=m;i++){
    cout<<infix[i];
}*/
while((ch=infix[i])!='\0'){
    if(ch=='('){
        infix[i]=')';
        //cout<<"done";
    }
    if(ch==')'){
        infix[i]='(';
    }
    i++;
    
}
/*for(int j=0;j<m;j++){
    cout<<infix[j];
}*/

infix_to_postfix(infix,m);
	return 0;
}
void infix_to_postfix(char infix[], int m){
    int top=-1,i=0,k=0,pr;
    char c,postfix[m],stack[m],x;
    stack[++top]='#';
    while((c=infix[i++])!='\0'){
        if(c=='('){
            stack[++top]=c;
        }
        else if(isalnum(c)){
            postfix[k++]=c;
        }
        else if(c==')'){
            while(stack[top]!='('){
                postfix[k++]=stack[top--];
            }
            x=stack[top--];
        }
        else{
            pr=precedence(c);
            if(c=='^'){
                pr++;
            }
            while(precedence(c)<=precedence(stack[top])){
                postfix[k++]=stack[top--];
            }
            stack[++top]=c;
        }
    }
    while(stack[top]!='#'){
        postfix[k++]=stack[top--];
    }
    postfix[k]='\0';
   for(int j=k-1;j>=0;j--){
       cout<<postfix[j];
   }
    
}
int precedence(char ele){
    switch(ele){
        case '#': return 0;
        case '(':return 1;
        case '+':
        case '-':return 2;
        case '*':
        case '/':return 3;
        case '^':return 4;
        default:cout<<"invalid"<<endl;
        
        
    }
}
