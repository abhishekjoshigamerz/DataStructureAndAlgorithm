#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *node;
    Node(int data1, Node *next)
    {
        data = data1;
        node = next;
    }
};

int main()
{

    vector<int> arr = {2, 5, 8, 7};
    Node *y1 = new Node(arr[0], nullptr);
    Node *y2 = new Node(arr[1], nullptr);
    Node *y3 = new Node(arr[2], nullptr);
    Node *y4 = new Node(arr[3], nullptr);
    y1->node = y2;
    y2->node = y3;
    y3->node = y4;
    cout << y1->data << " " << y1->node << "\n";
    cout << y2->data << " " << y2->node << "\n";
    cout << y3->data << " " << y3->node << "\n";
    cout << y4->data << " " << y4->node << "\n";
    return 0;
}
