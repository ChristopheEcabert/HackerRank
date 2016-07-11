/**
 *  @file   insert_tail.hpp
 *  @brief  HackerRank LinkedList - Insert tail element
 *  @see    https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   08/07/16
 */

#ifndef __INSERT_TAIL__
#define __INSERT_TAIL__

#include "../core.hpp"

/**
 *  @name Insert
 *  @brief  Add element to a given linked list at the tail
 *  @param[in]  head  LinkedList to add element to
 *  @param[in]  data  Data to insert
 *  @return Head of the given linked list
 */
Node* Insert(Node *head,int data);

#endif /* __INSERT_TAIL__ */
