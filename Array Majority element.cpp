//problem statement: Find the element that appears more than N/2 times in an array.
//source: geeks for geeks

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main() {
	int T;
	cin>>T;
	while(T--){
	    l n,top=-1;
	    int found=0;
	    cin>>n;
	    l a[n],stack[n],freq[n];
	    
	    
	    for(l i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    stack[++top]=a[0];
	    freq[top]=1;
	    for(l i=1;i<n;i++){
	        if(a[i]==stack[top]){
	            freq[top]++;
	            if(freq[top]>n/2){
	                found=1;
	                break;
	                
	            }
	            
	            
	        }
	        else{
	            stack[++top]=a[i];
	            freq[top]=1;
	        }
	        
	    }
	    if(found!=1){
	        cout<<"-1"<<endl;
	    }else{
	        cout<<stack[top]<<endl;
	    }
	    
	}
	return 0;
}
