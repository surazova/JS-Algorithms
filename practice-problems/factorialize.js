// Factorialize a number 
//Ex: 5! = 1 * 2 * 3 * 4 * 5 = 120

function factorialize(num) {
  if (num <= 1)
    return 1
  else return num * factorialize(num - 1)

}
factorialize(5);



// 1. go to the end of the lsit 
// point to the second to last list 
// free the last item 
// update the second to last item to be the last item
