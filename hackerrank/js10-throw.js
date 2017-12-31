function isPositive(a) {
    try{
         if(a == 0)
           throw 'Zero Error ';
        else if(a > 0)
           throw 'YES';
        else if(a < 0){
           throw 'Negative Error' ;
        }   
    }catch(error){
        return error;
    }    
}
