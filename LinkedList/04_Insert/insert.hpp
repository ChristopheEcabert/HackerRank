/**
 *  @file   insert.hpp
 *  @brief  HackerRank LinkedList - Insert at specific position
 *  @see  https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   11/07/16
 *
 */

#ifndef __INSERT__
#define __INSERT__

#include "../core.hpp"

/**
 *  @name
 *  @brief  Insert element into a given linkedlist at specific \p position
 *  @param[in]  head      LInkedList to add element to
 *  @param[in]  data      Data to add in the list
 *  @param[in]  position  Position where to add it
 *  @return Head of the updated linked lits.
 */
Node* InsertNth(Node *head, int data, int position);


#endif /* _LTS5_insert__ */
