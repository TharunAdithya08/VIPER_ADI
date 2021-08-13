var num=0;
function ChangeNum()
{
    document.getElementById('number').innerHTML=num;
    console.log('Number:' + number);
}
function increment()
{
   num++;
   ChangeNum(); 
}
function decrement()
{
    num--;
    ChangeNum();
}
