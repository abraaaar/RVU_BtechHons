// Addition function
function add(a, b) {
  return a + b;
}

// Subtraction function
function subtract(a, b) {
  return a - b;
}

// Multiplication function
function multiply(a, b) {
  return a * b;
}

// Division function
function divide(a, b) {
  if (b === 0) {
    throw new Error("Cannot divide by zero");
  }
  return a / b;
}

// Export the functions
module.exports = {
  add,
  subtract,
  multiply,
  divide
};