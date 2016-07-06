/**
 *  @file   main.cpp
 *  @brief  HackerRank dynamic array assignment
 *  @see    https://www.hackerrank.com/challenges/dynamic-array
 *
 *  @author Christophe Ecabert
 *  @date   06/07/2016
 *  Copyright (c) 2016 Christophe Ecabert. All rights reserved.
 */

#include <iostream>
#include <vector>

/**
 *  @enum QueryType
 *  @brief  Type of query
 */
enum QueryType {
  kType1 = 1,
  kType2 = 2
};

/**
 *  @struct Query
 *  @brief  Query's parameter
 */
struct Query {
  /** Type of query */
  QueryType type;
  /** X */
  int x;
  /** Y */
  int y;
};

int main(int argc, const char * argv[]) {
  std::vector<std::vector<int>> seqList;
  std::vector<Query> queue;
  int lastAns = 0;
  // Number of sequence
  int N = 0;
  // Number of query
  int Q = 0;

  std::cin >> N;
  std::cin >> Q;

  // Init sequence
  seqList.resize(N, std::vector<int>(0));
  // Parse query input
  for(int q = 0; q < Q; ++q) {
    int t;
    Query query;
    std::cin >> t;
    query.type = (QueryType)t;
    std::cin >> query.x;
    std::cin >> query.y;
    queue.push_back(query);
  }

  // Execute query
  for(int q = 0; q < queue.size(); ++q) {
    const Query& query = queue[q];
    int idx = (query.x ^ lastAns) % N;
    if (query.type == kType1) {
      seqList[idx].push_back(query.y);
    } else {
      int sz = static_cast<int>(seqList[idx].size());
      if(sz > 0) {
        int v = seqList[idx][query.y % sz];
        lastAns = v;
      }
      std::cout << lastAns << std::endl;
    }
  }
  return 0;
}