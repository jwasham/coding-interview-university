#ifndef TREE_H
#define TREE_H
#include <iostream>
//insert    // insert value into tree
//get_node_count // get count of values stored
//print_values // prints the values in the tree, from min to max
//delete_tree
//is_in_tree // returns true if given value exists in the tree
//get_height // returns the height in nodes (single node's height is 1)
//get_min   // returns the minimum value stored in the tree
//get_max   // returns the maximum value stored in the tree
//is_binary_search_tree
//delete_value
//get_successor // returns next-highest value in tree after given value, -1 if none

struct Node
{
public:
  Node* left;
  Node* right;
  int data;
};

class Tree
{
public:
  Tree()
  {
    root_ = nullptr;
  }

  Node* makeNode(int value)
  {
    Node* newNode = new Node;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->data = value;
    return newNode;
  }

  void insert(Node* currNode, int value)
  {
    Node* nextNode = nullptr;
    if (value > currNode->data)
    {
      if (currNode->right == nullptr)
      {
        currNode->right = makeNode(value);
        return;
      }
      insert(currNode->right, value);
    }
    else
    {
      if (currNode->left == nullptr)
      {
        currNode->left = makeNode(value);
        return;
      }
      insert(currNode->left, value);
    }
  }

  void insertRecurv(int value)
  {
    if (root_ == nullptr)
      root_ = makeNode(value);

    insert(root_, value);
  }

  void insert(int value)
  {
    if (root_ == nullptr)
    {
      root_ = makeNode(value);
    }
    else
    {
      Node* currNode = root_;
      while (currNode != nullptr)
      {
        if (value > root_->data)
        {
          if (currNode->right == nullptr)
          {
            currNode->right = makeNode(value);
            return;
          }
          currNode = currNode->right;
        }
        else
        {
          if (currNode->left == nullptr)
          {
            currNode->left = makeNode(value);
            return;
          }

          currNode = currNode->left;
        }
      }
    }
  }

  int count(void)
  {
    return 1;
  }

  void printValues(Node* currNode)
  {
    if (currNode == nullptr)
      return;
    printValues(currNode->left);
    std::cout << currNode->data << ' ';
    printValues(currNode->right);
  }

  void printValues(void)
  {
    printValues(root_);
    std::cout << std::endl;
  }

  void deleteTree(void)
  {

  }

  bool find(Node* currNode, int value)
  {
    if (currNode == nullptr)
      return false;
    if (currNode->data == value)
      return true;
    find(currNode->left, value);
    find(currNode->right, value);
  }

  bool find(int value)
  {
    if (root_ == nullptr)
      return false;

    return find(root_, value);
  }

  int height(void)
  {
    return 1;
  }

  int min(void)
  {
    return 1;
  }

  int max(void)
  {
    return 1;
  }

  bool isBinary(void)
  {
    return true;
  }

  void remove(int value)
  {

  }

  int successor(int value)
  {
    return 1;
  }

private:
  Node* root_;
};

#endif // TREE_H