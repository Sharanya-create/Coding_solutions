//problem statement:reverse words of a given string
//source:geeksforgeeks

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	cin.ignore();
	while(T--){
	    
	    string S;
	    vector <string> sentence;
	    getline(cin,S);
	    
	    stringstream ss(S);
	    string word;
	    while(getline(ss,word,'.')){
	        sentence.push_back(word);
	       
	    }
	     for(int i=sentence.size()-1;i>=0;i--){
	         cout<<sentence[i];
	         if(i!=0){
	             cout<<'.';
	         }
	     }       
	     cout<<endl;      
	      
	    
	}
	return 0;
}
