//problem statement: Finding middle elements of linkedlist

//source:geeks for geeks

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
/* Function to get the middle of the linked list*/
int getMiddle(Node *head);
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		cout<<getMiddle(head)<<endl;
	}
	return 0; 
} 

// } Driver Code Ends


/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{ int count=1,i=0;
   if(head==NULL){
       cout<<-1<<endl;
   }else{
       Node *cur = head;
       while(cur->next!=NULL){
           cur=cur->next;
           count++;
       }
       if(count%2 == 0){
           cur = head;
           while(i!=count/2){
               cur=cur->next;
               i++;
           }
           return cur->data;
       }
       else{
           cur=head;
           while(i!= ((count+1)/2)-1){
               cur=cur->next;
               i++;
           }
           return cur->data;
       }
   }
}
