//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	
	Node* temp=head;
	int n=0;
	int mid=0;
	int cnt=1;
	while(temp !=NULL){
	    
	    temp=temp->next;
	    n++;
	}
	
	if(n%2==0){
	    mid=n/2;
	    
	}
	else{
	    mid=(n+1)/2;
	}
	temp=head;
	while(cnt < mid){
	    temp=temp->next;
	    cnt++;
	}
	
	Node* insert_to = new Node(x);
	
	insert_to->next = temp->next;
	temp->next = insert_to;
	
	return head;
	
	
	
}
