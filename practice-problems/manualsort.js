// Given an array, sort the array manually (without using .sort())

// Using the bubble sort method: Comparing two numbers and moving the lowest to the left 

// 1: Create the array to sort
var array = [9, 2, 5, 6, 4, 3, 7, 10, 1, 8];

// 2: Array i: temporary array
//    Array j: temporary array 

function swap(array, i, j) {
  var hold = array[i];
  array[i] = array[j];
  array[j] = hold;
}

// 3: Function for moving through the numbers and swapping out the lowest 
function sortArray(array) {
  for (var i = 0; i < array.length; i++) {
    for (var j = 1; j < array.length; j++) {
      if (array[j - 1] > array[j]) {
        swap(array, j - 1, j);
      }
    }
  }
  return array;
}
console.log(sortArray(array.slice()));
