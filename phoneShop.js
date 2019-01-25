const spending_cap = 500;
const tax_rate = 0.08;
const phone_price = 99.99;
const accessory_price = 9.99;

var bank_balance = 745.20;
var amt = 0;

function calculate_tax(amt) {
  return amt * tax_rate;
}

// keep buying the phones until you run out of money 
while (bank_balance > amt) {
  amt = amt + phone_price;
}


// Accessories
if (spending_cap > amt) {
  amt = amt + accessory_price;
}

// Add in the tax
amt = amt * calculate_tax(amt);

console.log("This was your total!" + amt);


// Stop if no more money 
if (bank_balance < amt) {
  console.log("Stop buying!");
};
