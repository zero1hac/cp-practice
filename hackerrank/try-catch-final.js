function reverseString(s) {
   try{
       var myArr = s.split("").reverse().join("");
       console.log(myArr);
   } catch(e)
       {
           console.log(e.message);
           console.log(s);
       }
}
