/**
 *  @file   main.cpp
 *  @brief  HackerRank LinkedList - Print element
 *  @see    https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
 *
 *  @author Christophe Ecabert
 *  @date   08/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include "print_element.hpp"
#include "insert_head.hpp"
#include "insert.hpp"

int main(int argc, const char * argv[]) {
  // Create dummy list
  Node* head;


  head = InsertNth(head, 3, 0);
  head = InsertNth(head, 5, 1);
  head = InsertNth(head, 4, 2);
  head = InsertNth(head, 2, 4);
  head = InsertNth(head, 10, 1);
  Print(head);
}