#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"

TEST_CASE("Task A"){
  std::vector<int> v = makeVector(10);
  CHECK(v.size() == 10);

  v = {3, 63, 43, 2345, 32, 76, 82};
  for (int i = 0; i < v.size(); i++){
    std::vector<int> a = makeVector(v.at(i));
    CHECK(a.size() == v.at(i));
  }
}

TEST_CASE("Task B"){
  std::vector<int> v = {-1, 2, -3, 5, -8, 5}; //3 positives
  v = goodVibes(v);
  CHECK(v.size() == 3);

  v = {-1, -1, -1, -1, -1, -1234567, -9876543, 0, 1}; //1 positive
  v = goodVibes(v);
  CHECK(v.size() == 1);

  v = {-5, 2, 3, 4, 10, 12345, -10}; //5 positives
  v = goodVibes(v);
  CHECK(v.size() == 5);
}

TEST_CASE("Task C"){
  std::vector<int> a = {1, 2, 3, 4, 5};
  std::vector<int> b = {6, 7};
  gogeta(a, b);
  bool condition = a.size() == 7 && b.empty();
  CHECK(condition);

  a = {94, 214, 653, 73, 47, 267, 54};
  b = {43, 53, 23, 21};
  gogeta(a, b);
  condition = a.size() == 11 && b.empty();
  CHECK(condition);

  a = {34, 32, 13456, 543, 765, 86, 32, 433};
  b = {4, 0, 223, 22111, 345, 21};
  gogeta(a, b);
  condition = a.size() == 14 && b.empty();
  CHECK(condition);
}

TEST_CASE("Task D"){
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {4, 5};
  std::vector<int> v = sumPairWise(a, b);
  bool condition = v.at(0) == 5 && v.at(1) == 7 && v.at(2) == 3;
  CHECK(condition);

  v = sumPairWise(b, a); //if a is less than b
  condition = v.at(0) == 5 && v.at(1) == 7 && v.at(2) == 3;
  CHECK(condition);

  a = {90, 200, 600, 70, 40, 200, 50};
  b = {40, 50, 20, 20};
  v = sumPairWise(a, b);
  condition = v.at(0) == 130 && v.at(1) == 250 && v.at(2) == 620 && v.at(3) == 90 && v.at(4) == 40 && v.at(5) == 200 && v.at(6) == 50;
  CHECK(condition);
}
