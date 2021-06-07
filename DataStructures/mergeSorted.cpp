#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;

    return head;
}

Node *mergeSorted(Node *head1, Node *head2)
{
    Node *curr = NULL;
    Node *tail = NULL;
    Node *a = head1;
    Node *b = head2;
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    if (a->data <= b->data)
    {
        curr = tail = a;
        a = a->next;
    }
    else
    {
        curr = tail = b;
        b = b->next;
    }
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a == NULL)
    {
        tail->next = b;
    }
    else
    {
        tail->next = a;
    }
    return curr;
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int size1, size2;
    cout << "Enter size 1 ";
    cin >> size1;
    cout << "Enter size 2 ";
    cin >> size2;
    int num1, num2;
    for (int i = 0; i < size1; i++)
    {
        cin >> num1;
        head1 = insert(head1, num1);
    }
    for (int i = 0; i < size2; i++)
    {
        cin >> num2;
        head2 = insert(head2, num2);
    }
    printList(head1);
    printList(head2);
    Node *sorted = mergeSorted(head1, head2);
    printList(sorted);
}