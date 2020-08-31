/* problem statement: 
Raju is a grocery shop owner.His weighing machine gets damaged, few weights are shown positive and few negative.A customer wants to buy 2 items such that difference between their weights will be minimum. Help him out
Input format:
N:number of items
A[n]:array of items
Output format:
Minimum Absolute value(A positive value)
Ex:
Inputs:
3
4 -6 1
Output :
Minimum value=|4-1|=3
Explanation:Raju can form 3 pairs with value |4-(-6)|=10   |1-4|=3 and |(-6)-1|=7 and minimum absolute value will be 3
Note:You cannot change values of weights from positive to negative or vice-versa(Ex -6 if taken as 6 then minimum might be 6-4=2 which should be avoided)*/




#include <iostream>
#include<cstdlib>
using namespace std;
typedef long long int l;
int main()
{
    l n,min,diff;
    cin>>n;
    l a[n];
    for(l i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0]-a[1];
    min=abs(min);
    
    for(l i=0;i<n;i++){
        for(l j=i+1;j<n;j++){
            if(j==1){
                continue;
            }
            diff= abs(a[i]-a[j]);
            
            
            if(diff<min){
                min=diff;
            }
            
    }
    }
    cout<<min<<endl;
}
