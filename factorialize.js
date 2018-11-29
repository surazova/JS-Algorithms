// function factorialize(num) {
//   if (num < 0)
//     return -1;

//   if (num == 0)
//     return 1;

//   else {
//     return (num * factorialize(num -1));
//   }
// }

// factorialize(5);

// function factorialize(num) {
//   if (num === 0 || num === 1)
//     return 1;
//   for (var i = num - 1; i >= 1; i--) {
//     num *= i;
//   }
//   return num;
// }
// factorialize(5);


// 
function factorialize(num) {
  var product = 1
  for (var i = 2; i <= num; i++) {
    product *= i
  }
  return product;
}
