#include <iostream>

using namespace std;

struct Node
{
    // Intilization The data and pointer
    int data;
    Node* next;
};

// Func To Add Number in The First OF linkedList
void pushFirst(Node** head_ref , int new_data)
{
    // Allocate The new node
    Node* new_node = new Node();

    // New node Take data which equal new node
    new_node ->data = new_data;

    // make new node equal the pointer of head reference ( the new data equal head )
    new_node ->next = (*head_ref);

    // move head ref to new node
    (*head_ref) = new_node;

}

void insert_After_specifyNode(Node* pre_node , int new_data)
{
    if(pre_node == NULL)
    {
        cout<<"The Previous Node cannot be NULL ";
        return;
    }
    // Allocate The new node
    Node* new_node = new Node();

    // New node Take data which equal new node
    new_node ->data = new_data;

    // Put The New node after pre_node
    new_node ->next = pre_node->next;

    //move the next of prev_node
    // as new_node
    pre_node ->next = new_node;
}

// Func To Put The Data at the Last
void append(Node** head_ref , int new_data)
{
    Node* new_node = new Node();

    // to put the last in the head ref
    Node* last = *head_ref;

    new_node->data = new_data;

    /* This new node is going to be
    the last node, so make next of
    it as NULL*/
    new_node->next = NULL;

    /* If the Linked List is empty,
    then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* Else traverse till the last node */
    while (last->next != NULL)
    {
        last = last->next;
    }
    /* Change the next of last node */
    last->next = new_node;
    return;

}

void linkedlist(Node* n)
{
    // if data or n not equal 0 continue add data
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        // After print data put the new value
        n = n->next;
    }
}


int main()
{

    // Give THe Pointer for each position in the linked list
    Node* head = NULL;


    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    pushFirst(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    pushFirst(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    insert_After_specifyNode(head->next, 8);

    cout<<"Created Linked list is: ";
    linkedlist(head);

    return 0;
}
