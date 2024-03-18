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

void SLL_AppendNode(Node **Head, Node *NewNode)
{
  // 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
  if ((*Head) == NULL)
  {
    *Head = NewNode;
  }
  else
  {
    // 테일을 찾아 NewNode를 연결한다.
    Node *Tail = (*Head);
    while (Tail->NextNode != NULL)
    {
      Tail = Tail->NextNode;
    }
    Tail->NextNode = NewNode;
  }
}

Node *SLL_GetNodeAt(Node *Head, int Location)
{
  Node *Current = Head;

  while (Current != NULL && (--Location >= 0))
  {
    Current = Current->NextNode;
  }
  return Current;
}

void SLL_RemoveNode(Node **Head, Node *Remove)
{
  if (*Head == Remove)
  {
    *Head = Remove->NextNode;
  }
  else
  {
    Node *Current = *Head;
    while (Current != NULL && Current->NextNode != Remove)
    {
      Current = Current->NextNode;
    }
    if (Current != NULL)
    {
      Current->NextNode = Remove->NextNode;
    }
  }
}

void SLL_InsertAfter(Node *Current, Node *NewNode)
{
  NewNode->NextNode = Current->NextNode;
  Current->NextNode = NewNode;
}

int SLL_GetNodeCount(Node *Head)
{
  int Count = 0;
  Node *Current = Head;
  while (Current != NULL)
  {
    Current = Current->NextNode;
    Count++;
  }
  return Count;
}