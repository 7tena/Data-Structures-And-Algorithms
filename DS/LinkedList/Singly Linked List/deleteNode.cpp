#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;
// at a postion
void deleteAtPosition(int n){ 
    Node* temp = head;
    if(n == 0){
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=0; i<n-2; i++){
        temp = temp->next;
    }                               // temp points to (n-1)th node
    Node* temp1 = temp->next;       // temp1 points to nth node
    temp->next = temp1->next;       // delete nth node
    free(temp1);
}
// delete a node with key x
void deleteX(int x){
    Node* temp = head;              // key node
    Node* prev = NULL;              // node previous to key
    if(temp != NULL && temp->data == x){
        head = temp->next;
    }else{
        while(temp != NULL && temp->data != x){
            prev = temp; 
            temp = temp->next;
        }
        if(temp == NULL){
            return;                 // key not found
        }
        prev->next = temp->next;
        free(temp);
    }
}
/* delete a node with key x recursively
 To delete a node of a linked list recursively we need to do the following steps
      1.We pass node* (node pointer) as a reference to the function (as in node* &head)
      2.Now since current node pointer is derived from previous node’s next (which is passed by reference) 
          so now if the value of the current node pointer is changed, previous next node’s value also gets changed 
          which is the required operation while deleting a node (i.e points previous node’s next to current node’s (containing key) next).
      3.Find the node containing the given value.
      4.Store this node to deallocate it later using free() function.
      5.Change this node pointer so that it points to it’s next and by performing this previous node’s next also get properly linked.
*/
void recursiveDelete(Node* p, int x){
    if(p == NULL){
        return;                     // element not found
    }
    if(p->data == x){
        Node* t = p;
        p = p->next;
        free(t);
        return;
    }
    recursiveDelete(p->next, x);
}