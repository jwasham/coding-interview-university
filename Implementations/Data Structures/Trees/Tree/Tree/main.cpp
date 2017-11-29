#include "tree.h"

void TestInsert1(void)
{
  Tree tree;
  for (int i = 0; i < 10; ++i)
    tree.insert(i);

  tree.printValues();
}

void TestInsert2(void)
{
  Tree tree;
  tree.insert(6);
  tree.insert(1);
  tree.insert(88);
  tree.insert(5);
  tree.insert(134);
  tree.insert(2);
  tree.insert(1111);

  tree.printValues();
}

void TestInsertRecurv1(void)
{
  Tree tree;
  for (int i = 0; i < 10; ++i)
    tree.insertRecurv(i);

  tree.printValues();
}

void TestInsertRecurv2(void)
{
  Tree tree;
  tree.insertRecurv(6);
  tree.insertRecurv(1);
  tree.insertRecurv(88);
  tree.insertRecurv(5);
  tree.insertRecurv(134);
  tree.insertRecurv(2);
  tree.insertRecurv(1111);

  tree.printValues();
}

void TestFind1(void)
{
  Tree tree;
  for (int i = 0; i < 10; ++i)
    tree.insert(i);
  std::cout << tree.find(1) << std::endl;
  std::cout << tree.find(2) << std::endl;
  std::cout << tree.find(11) << std::endl;
}

void TestFind2(void)
{
  Tree tree;
  for (int i = 0; i < 10; ++i)
  {
    tree.insert(i);
    std::cout << tree.find(i) << std::endl;
  }
}

void TestFind3(void)
{
  Tree tree;
  tree.insert(66);
  tree.insert(12);
  tree.insert(3);
  tree.insert(568);
  tree.insert(5);
  tree.insert(47);
  tree.insert(12409);
  tree.insert(555);
  tree.insert(66);
  std::cout << tree.find(12409) << std::endl;
  std::cout << tree.find(66) << std::endl;
  std::cout << tree.find(5) << std::endl;
}

int main(void)
{
  TestInsert1();
  TestInsert2();
  TestFind1();
  TestFind2();
  TestFind3();
  //TestInsertRecurv1();
  //TestInsertRecurv2();
  return 0;
}