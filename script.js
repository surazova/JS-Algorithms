//Reverse a String 
function reverseString(str) {
  let newStr = str.split('').reverse().join('')

  // add for loop 
  console.log(newStr)
  return str;
}

reverseString("howdy");
