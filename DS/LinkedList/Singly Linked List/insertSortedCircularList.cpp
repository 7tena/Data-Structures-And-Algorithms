#include<bits/stdc++.h>
struct Node
{
  int data;
  struct Node *next;
  Node(int x){
      data = x;
      next = NULL;
  }
};

class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node *newnode = new Node(data);
       Node *temp;
       Node *prev;
       prev = NULL;
       temp = head;
       if(head == NULL){
         newnode->next = newnode;
         head = newnode;
       }
       if(temp->data > data){ //insert at front
           while(temp->next != head){
               temp = temp->next;
           }
           newnode->next = head;
           head = newnode;
           temp->next = head;
           
       }else{
         while(temp->data <= data){ //insert at middle or end
           if(temp == head && prev)
                break;
            prev = temp;
            temp = temp->next;
         }
         prev->next = newnode;
         newnode->next = temp;  
       }
       return head;
    }
};

void printList(struct Node *start)
{
  struct Node *temp;

  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("\n");
  }
}

int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  struct Node *start = NULL;
  struct Node *temp,*r;
    if(n>0){
      scanf("%d",&arr);
    
    temp = new Node(arr);
    start=temp;
    r=start;
    }
    for (i = 0; i<n-1; i++)
    {
        scanf("%d",&arr);
        temp = new Node(arr);
        r->next=temp;
        r=r->next;
    }
    if(n>0)
    temp->next=start;
    scanf("%d",&x);
    Solution ob;
    start = ob.sortedInsert(start,x);
    printList(start);
    r=start;
    while(r!=start->next)
    {

      temp=start;
      start=start->next;
      free(temp);
    }
    free(start);
}
  return 0;
}