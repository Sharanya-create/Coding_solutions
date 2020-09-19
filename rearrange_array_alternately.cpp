//rearrange array as first is max, then min, then second max,second min so on elements
//source:geeksforgeeks

#include <iostream>
using namespace std;
typedef long long int l;
int main() {
	int T;
	cin>>T;
	while(T--){
	    l n,i=0;
	    cin>>n;
	    l a[n];
	    for(l i=0;i<n;i++){
	        cin>>a[i];
	    }
	   l j=n-1;
	        if(n%2==0){
	        for(l k=0,m=n-1; k<n/2 && m>=n/2;k++,m--){
	            
	            cout<<a[m]<<" "<<a[k]<<" ";
	        }
	        }else{
	            for(i=0,j=n-1; i<n/2 && j>=n/2;j--,i++){
	            if(i!=j){
	                
	            cout<<a[j]<<" "<<a[i]<<" ";
	            }
	        }
	        cout<<a[i]<<" ";
	        }
	        
	        cout<<endl;
	}
	return 0;
}
