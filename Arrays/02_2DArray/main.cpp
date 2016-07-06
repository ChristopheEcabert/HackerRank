/**
 *  @file   main.cpp
 *  @brief  HackerRank 2D array assignment
 *  @see    https://www.hackerrank.com/challenges/2d-array
 *
 *  @author Christophe Ecabert
 *  @date   06/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include <iostream>
#include <vector>
#include <limits>

int main(int argc, const char * argv[]) {
  /* Create 2D Matrix from CIN */
  std::vector<std::vector<int> > arr(6, std::vector<int>(6));
  for(int arr_i = 0; arr_i < 6; arr_i++){
    for(int arr_j = 0; arr_j < 6; arr_j++){
      std::cin >> arr[arr_i][arr_j];
    }
  }

  /* Loop over each row, starting @1 */
  int max_glass = std::numeric_limits<int>::min();
  for(int r = 1; r < 5; ++r) {
    /* Loop over each col, starting @1 */
    int v = 0;
    for(int c = 1; c < 5; ++c) {
      //Top
      v = arr[r-1][c-1];
      v += arr[r-1][c];
      v += arr[r-1][c+1];
      // Mid
      v += arr[r][c];
      // Bottom
      v += arr[r+1][c-1];
      v += arr[r+1][c];
      v += arr[r+1][c+1];
      if (v > max_glass) {
        max_glass = v;
      }
    }
  }
  // Print out
  std::cout << max_glass << std::endl;
  return 0;
}
