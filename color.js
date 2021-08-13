function colorchanger()
{
    var option;
    option=prompt("Enter the color you want the background to change:");
    if((document.getElementById('changer').style.backgroundColor=option)==1)
    {
        document.getElementById('changer').style.backgroundColor=option;
    }
    else
    {
        document.write("Unidentified color!");
    }
}