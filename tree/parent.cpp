//����˫�ױ�ʾ�����ṹ����
#define MAX_TREE_SIZE 100

typedef int ElemType;

typedef struct PTNode {
	ElemType data;      //�������
	int parent;         //˫��λ��
}PTNode;

typedef struct {
	PTNode nodes[MAX_TREE_SIZE];
	int x;              //����λ��
	int n;              //�����Ŀ
}PTree;