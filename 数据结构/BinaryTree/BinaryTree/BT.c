#include<stdio.h>
#include<stdlib.h>

/*
	1.了解二叉树
	2.二叉树的遍历
*/

//	描述单一个体
typedef struct treeNode
{
	char data;		//数据字符表示
	struct treeNode* LChild;  //左子树指针
	struct treeNode* RChild;  //右子树指针
}TREE,*LPTREE;

//	*LPTREE 相当于 TREE*

LPTREE creatNode(char data)
{
	LPTREE newNode = (LPTREE)malloc(sizeof(TREE));
	newNode->data = data;
	newNode->LChild = NULL;
	newNode->RChild = NULL;
	return newNode;
}

//没有规律的树
void insertNode(LPTREE parentNode, LPTREE LChild, LPTREE RChild)
{
	parentNode->LChild = LChild;
	parentNode->RChild = RChild;
}

//打印当前节点中的元素
void printCurNodeData(LPTREE curData)
{
	printf("%c\t", curData->data);
}

//递归法
//先序：根左右
void preOrder(LPTREE root)
{
	if (root != NULL)
	{
		printCurNodeData(root);
		preOrder(root->LChild);
		preOrder(root->RChild);
	}
}
//非递归法遍历
//先序：根左右
void preOrderByStack(LPTREE root)
{
	if (root == NULL)
	{
		return;
	}
	//准备栈
	struct treeNode* stack[10];			//存储每次打印节点的位置
	int stackTop = -1;			//栈顶标记
	LPTREE pMove = root;		//从根节点开始打印
	while (stackTop != -1 || pMove)
	{
		//根 左 右
		//先找最左边
		while (pMove)
		{
			//把路径入栈+打印走过的节点
			printf("%c\t", pMove->data);
			stack[++stackTop] = pMove;
			pMove = pMove->LChild;
		}
		//没路了
		if (stackTop != -1)//说明栈不为空
		{
			pMove = stack[stackTop];  //获取栈顶元素
			stackTop--;			//出栈
			pMove = pMove->RChild;
		}
	}
}

//中序：左根右
void midOrder(LPTREE root)
{
	if (root != NULL)
	{
		midOrder(root->LChild);
		printCurNodeData(root);
		midOrder(root->RChild);
	}
}
//中序：左根右
void midOrderByStack(LPTREE root)
{
	if (root == NULL) 
	{
		return;
	}
	//准备栈
	struct treeNode* stack[10];			//存储每次打印节点的位置
	int stackTop = -1;			//栈顶标记
	LPTREE pMove = root;		//从根节点开始打印
	while (stackTop != -1 || pMove)
	{
		//把走过的节点入栈
		while (pMove)
		{
			//一直往左走，走过的节点入栈
			stack[++stackTop] = pMove;
			pMove = pMove->LChild;
		}
		//没路了
		if (stackTop != -1)//说明栈不为空
		{
			pMove = stack[stackTop];  //获取栈顶元素
			stackTop--;			//出栈
			printf("%c\t", pMove->data);
			pMove = pMove->RChild;
		}
	}
}

//后序：左右根
void lastOrder(LPTREE root)
{
	if (root != NULL)
	{
		lastOrder(root->LChild);
		lastOrder(root->RChild);
		printCurNodeData(root);
	}
}
//非递归
//后序：左右根
void lastOrderByStack(LPTREE root)
{
	if (root == NULL)
	{
		return;
	}
	//准备栈
	struct treeNode* stack[10];			//存储每次打印节点的位置
	int stackTop = -1;			//栈顶标记
	LPTREE pMove = root;		//从根节点开始打印
	LPTREE plastVisit = NULL;		//访问标记、
	//左右根
	while (pMove)
	{
		stack[++stackTop] = pMove;
		pMove = pMove->LChild;
	}
	while (stackTop != -1)
	{
		pMove = stack[stackTop--];
		//当前节点左右是否被访问
		if (pMove->RChild == NULL || pMove->RChild == plastVisit)
		{
			//如果被访问就可以打印当前节点数据
			printf("%c\t", pMove->data);
			plastVisit = pMove;		//改变标记的位置
		}
		else
		{
			//右边没有被访问到
			stack[++stackTop] = pMove;
			pMove = pMove->RChild;
			while (pMove)
			{
				stack[++stackTop] = pMove;
				pMove = pMove->LChild;
			}
		}
	}
}






int main()
{
	LPTREE A = creatNode('A');
	LPTREE B = creatNode('B');
	LPTREE C = creatNode('C');
	LPTREE D = creatNode('D');
	LPTREE E = creatNode('E');
	LPTREE F = creatNode('F');
	LPTREE G = creatNode('G');

	insertNode(A, B, C);
	insertNode(B, D, NULL);
	insertNode(D, NULL, G);
	insertNode(C, E, F);

	printf("先序遍历：\n");
	preOrder(A);
	printf("\n");
	printf("中序遍历：\n");
	midOrder(A);
	printf("\n");
	midOrderByStack(A);
	printf("\n");
	printf("后序遍历：\n");
	lastOrder(A);
	printf("\n");
	lastOrderByStack(A);
	printf("\n");

	system("pause");
	return 0;
}