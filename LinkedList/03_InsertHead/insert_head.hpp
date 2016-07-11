/**
 *  @file   insert_head.hpp
 *  @brief  HankerRank - LinkedList head insertion
 *  @see  https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   11/07/16
 */

#ifndef __INSERT_HEAD__
#define __INSERT_HEAD__

#include "../core.hpp"

/**
 *  @name Insert
 *  @brief  Add element to a given linked list at the head
 *  @param[in]  head  LinkedList to add element to
 *  @param[in]  data  Data to insert
 *  @return New Head of the linked list
 */
Node* Insert(Node *head,int data);


#endif /* __INSERT_HEAD__ */
