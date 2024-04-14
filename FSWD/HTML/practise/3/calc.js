function calculator()
{
    a = document.getElementById("number1");
    b = document.getElementById("number2");
    c = document.getElementById("result");
    c.innerHTML = a.value + " * " + b.value + " = " + (parseInt(a.value) * parseInt(b.value)) + "<br>";
}