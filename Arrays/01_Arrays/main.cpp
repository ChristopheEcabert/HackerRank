/**
 *  @file   main.cpp
 *  @brief  HackerRank array assignment
 *
 *  @author Christophe Ecabert
 *  @date   06/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
  int N;  // #element
  std::vector<int> arr;
  /* Parse Input */
  std::cin >> N;
  arr.resize(N);
  for(int arr_i = 0; arr_i < N; arr_i++){
    std::cin >> arr[arr_i];
  }
  /* Print backward */
  for(int i = N - 1; i >= 0; --i) {
    std::cout << arr[i] << " ";
  }
  return 0;
}