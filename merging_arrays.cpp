//problem statement: merge two arrays that are sorted
//source:geeksforgeeks


#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
int main() {
	int T;
	cin>>T;
	while(T--){
	    l X,Y;
	    cin>>X>>Y;
	    l a[X+Y];
	
	for(l i=0;i<X+Y;i++){
	    
	   cin>>a[i];
	}
	
	l n=X+Y;
	sort(a,a+n);
	for(l i=0;i<n;i++){
	   cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}
