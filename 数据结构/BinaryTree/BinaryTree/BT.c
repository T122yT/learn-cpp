#include<stdio.h>
#include<stdlib.h>

/*
	1.�˽������
	2.�������ı���
*/

//	������һ����
typedef struct treeNode
{
	char data;		//�����ַ���ʾ
	struct treeNode* LChild;  //������ָ��
	struct treeNode* RChild;  //������ָ��
}TREE,*LPTREE;

//	*LPTREE �൱�� TREE*

LPTREE creatNode(char data)
{
	LPTREE newNode = (LPTREE)malloc(sizeof(TREE));
	newNode->data = data;
	newNode->LChild = NULL;
	newNode->RChild = NULL;
	return newNode;
}

//û�й��ɵ���
void insertNode(LPTREE parentNode, LPTREE LChild, LPTREE RChild)
{
	parentNode->LChild = LChild;
	parentNode->RChild = RChild;
}

//��ӡ��ǰ�ڵ��е�Ԫ��
void printCurNodeData(LPTREE curData)
{
	printf("%c\t", curData->data);
}

//�ݹ鷨
//���򣺸�����
void preOrder(LPTREE root)
{
	if (root != NULL)
	{
		printCurNodeData(root);
		preOrder(root->LChild);
		preOrder(root->RChild);
	}
}
//�ǵݹ鷨����
//���򣺸�����
void preOrderByStack(LPTREE root)
{
	if (root == NULL)
	{
		return;
	}
	//׼��ջ
	struct treeNode* stack[10];			//�洢ÿ�δ�ӡ�ڵ��λ��
	int stackTop = -1;			//ջ�����
	LPTREE pMove = root;		//�Ӹ��ڵ㿪ʼ��ӡ
	while (stackTop != -1 || pMove)
	{
		//�� �� ��
		//���������
		while (pMove)
		{
			//��·����ջ+��ӡ�߹��Ľڵ�
			printf("%c\t", pMove->data);
			stack[++stackTop] = pMove;
			pMove = pMove->LChild;
		}
		//û·��
		if (stackTop != -1)//˵��ջ��Ϊ��
		{
			pMove = stack[stackTop];  //��ȡջ��Ԫ��
			stackTop--;			//��ջ
			pMove = pMove->RChild;
		}
	}
}

//���������
void midOrder(LPTREE root)
{
	if (root != NULL)
	{
		midOrder(root->LChild);
		printCurNodeData(root);
		midOrder(root->RChild);
	}
}
//���������
void midOrderByStack(LPTREE root)
{
	if (root == NULL) 
	{
		return;
	}
	//׼��ջ
	struct treeNode* stack[10];			//�洢ÿ�δ�ӡ�ڵ��λ��
	int stackTop = -1;			//ջ�����
	LPTREE pMove = root;		//�Ӹ��ڵ㿪ʼ��ӡ
	while (stackTop != -1 || pMove)
	{
		//���߹��Ľڵ���ջ
		while (pMove)
		{
			//һֱ�����ߣ��߹��Ľڵ���ջ
			stack[++stackTop] = pMove;
			pMove = pMove->LChild;
		}
		//û·��
		if (stackTop != -1)//˵��ջ��Ϊ��
		{
			pMove = stack[stackTop];  //��ȡջ��Ԫ��
			stackTop--;			//��ջ
			printf("%c\t", pMove->data);
			pMove = pMove->RChild;
		}
	}
}

//�������Ҹ�
void lastOrder(LPTREE root)
{
	if (root != NULL)
	{
		lastOrder(root->LChild);
		lastOrder(root->RChild);
		printCurNodeData(root);
	}
}
//�ǵݹ�
//�������Ҹ�
void lastOrderByStack(LPTREE root)
{
	if (root == NULL)
	{
		return;
	}
	//׼��ջ
	struct treeNode* stack[10];			//�洢ÿ�δ�ӡ�ڵ��λ��
	int stackTop = -1;			//ջ�����
	LPTREE pMove = root;		//�Ӹ��ڵ㿪ʼ��ӡ
	LPTREE plastVisit = NULL;		//���ʱ�ǡ�
	//���Ҹ�
	while (pMove)
	{
		stack[++stackTop] = pMove;
		pMove = pMove->LChild;
	}
	while (stackTop != -1)
	{
		pMove = stack[stackTop--];
		//��ǰ�ڵ������Ƿ񱻷���
		if (pMove->RChild == NULL || pMove->RChild == plastVisit)
		{
			//��������ʾͿ��Դ�ӡ��ǰ�ڵ�����
			printf("%c\t", pMove->data);
			plastVisit = pMove;		//�ı��ǵ�λ��
		}
		else
		{
			//�ұ�û�б����ʵ�
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

	printf("���������\n");
	preOrder(A);
	printf("\n");
	printf("���������\n");
	midOrder(A);
	printf("\n");
	midOrderByStack(A);
	printf("\n");
	printf("���������\n");
	lastOrder(A);
	printf("\n");
	lastOrderByStack(A);
	printf("\n");

	system("pause");
	return 0;
}