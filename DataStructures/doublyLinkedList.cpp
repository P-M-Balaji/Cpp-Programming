#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev, *next;
};

static int size;
Node *head = new Node();
Node *tail = new Node();

// Insert at beginning
void push(int n)
{
    Node *newnode = new Node();
    newnode->data = n;
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    if (head == NULL)
        head = tail = newnode;
    else
        head = newnode;
    size++;
}

// Insert at end
void append(int n)
{
    Node *newnode = new Node();
    newnode->data = n;
    newnode->prev = tail;
    newnode->next = NULL;
    if (tail != NULL)
        tail->next = newnode;
    if (tail == NULL)
        head = tail = newnode;
    else
        tail = newnode;
    size++;
}

// Insert at a specific position
void insert(int n, int pos)
{
    if (abs(pos) > size + 1 || pos == 0)
        cout << "Invalid position" << endl;

    else if (pos == 1 || pos == -size - 1)
        push(n);

    else if (pos == size + 1 || pos == -1)
        append(n);

    else
    {
        Node *newnode = new Node();
        newnode->data = n;
        if (pos > 0)
        {
            Node *temp = head;
            while (--pos)
                temp = temp->next;
            newnode->next = temp;
            newnode->prev = temp->prev;
            temp->prev->next = newnode;
            temp->prev = newnode;
        }
        else
        {
            Node *temp = tail;
            while (++pos)
                temp = temp->prev;
            newnode->prev = temp;
            newnode->next = temp->next;
            temp->next->prev = newnode;
            temp->next = newnode;
        }
        size++;
    }
}

// Delete node at a specified position
void deleteNode(int pos)
{
    if (head == NULL)
        cout << "List is empty" << endl;
    else if (abs(pos) > size || pos == 0)
        cout << "Invalid position" << endl;
    else if (pos == 1 || pos == -size)
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        head->prev = NULL;
        size--;
    }

    else if (pos == size || pos == -1)
    {
        Node *temp = tail;
        tail = temp->prev;
        delete temp;
        tail->next = NULL;
        size--;
    }

    else
    {
        if (pos > 0)
        {
            Node *temp = head;
            while (--pos)
                temp = temp->next;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            size--;
        }
        else
        {
            Node *temp = tail;
            while (++pos)
                temp = temp->prev;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            size--;
        }
    }
}

void reverse()
{
    Node *current = head;
    Node *temp = NULL;
    while (current != NULL)
    {
        current->prev = current->next;
        current->next = temp;
        temp = current;
        current = current->prev;
    }
    current = head;
    head = tail;
    tail = current;
}

void removeDuplicates()
{
    Node *current, *temp, *dup;
    current = head;
    while (current != NULL && current->next != NULL)
    {
        temp = current;
        while (temp->next != NULL)
        {
            if (current->data == temp->next->data)
            {
                dup = temp->next;
                temp->next = temp->next->next;
                temp->next->prev = temp;
                delete (dup);
                size--;
            }
            else
                temp = temp->next;
        }
        current = current->next;
    }
}

// Head to tail traversal
void display1()
{
    Node *node = head;
    while (node != NULL)
    {
        cout << node->data;
        if (node->next != NULL)
            cout << "<=>";
        node = node->next;
    }
    cout << endl;
}

// Tail to head traversal
void display2()
{
    Node *node = tail;
    while (node != NULL)
    {
        cout << node->data;
        if (node->prev != NULL)
            cout << "<=>";
        node = node->prev;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    tail = NULL;
    push(5);
    push(6);
    push(7);
    append(7);
    append(9);
    insert(0, 6);
    display1();
    display2();
    cout << size << endl;
    deleteNode(3);
    display1();
    display2();
    cout << size << endl;
    removeDuplicates();
    display1();
    cout << size << endl;
    reverse();
    display1();
    cout << size << endl;
    return 0;
}
