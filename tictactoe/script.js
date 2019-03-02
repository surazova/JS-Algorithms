var numberOfPlayers = 2;
var currentPlayer = 0;
var move = 0; // Keeps track of the current iteration that you are in 
var points1 = 0; // Player 1s points 
var points2 = 0; // Player 2s points 
var size = 3;


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
