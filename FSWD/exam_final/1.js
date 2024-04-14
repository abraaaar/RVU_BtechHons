function validate() {
    let x = document.getElementById("name").value;
    if (x == "" || x == "0" || x == "1" || x == "2" || x == "3" || x == "4" || x == "5" || x == "6" || x == "7" || x == "8" || x == "9") {
      alert("Invalid");
      return false;
    }
  }

function validateForm() {
  var name = document.getElementById("name").value;
  document.getElementById("a").innerHTML = "Name: " + name;

  var age = document.getElementById("age").value;
  document.getElementById("b").innerHTML = "Age: " + age;

  var dt = document.querySelector('input[name="dt"]:checked');
  if (dt) {
      document.getElementById("c").innerHTML = "Delivery time: " + dt.value;
  } else {
      document.getElementById("c").innerHTML = "Delivery time: Delfault";
  }

  var flute = document.getElementById("flute").value;
  document.getElementById("d").innerHTML = "Item: " + flute;

  var quantity = document.getElementById("quantity").value;
  document.getElementById("e").innerHTML = "Quantity " + quantity;

  var f=3000;
  var j=2500;
  var s=1500;
  var total=0;

  if(flute_type=="Piccolo")
  {
      total=quantity*f;
  }
  else if(flute_type=="Alto")
  {
      total=quantity*j;
  }
  else if(flute_type=="Concert")
  {
      total=quantity*s;
  }
  document.getElementById("f").innerHTML= "Hello "+name+". You need to pay: Rs"+total+". Your item will be delivered in the chosen number of days.";

  return false; 
}