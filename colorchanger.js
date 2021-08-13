function colorchanger()
{
    var option=prompt("Enter the colour you choose the background to be(VIBGYOR):");
    switch(option)
        {
            case "violet":
                document.getElementById('changer').style.backgroundColor='violet';
                break;
            case "indigo":
                document.getElementById('changer').style.backgroundColor='indigo';
                break;
            case "blue":
                document.getElementById('changer').style.backgroundColor='blue';
                break;
            case "green":
                document.getElementById('changer').style.backgroundColor='green';
                break;
            case "yellow":
                document.getElementById('changer').style.backgroundColor='yellow';
                break;
            case "orange":
                document.getElementById('changer').style.backgroundColor='orange';
                break;
            case "red":
                document.getElementById('changer').style.backgroundColor='red';
                break;       
            default:
                document.write("Unidentified!!");
                break;      
        }     
}