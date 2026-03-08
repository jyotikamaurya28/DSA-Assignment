/*Find Middle Node 
Middle of the Linked List 
Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node. 
Example 1: 
Input: head = [1,2,3,4,5] 
Output: [3,4,5] 
Explanation: The middle node of the list is node 3. 
 
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

// Find Middle Node
Node* findMiddle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Print list from given node
void printList(Node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    Node* middle = findMiddle(head);

    cout<<"Middle to end: ";
    printList(middle);

    return 0;
}