// Factorialize a number 
//Ex: 5! = 1 * 2 * 3 * 4 * 5 = 120

function factorialize(num) {
  if (num <= 1)
    return 1
  else return num * factorialize(num - 1)

}
factorialize(5);
