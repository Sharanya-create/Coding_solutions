//max sequence of collatz conjuncture. Source:geeks for geeks

#include <iostream>
using namespace std;
typedef long long int l;
l collatz(l n);
l count=0;
int main() {
	l n,terms,max=0,i,number;
	cin>>n;
	for(i=1;i<n;i++){
	    terms=collatz(i);
	    if(terms>max){
	        max=terms;
	        number=i;
	    }
	    count=0;
	}
	cout<<number<<" "<<max;
	return 0;
}
l collatz(l n){
    if(n==1){
        count++;
        return count;
    }
    else{
        if(n%2==0){
            count++;
            return collatz(n/2);
        }
        else{
            count++;
            return collatz((3*n)+1);
        }
    }
}
