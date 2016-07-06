/**
 *  @file   main.cpp
 *  @brief  HackerRank sparse array assignment
 *  @see    https://www.hackerrank.com/challenges/array-left-rotation
 *
 *  @author Christophe Ecabert
 *  @date   06/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include <iostream>
#include <unordered_map>
#include <string>

int main(int argc, const char * argv[]) {
  /** Data size */
  int N = 0;
  /** #Query */
  int Q = 0;
  /** Data holder */
  std::unordered_map<std::string, int> dict;
  // Parse
  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::string str;
    std::cin >> str;
    // Check if already in the map
    auto it = dict.find(str);
    if (it == dict.end()) {
      // No entry, create
      dict[str] = 1;
    } else {
      // Already in, increase counter
      dict[str] += 1;
    }
  }
  /** Parse queries */
  std::cin >> Q;
  for(int q = 0; q < Q; ++q) {
    std::string str;
    std::cin >> str;
    /** Write output */
    auto it = dict.find(str);
    if (it == dict.end()) {
      // No entry
      std::cout << 0 << std::endl;
    } else {
      // In
      std::cout << dict[str] << std::endl;
    }
  }
  return 0;
}