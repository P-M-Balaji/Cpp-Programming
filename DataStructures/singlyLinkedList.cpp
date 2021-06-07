#include <iostream>
using namespace std;

int static size_;
class Node
{
public:
    int data;
    Node *next;
};

// Insert at beginning
void push(Node **head_ref, int n)
{
    Node *newnode = new Node();
    newnode->data = n;
    newnode->next = *head_ref;
    *head_ref = newnode;
    size_++;
}

// Insert at end
void append(Node **head_ref, int n)
{
    Node *temp = *head_ref;
    while (temp->next != NULL)
        temp = temp->next;
    Node *newnode = new Node();
    newnode->data = n;
    newnode->next = NULL;
    temp->next = newnode;
    size_++;
}

// Insert at a specific position
void insert(Node **head_ref, int n, int p)
{
    if (p < 1 || p > size_ + 1)
        cout << "Invalid position" << endl;
    else
    {
        if (p == 1)
            push(head_ref, n);
        else if (p == size_ + 1)
            append(head_ref, n);
        else
        {
            Node *newnode = new Node();
            newnode->data = n;
            Node *temp = *head_ref;
            Node *prev = NULL;
            while (--p && temp != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            newnode->next = temp;
            prev->next = newnode;
        }
    }
}

// Delete node at a specified position
void deleteNode(Node **head_ref, int p)
{
    if (*head_ref == NULL)
        cout << "List is empty" << endl;
    else if (p <= 0 || p > size_)
        cout << "Invalid position" << endl;
    else
    {
        Node *temp = *head_ref;
        if (p == 1)
            *head_ref = temp->next;
        else
        {
            Node *prev = NULL;
            while (temp != NULL && --p)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
        }
        size_--;
        delete temp;
    }
}

void reverse(Node **head)
{
    Node *current = *head;
    Node *nextnode = NULL;
    Node *prev = NULL;
    while (current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    *head = prev;
}

void size(Node *node)
{
    int n = 0;
    while (node != NULL)
    {
        node = node->next;
        n++;
    }
    cout << n << endl;
}

void removeDuplicates(Node *head_ref)
{
    Node *current, *temp, *dup;
    current = head_ref;
    while (current != NULL && current->next != NULL)
    {
        temp = current;
        while (temp->next != NULL)
        {
            if (current->data == temp->next->data)
            {
                dup = temp->next;
                temp->next = temp->next->next;
                delete (dup);
                size_--;
            }
            else
                temp = temp->next;
        }
        current = current->next;
    }
}

void getMax(Node *node)
{
    int max = node->data;
    while (node != NULL)
    {
        if (max < node->data)
            max = node->data;
        node = node->next;
    }
    cout << max << endl;
}

void getMin(Node *node)
{
    int min = node->data;
    while (node != NULL)
    {
        if (min > node->data)
            min = node->data;
        node = node->next;
    }
    cout << min << endl;
}

void isSorted(Node *node)
{
    if (node->next == NULL || node->next->next == NULL)
    {
        cout << "Sorted" << endl;
        return;
    }
    else
    {
        if (node->data < node->next->data)
        {
            node = node->next;
            while (node->next != NULL)
            {
                if (node->data > node->next->data)
                {
                    cout << "Not sorted" << endl;
                    return;
                }
                node = node->next;
            }
            cout << "Sorted in Ascending order" << endl;
        }
        else
        {
            node = node->next;
            while (node->next != NULL)
            {
                if (node->data < node->next->data)
                {
                    cout << "Not sorted" << endl;
                    return;
                }
                node = node->next;
            }
            cout << "Sorted in Descending order" << endl;
        }
    }
}

void display(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        if (node->next != NULL)
            cout << "->";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insert(&head, 8, 4);
    push(&head, 5);
    push(&head, 4);
    deleteNode(&head, 2);
    append(&head, 6);
    insert(&head, 8, 4);
    display(head);
    size(head);
    deleteNode(&head, 4);
    reverse(&head);
    display(head);
    append(&head, 1);
    push(&head, 8);
    display(head);
    removeDuplicates(head);
    display(head);
    isSorted(head);
    getMin(head);
    getMax(head);

    return 0;
}