// Two functions to print right side up and upside-down "X" trees
// Using recursion 

// Print an upside down tree
function make_tree(num) {
  if (num <= 0)
    return 0;

  else {
    return (num * make_tree(num - 1))
  }
}

make_tree(10);



// Prints a right side up tree
function tree_two(num) {
  if (num <= 0)
    return 0;

  else {
    return (num * tree_two(num + 1))
  }
}

tree_two(0);
