// not finish
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

/* Given a binary tree, print its nodes according to the 
"bottom-up" postorder traversal. */
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    cout << node->data << " ";
}

int cumulative(vector<int> fruit, bool is_max)
{
    int cumu = 0;
    int max = 0;
    for (auto x : fruit)
    {
        cumu += x;
        if (cumu > max)
        {
            max = cumu;
        }
    }
    if (is_max)
    {
        return cumu;
    }
    else
    {
        return max;
    }
}

int main()
{
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    int testCase = 0;
    int days, length_park;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {

        struct Node *root = new Node(0);
        cin >> days >> length_park;
        for (int day = 0; day < days; day++)
        {
            vector<int> fruit;
            int temp;
            struct Node *current = root;
            for (int j = 0; j < length_park; j++)
            {
                cin >> temp;
                fruit.push_back(temp);
            }
            // current->data =
            if (day == 0)
            {
                struct Node *left = new Node(cumulative(fruit, true));
                struct Node *right = new Node(cumulative(fruit, false));
                root->left = left;
                root->right = right;
                printPostorder(root);
            }
            // if (day == 0)
            // {
            //  = cumulative(fruit, false);
            // current->right = cumulative(fruit, true);
            // }
        }
    }

    // cout << "\nPostorder traversal of binary tree is \n";
    // printPostorder(root);

    return 0;
}