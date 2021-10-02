prompt("Please enter your name: ");
prompt("Please enter your lover's name: ");

var loveScore = Math.random() * 100;
loveScore = Math.floor(loveScore) + 1;

if (loveScore > 70) {
  return ("Your love score is, " + loveScore + ", Your Love is Mindblowing.");
} else {
  return ("Your love score is " + loveScore + '%');
}