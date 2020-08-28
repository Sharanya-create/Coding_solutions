//problem statement: Find the element that is missing in an array
//source: geeks for geeks

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main() {
	int T;
	l n,sum=0,val;
	cin>>T;
	while(T--){
	    cin>>n;
	    l val;
	   
	    for(l i=0;i<n-1;i++){
	        
	        
	        cin>>val;
	        sum=sum+val;
	        
	        
	    }
	   // cout<<"sum:"<<sum<<endl;
	    l natsum=(n*(n+1))/2;
	   cout<<natsum-sum<<endl;
	   sum=0;
	   //cout<<endl; 
	  
	}
	
	return 0;
}
