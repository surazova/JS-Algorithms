function tree(n) {
  if (n < 1) {
    return n
  }

  else {
    return n * tree(n + 1)
  }
}

tree(2)


function factorial(n, accumulator) {
  if (n === 0) {
    return accumulator
  }
  return factorial(n - 1, n * accumulator)
}
factorial(5, 1) //==>> 120


function makeLine(length) {
  var line = "";
  for (var i = 1; i <= length; i++) {
    for (var j = 1; j <= i; j++) {
      line += "*";

    }
    line += "\n";
  }
  return line;
}
console.log(makeLine(5));


function makeTree(n) {
  var line = "";
  if (n < 1) {
    return n

  }
  else {
    return makeTree(n + 1)
    console.log(line = "X");
    // line += "X";


  }
  //line = line + "\n"
}
console.log(makeTree(4));
