/**
 *  @file   print_element.cpp
 *  @brief  HackerRank LinkedList - Print element
 *  @see    https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   08/07/16
 *
 */

#include <iostream>
#ifdef __APPLE__
#include "print_element.hpp"
#endif

/**
 *  @name Print
 *  @brief  Print the content of a given LinkedList
 *  @param[in]  head  Head of the LinkedList
 */
void Print(Node *head) {
  // Do nothing if null
  if (head) {
    Node* next = head;
    while (next) {
      std::cout << next->data << std::endl;
      next = next->next;
    }
  }
}