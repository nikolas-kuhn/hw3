#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node*& head, Node*& smaller, Node*& larger, int pivot) {
  // base case
  if (head == NULL) {
    smaller = NULL;
    larger = NULL;
    return;
  }

  //save first noad then separate whats left
  Node* current = head;
  head = head->next;
  llpivot(head, smaller, larger, pivot);

  //attached saved node to correc tlist
  if (current->val <= pivot) {
    current->next = smaller;
    smaller = current;
  }
  else {
    current->next = larger;
    larger = current;
  }
}

