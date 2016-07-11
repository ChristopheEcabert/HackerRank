/**
 *  @file   insert.cpp
 *  @brief  HackerRank LinkedList - Insert at specific position
 *  @see  https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   11/07/16
 *
 */

#ifdef __APPLE__
#include "insert.hpp"
#endif

/**
 *  @name
 *  @brief  Insert element into a given linkedlist at specific \p position
 *  @param[in]  head      LInkedList to add element to
 *  @param[in]  data      Data to add in the list
 *  @param[in]  position  Position where to add it
 *  @return Head of the updated linked lits.
 */
Node* InsertNth(Node *head, int data, int position) {
  if (!position || !head) {
    // Empty
    head = new Node({data, nullptr});
  } else {
    // Reach position
    Node* previous = head;
    int cnt = 0;
    while (previous->next && cnt < position - 1) {
      ++cnt;
      // Save previous element
      previous = previous->next;
    }
    // Create new node + fill data
    previous->next = new Node({data, previous->next});
  }
  return head;
}
