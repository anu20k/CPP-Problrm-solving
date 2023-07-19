//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* first){
        
        struct Node* prev = NULL;
        struct Node* curr = first;
        struct Node* next;
        
        while(curr!=NULL){
            
            next = curr->next;
            curr->next = prev;
            
            prev=curr;
            curr=next;
        }
        
        return prev;
        
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        struct Node* temp1 = reverse(first);
        struct Node* temp2 = reverse(second);
        
        struct Node*  dummy= new Node(0);
        struct Node*  ans = dummy;
        int c=0;
        
        while(temp1!=NULL && temp2!=NULL){
            
            int sum = temp1->data + temp2->data+c;
            
            // if(sum==10){
            //     ans->data =0;
            //     c=1;
            // }
            if(sum>=10){
                int digit= sum%10;
                ans->next= new Node(digit);
                c=sum/10;
            }
            else{
                ans->next= new Node(sum);
                c=0;
            }
            
            
            ans=ans->next;
            
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
        
         while(temp1!=NULL ){
           
            int sum = temp1->data+c;
            int n = sum%10;
            ans->next= new Node(n);
            c = sum/10;
            ans=ans->next;
            temp1=temp1->next;
        
        }
         while(temp2!=NULL ){
            
             
            int sum = temp2->data+c;
            int n = sum%10;
            ans->next= new Node(n);
            c = sum/10;
            ans=ans->next;
            temp2=temp2->next;
        
        
        }
         if(c){
            ans->next=new Node(c);
        }
        first = reverse(dummy->next);
        
        return first;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
