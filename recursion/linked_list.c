#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// as linked list is a recursive data structure, we attempt to write some of it's
// function using recursion.


/* a single node in a linked list */
typedef struct node {
  int data;                // info part
  struct node *next;       // ref part
} node_t;




int length(node_t *ll) {
  if (ll == NULL) return 0;

  return (1 + length(ll->next));    // not tail recursion
}


void print(node_t *ll) {
  if (ll == NULL) return;

  printf("%d, ", ll->data);        // values are printed from start to end

  print(ll->next);                 // tail recursive call
}


void print_reverse(node_t *ll) {
  if (ll == NULL) return;

  print_reverse(ll->next);          // not a tail recursive call

  printf("%d, ", ll->data);        // values are printed from end to start
                                   // during the unwinding phase
}


bool search(node_t *ll, int item) {
  // base condition
  if (ll == NULL) return false;
  if (ll->data == item) return true;

  search(ll->next, item);           // tail recursive call
}


void insert(node_t *ll, int item) {
  // base condition, that exits the recursion
  if (ll == NULL) return;

  if (ll->next == NULL) {
    node_t *new_node = malloc(sizeof(node_t));

    new_node->next = NULL;
    new_node->data = item;

    ll->next = new_node;
  }

  insert(ll->next, item);
}



node_t* delete(node_t *ll) {
  if (ll->next == NULL) {
    free(ll);
    return NULL;
  }

  ll->next = delete(ll->next);
  return ll;
}



node_t* reverse(node_t *ll) {
  if (ll->next == NULL) return ll;

  node_t *reversed_ll = reverse(ll->next);

  // make the current node the last node
  ll->next->next = ll;

  // update the next of current node to NULL
  ll->next = NULL;

  return reversed_ll;  
}