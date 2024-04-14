document.getElementById("submitBtn").addEventListener("click", changeText);

function changeText() 
{
    let name = document.getElementById("name").value;
    let item = document.getElementById("items").value;
    let qty = document.getElementById("qty").value;
    let type = document.querySelector('input[name="type"]:checked').value;
    let allg = document.querySelectorAll('input[name="allergies"]:checked');
    let cost = qty * type;

    let aller = [];
    allg.forEach(function (checkbox) {
        aller.push(checkbox.value);
    });

    document.getElementById("d1").innerHTML =
        "Dear " +
        name +
        ". You need to pay: Rs. " +
        cost +
        "(" +
        qty +
        "*" +
        item +
        "). We have taken care of your " +
        type +
        " and " +
        aller +
        " requirements in this item.";
}
