var space_size = 3,
  moves,
  score,
  boxes = [],
  empty = "&nbsp", //Non-breaking space 
  turn = "X"


// Create the Board 
function init() {
  var board = document.createElement('table');
  board.setAttribute("border", 12);
  board.setAttribute("cellspacing", 2);
}
