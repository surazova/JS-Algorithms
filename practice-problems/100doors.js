function solve(a0, a1, a2, b0, b1, b2) {

  var solution = []

  if (a0 > b0 || a1 > b1 || a2 > b2) {
    solution += 1;
  }
  if (a0 < b0 || a1 < b1 || a2 < b2) {
    solution += 1;
  }
  return solution.split('');
}
solve(5, 6, 7, 3, 6, 10);
