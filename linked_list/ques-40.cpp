/*40.	Detect Loop in Linked List 
Given head, the head of a linked list, determine if the linked list has a cycle in it. 
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter. 
 
Return true if there is a cycle in the linked list. Otherwise, return false. 
Example 1: 
  
Input: head = [3,2,0,-4], pos = 1 
Output: true 
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert node
void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Detect Loop Function
bool detectLoop(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {

    Node* head = NULL;

    insert(head,3);
    insert(head,2);
    insert(head,0);
    insert(head,-4);

    // Creating cycle (tail -> node 2)
    head->next->next->next->next = head->next;

    if(detectLoop(head)) {
        cout<<"Loop detected"<<endl;
    }
    else {
        cout<<"No Loop"<<endl;
    }

    return 0;
}