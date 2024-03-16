#include <stdio.h>

typedef int ElementType;

typedef struct tagNode
{
  ElementType Data;
  struct tagNode *TextNode;
} Node;