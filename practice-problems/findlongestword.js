// Find the longest word in a string
function findLongestWordLength(str) {

    // 1: Split the string into words
    var strSplit = str.split(' ');

    // 2: Create a varibalbe that holds the length of the longest word  
    var longWord = 0;

    // 3: Create a for loop that runs through the words and compares them to each other 
    for (var i = 0; i < strSplit.length; i++) {
        if (strSplit[i].length > longWord) {
            longWord = strSplit.length;
        }
    }


    return longWord;
}




findLongestWordLength("The quick brown fox jumped over the lazy dog");
