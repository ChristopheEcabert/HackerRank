/**
 *  @file   main.cpp
 *  @brief  HackerRank left rotation assignment
 *  @see    https://www.hackerrank.com/challenges/array-left-rotation
 *
 *  @author Christophe Ecabert
 *  @date   06/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
  /** Buffer size */
  int N = 0;
  /** Amount of shift */
  int n_shift = 0;

  // Query info
  std::cin >> N;
  std::cin >> n_shift;

  // Fill data
  std::vector<int> data;
  int v;
  for(int i = 0; i < N; ++i) {
    std::cin >> v;
    data.push_back(v);
  }
  std::vector<int> buffer;  //Temp storage for boundaries
  for(int i = 0; i < N; ++i) {
    int v = data[i];
    if (i < n_shift) {
      // Save to put them at the end
      buffer.push_back(v);
    }
    // Shift
    if (i < N - n_shift) {
      data[i] = data[i + n_shift];
    } else {
      data[i] = buffer[(i + n_shift) % N];
    }
  }
  // Print out
  for(int i = 0; i < N; ++i) {
    std::cout << data[i] << " ";
  }  return 0;
}