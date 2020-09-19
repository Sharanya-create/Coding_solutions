//problem statement: counting triplets in a given array, such that sum of two elements matches the third
//source: geeksforgeeks


#include <bits/stdc++.h>
using namespace std;
typedef long long int l;

int main() {
	int T;
	scanf("%d",&T);
	
	while(T--){
	    l n,count=0,sum=0;
	    scanf("%lld",&n);
	    l a[n];
	    for(l i=0;i<n;i++){
	       scanf("%lld",&a[i]);
	    }
	    sort(a, a+n);
	    
	   for(l i=n-1;i>0;i--){
	       l j=0,k=i-1;
	        while(j<k)
	        {
	            sum=a[j]+a[k];
	            
	            
	           
	                    if (sum==a[i]){
	                        count=count+1;
	                        k--;
	                        j++;
	                    }
	                    else if(sum<a[i]){
	                        j++;
	                    }
	                    else{
	                        k--;
	                    }
	                }
	            }
	        
	    
	     if(count!=0)
	    printf("%lld\n",count);
	    else
	   printf("%d\n",-1);
	   
	}
	return 0;
}
