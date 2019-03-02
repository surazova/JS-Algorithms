var numberOfPlayers = 2;
var currentPlayer = 0;
var move = 0; // Keeps track of the current iteration that you are in 
var points1 = 0; // Player 1s points 
var points2 = 0; // Player 2s points 
var size = 3;

// Draws a tic tac toe board (n x n table) 
// n = 3
function drawBoard() {
  var parent = document.getElementById("game");
  var counter = 1;

  for (var i = 0; i < 3; i++) {
    var row = document.createElement("tr"); // Creating a row 

    for (var x = 0; x < size; x++) {
      var col = document.createElement("td"); // Creating a column
      col.innerHTML = counter;

      row.appendChild(col);

    }
    parent.appendChild(row);
  }
}

// Winning combinations 
// Horizontal: [1, 2,3] [4, 5,6] [7, 8,9]
// Vertical: [1, 4,7] [2,5,8] [3,6,9]
// Diagonal: [1,5,9] [3,5,7]
// Array stores the combinations
var winners = new Array();

function loadAnswers() {
  winners.push([1, 2, 3]);
  winners.push([4, 5, 6]);
  winners.push([7, 8, 9]);
  winners.push([1, 4, 7]);
  winners.push([2, 5, 8]);
  winners.push([3, 6, 9]);
  winners.push([1, 5, 9]);
  winners.push([3, 5, 7]);
}
