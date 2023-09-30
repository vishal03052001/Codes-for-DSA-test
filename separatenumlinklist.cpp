#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int num, temp = 10, s;
    node *head = NULL;
    cout << "Enter the number  ";
    cin >> num;
    while ((num / temp) > 10)
    {
        temp = temp * 10;
    }
    while (temp >= 1)
    {
        s = (num / temp) % 10;
        temp = temp / 10;
        insert(head, s);
    }
    cout << "Given linked list\n";
    display(head);
}
