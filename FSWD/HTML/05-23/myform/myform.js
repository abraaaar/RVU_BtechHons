function generateForm() {
  var formContainer = document.getElementById("form-container");
  formContainer.innerHTML = `
    <form onsubmit="submitForm(event)">
      <label for="name">Name:</label>
      <input type="text" id="name" name="name" required><br><br>
  
      <label for="email">Email:</label>
      <input type="email" id="email" name="email" required><br><br>
  
      <label for="message">Message:</label>
      <textarea id="message" name="message" rows="4" required></textarea><br><br>
  
      <input type="submit" value="Submit">
    </form>
  `;

  var tableContainer = document.getElementById("table-container");
  tableContainer.innerHTML = "";
}

function submitForm(event) {
  event.preventDefault();

  var name = document.getElementById("name").value;
  var email = document.getElementById("email").value;
  var message = document.getElementById("message").value;

  var tableContainer = document.getElementById("table-container");
  var table = document.createElement("table");

  var row = table.insertRow();
  var nameCell = row.insertCell();
  var emailCell = row.insertCell();
  var messageCell = row.insertCell();

  nameCell.innerHTML = name;
  emailCell.innerHTML = email;
  messageCell.innerHTML = message;

  tableContainer.appendChild(table);

  // Clear the form fields
  document.getElementById("name").value = "";
  document.getElementById("email").value = "";
  document.getElementById("message").value = "";
}