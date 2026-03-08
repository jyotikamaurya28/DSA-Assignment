/*Merge Two Sorted Linked Lists 
Merge Two Sorted Lists 
You are given the heads of two sorted linked lists list1 and list2. 
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists. 
Return the head of the merged linked list. 
 
Example 1: 
Input: list1 = [1,2,4], list2 = [1,3,4] Output: [1,1,2,3,4,4] 
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert node at end
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

// Print Linked List
void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Merge Function
Node* mergeLists(Node* list1, Node* list2) {

    Node* dummy = new Node();
    Node* tail = dummy;

    while(list1 != NULL && list2 != NULL) {

        if(list1->data <= list2->data) {
            tail->next = list1;
            list1 = list1->next;
        }
        else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    if(list1 != NULL)
        tail->next = list1;

    if(list2 != NULL)
        tail->next = list2;

    return dummy->next;
}

int main() {

    Node* list1 = NULL;
    Node* list2 = NULL;

    // List1: 1 2 4
    insert(list1,1);
    insert(list1,2);
    insert(list1,4);

    // List2: 1 3 4
    insert(list2,1);
    insert(list2,3);
    insert(list2,4);

    Node* merged = mergeLists(list1, list2);

    cout<<"Merged List: ";
    printList(merged);

    return 0;
}