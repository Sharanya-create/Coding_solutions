/*self created algorithm for computing gcd, for the purpose practicing two pointer technique algorithm. Not as effecient as recursion technique but has a best case time complexity of O(1), worst case of O(n^2)*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,not_divide=0,found=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int j=a[0],k;
   
	while(j>1){
		for(k=n-1;k>=0;k--){
			if(a[k]%j!=0){
				not_divide=1;
				break;
			}
		}
		if(not_divide){
			k=n-1;
			j--;
      not_divide=0;
		}
		else{
			found=1;
			cout<<j<<endl;
			break;
		}
	}
	if(!found){
		cout<<1<<endl;
	}
	
	
}
