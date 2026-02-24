function add() {
    var number1 = Number(document.getElementById("number1").value);
    var number2 = Number(document.getElementById("number2").value);
    document.getElementById("result").innerText = number1 + number2;
}
function sub() {

    var number1 = Number(document.getElementById("number1").value);
    var number2 = Number(document.getElementById("number2").value);
    document.getElementById("result").innerText = number1 - number2;
}

function multi() {
    var number1 = Number(document.getElementById("number1").value);
    var number2 = Number(document.getElementById("number2").value);
    document.getElementById("result").innerText = number1 * number2;
}

function divi() {
    var number1 = Number(document.getElementById("number1").value);
    var number2 = Number(document.getElementById("number2").value);
    document.getElementById("result").innerText = number1 / number2;
}
