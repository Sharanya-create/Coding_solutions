//problem statement: array sorting containg, 0s, 1s and 2s
//source:geeksforgeeks

#include <iostream>
using namespace std;
typedef long long int l;
int main() {
	int T;
	cin>>T;
	while(T--){
	    l n;
	    cin>>n;
	    l stack0[n],stack1[n],stack2[n],top0=-1,top1=-1,top2=-1;
	    for(l i=0;i<n;i++){
	        int val;
	        cin>>val;
	        if(val==0){
	            stack0[++top0]=val;
	        }else if(val == 1){
	            stack1[++top1]=val;
	        }
	        else{
	            stack2[++top2]=val;
	        }
	    }
	    for(l i=top0;i>=0;i--){
	        cout<<stack0[i]<<" ";
	    }
	    for(l i=top1;i>=0;i--){
	        cout<<stack1[i]<<" ";
	    }
	    for(l i=top2;i>=0;i--){
	        cout<<stack2[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
