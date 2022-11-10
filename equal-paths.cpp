#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
bool checkLength(Node * root, int *x, int length);

bool equalPaths(Node * root)
{
    // Add your code below
    //
    int x=0;
    int length=0;
    return checkLength(root, &x, length);
}

bool checkLength(Node * root, int *x, int length){
  if (root->left == NULL && root->right == NULL){
    if (*x == 0){
      *x = length;
    }
    return (*x == length);
  }
  return checkLength(root->left, x, length+1);
  return checkLength(root->right, x, length+1);
}

