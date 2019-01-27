// Given a string, reverse it 

// Method: 
// Break up the string into its letter components (str.split)
// Reverse the letters (str.reverse)
// Join the letters together to form a reversed string (str.join)

function reverseString(str) {
  var str = str.split("").reverse("").join("");

  return str;
}

reverseString("hello");
