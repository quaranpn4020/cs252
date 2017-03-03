#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node* next;
} LinkedList;

LinkedList* llCreate() {
  return NULL;
}

void llDisplay(LinkedList* ll) {

  LinkedList* p = ll;
  
  printf("[");

  while(p != NULL) {
    // printf("%d, ", (*p).value);
    printf("%d, ", p->value);
    
    p = (*p).next;
  }

  printf("]\n");
}



void llAdd(LinkedList** ll, int value) {

  LinkedList* nn = (LinkedList*)malloc(1 * sizeof(LinkedList));
  nn->value = value;
  nn->next = NULL;

  LinkedList* p = *ll;

  if (p != NULL) {
  
    while(p->next != NULL) {
      
      p = (*p).next;
    }

    p->next = nn;

  } else {
    
    *ll = nn;
  }

  

}


int main() {
  LinkedList* ll = llCreate();

  llDisplay(ll);

  printf("add 5\n");
  llAdd(&ll, 5);
  llDisplay(ll);


  printf("add 2\n");
  llAdd(&ll, 2);
  llDisplay(ll);


  printf("add 8\n");
  llAdd(&ll, 8);
  llDisplay(ll);
}
