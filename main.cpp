#include <iostream>
#include "vectors.h"

int main(){
  std::vector<int> a = {1, 2, 3, 4, 5};
  std::vector<int> b = {6, 7};

  a = {90, 200, 600, 70, 40, 200, 50};
  b = {40, 50, 20, 20};
  std::vector<int> v = sumPairWise(a, b);
  std::cout << v.at(3);
}
