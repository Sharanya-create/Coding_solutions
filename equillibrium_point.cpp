//find equillibrium point of array
//source:geeksforgeeks

#include <iostream>
using namespace std;
typedef long long int l;

int main() {
	int T;
	cin>>T;
	while(T--){
	    l n,sum=0,sum_r=0,sum_l=0;
	    int found=0;
	    scanf("%lld",&n);
	    l a[n];
	   
	    for(l i=0;i<n;i++){
	        scanf("%lld",&a[i]);
	        sum=sum+a[i];
	    }
	     if(n==1){
	        cout<<1<<endl;
	
	    }
	    
	    else{
	        for(l i=0;i<n;i++){
	           
	           
	           sum_r=(sum-sum_l)-a[i];
	           if(sum_l==sum_r){
	               found=1;
	               cout<<i+1<<endl;
	               break;
	           }
	           sum_l=sum_l+a[i];
	        }
	        if(found==0){
	            cout<<-1<<endl;
	        }
	    }
	}
	return 0;
}
