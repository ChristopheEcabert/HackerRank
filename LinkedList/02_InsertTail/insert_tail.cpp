/**
 *  @file   insert_tail.cpp
 *  @brief  HackerRank LinkedList - Insert tail element
 *  @see    https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   08/07/16
 */

#ifdef __APPLE__
#include "insert_tail.hpp"
#endif
/**
 *  @name Insert
 *  @brief  Add element to a given linked list at the tail
 *  @param[in]  head  LinkedList to add element to
 *  @param[in]  data  Data to insert
 *  @return Head of the given linked list
 */
Node* Insert(Node *head,int data) {
  if (head) {
    Node* next = head;
    while (next->next) {
      next = next->next;
    }
    next->next = new Node();
    next->next->data = data;
    next->next->next = nullptr;
  } else {
    head = new Node();
    head->data = data;
    head->next = nullptr;
  }
  return head;
}
