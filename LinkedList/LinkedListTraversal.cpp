#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    int data;
    LinkedList *next;
    LinkedList(int data1, LinkedList *next1)
    {
        data = data1;
        next = next1;
    }
};
int main()
{
    vector<int> arr = {2, 5, 8, 7};
    LinkedList *ll = new LinkedList(arr[0], nullptr);
    LinkedList *current = ll;
    for (int i = 1; i < arr.size(); i++)
    {
        current->next = new LinkedList(arr[i], nullptr);
        current = current->next;
    }

    LinkedList *temp = ll;
    while (temp != nullptr)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }

    return 0;
}