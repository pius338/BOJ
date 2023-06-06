#include <iostream>
#include <vector>
using namespace std;

typedef struct node* treePointer;
typedef struct node
{
	char data;
	treePointer lChild, rChild;
};

vector<treePointer> tree(26, nullptr);

treePointer createNode(char data)
{
	treePointer newNode = new node();
	newNode->data = data;
	newNode->lChild = nullptr;
	newNode->rChild = nullptr;
	return newNode;
}

void preTraversal(treePointer curNode)
{
	if(curNode != nullptr)
	{
		cout << curNode->data;
		if(curNode->lChild != nullptr)
			preTraversal(tree[curNode->lChild->data - 'A']);
		if(curNode->rChild != nullptr)
			preTraversal(tree[curNode->rChild->data - 'A']);
	}
}

void inTraversal(treePointer curNode)
{
	if(curNode != nullptr)
	{
		if(curNode->lChild != nullptr)
			inTraversal(tree[curNode->lChild->data - 'A']);
		cout << curNode->data;
		if(curNode->rChild != nullptr)
			inTraversal(tree[curNode->rChild->data - 'A']);
	}
}

void postTraversal(treePointer curNode)
{
	if(curNode != nullptr)
	{
		if(curNode->lChild != nullptr)
			postTraversal(tree[curNode->lChild->data - 'A']);
		if(curNode->rChild != nullptr)
			postTraversal(tree[curNode->rChild->data - 'A']);
		cout << curNode->data;
	}
}

int main()
{
	int n;
	char d, l, r;
	
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> l >> r;
        tree[d - 'A'] = createNode(d);
        if(l != '.')
            tree[d - 'A']->lChild = createNode(l);
        if(r != '.')
            tree[d - 'A']->rChild = createNode(r);
    }
	preTraversal(tree[0]); cout << '\n';
	inTraversal(tree[0]); cout << '\n';
	postTraversal(tree[0]); cout << '\n';
}