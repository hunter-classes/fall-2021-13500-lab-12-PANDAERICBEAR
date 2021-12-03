#include <iostream>
#include "vectors.h"

std::vector<int> makeVector(int n){
  std::vector<int> v;
  for(int i = 0; i < n; i++){
    v.push_back(0);
  }

  return v;
}

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> newVector;
  for (int i = 0; i < v.size(); i++){
    if (v.at(i) > 0){
      newVector.push_back(i);
    }
  }
  return newVector;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
  for (int i = 0; i < vegeta.size(); i++){
    goku.push_back(vegeta.at(i));
  }
  vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  std::vector<int> newVector;
  if (v1.size() > v2.size()){
    for (int i = 0; i < v2.size(); i++){
      newVector.push_back(v1.at(i) + v2.at(i));
    }
    for (int i = v2.size(); i < v1.size(); i++){
      newVector.push_back(v1.at(i));
    }
  } else {
    for (int i = 0; i < v1.size(); i++){
      newVector.push_back(v1.at(i) + v2.at(i));
    }
    for (int i = v1.size(); i < v2.size(); i++){
      newVector.push_back(v2.at(i));
    }
  }

  return newVector;

}
