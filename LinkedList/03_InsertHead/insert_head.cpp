/**
 *  @file   insert_head.cpp
 *  @brief  HankerRank - LinkedList head insertion
 *  @see  https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   11/07/16
 */

#ifdef __APPLE__
#include "insert_tail.hpp"
#endif

/**
 *  @name Insert
 *  @brief  Add element to a given linked list at the head
 *  @param[in]  head  LinkedList to add element to
 *  @param[in]  data  Data to insert
 *  @return New Head of the linked list
 */
Node* Insert(Node *head,int data) {
  if (head) {
    Node* next = head;
    head = new Node();
    head->next = next;
    head->data = data;
  } else {
    // Empty
    head = new Node();
    head->next = nullptr;
    head->data = data;
  }
  return head;
}