#include <stdio.h>

typedef int ElementType;

typedef struct tagNode
{
  ElementType Data;
  struct tagNode *NextNode;
} Node;

// 노드 생성
Node *SLL_CreateNode(ElementType NewData)
{
  Node *NewNode = (Node *)malloc(sizeof(Node));

  NewNode->Data = NewData;  // 데이터를 저장한다.
  NewNode->NextNode = NULL; // 다음 노드에 대한 포인터는 NULL로 초기화한다.

  return NewNode; // 노드의 주소를 반환한다.
}

void SLL_DestroyNode(Node *Node)
{
  free(Node);
}