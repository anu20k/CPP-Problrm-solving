//{ Driver Code Starts
//Initial template for C++

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
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node *head){
        
        Node* prev = NULL;
        Node* curr=head;
        Node* next;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node* temp = head;
        Node* temp1 = reverse(temp);
        Node* temp2 = temp1;
        
        int c=1;
        
       
        while(temp2->next!=NULL){
            
            int sum = temp2->data + c;
            
            if(sum>9){
                temp2->data = 0;
                c=1;
            }else{
                temp2->data = sum;
                c=0;
            }
            
            temp2=temp2->next;
        }
        
         if(temp2->next == NULL){
            int sum = temp2->data + c;
            
            if(sum>9){
                temp2->data = 0;
                c=1;
            }else{
                temp2->data = sum;
                c=0;
            }
        }
        if(c==1){
            
            Node* newnode = new Node(1);
            temp2->next = newnode;
            
        }
        
        temp = reverse(temp1);
        
        return temp;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
