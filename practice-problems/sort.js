// Given an array, sort the array 
// Example: [3, 4, 5, 1, 2] ===> [1, 2, 3, 4, 5]


var unordered = [3, 4, 2, 1, 5]
unordered.sort();


// Another way
var unsorted = [3, 4, 2, 1, 5]
unsorted.sort(function(a, b) {
  return (a - b)
});
