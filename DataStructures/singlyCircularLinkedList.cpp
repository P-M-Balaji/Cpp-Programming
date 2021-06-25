#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int static size_;
Node *tail = NULL;

void push(int n)
{
    Node *newnode = new Node();
    newnode->data = n;
    if (tail == NULL)
        tail = newnode;
    else
        newnode->next = tail->next;
    tail->next = newnode;
    size_++;
}

void append(int n)
{
    Node *newnode = new Node();
    newnode->data = n;
    if(tail!=NULL){
        newnode->next = tail->next;
        tail->next = newnode;
    }
    else
        newnode->next = newnode;
    
    tail = newnode;
    size_++;
}

void create()
{
    int n, l;
    cout << "Enter the number of elements:";
    cin >> n;
    cout << "Enter the elements:";
    while (n--)
    {
        cin >> l;
        append(l);
    }
}

void insertnode(int n, int p)
{
    if (p < 1 || p > size_ + 1)
        cout << "Invalid position" << endl;
    else
    {
        if (p == 1)
            push(n);
        else if (p == size_ + 1)
            append(n);
        else
        {
            Node *newnode = new Node();
            newnode->data = n;
            Node *temp = tail;
            while (--p && temp->next!= tail)
                temp = temp->next;
            newnode->next = temp->next;
            temp->next = newnode;
            size_++;
        }
    }
}

void deletenode(int pos){
    if(tail==NULL)
        cout<<"List is empty";
    else if(tail->next==tail){
        Node *temp = tail;
        delete temp;
        tail = NULL;
        size_--;
    }
    else{
        Node *prev = tail;
        Node *temp = tail->next;
        while(--pos && temp!=tail){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        if(temp == tail){
            tail = prev;

        delete temp;
        size_--;
        }
    }
}

void display()
{
    Node *node = tail->next;
    while (node != tail)
    {
        cout << node->data;
        cout << "->";
        node = node->next;
    }
    cout<<tail->data;
    cout << endl;
}

int main()
{
    create();
    push(0);
    insertnode(8,3);
    display();
    deletenode(3);
    display();
    return 1;
}
