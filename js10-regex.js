let first = str.split('').shift();
  let last = str.split('').pop();
  
  let ans = [first, last]
  
  ans = ans.join('');
  
  
  if (ans.match(/[aeiou]/gi).length > 1){
    return true
  }
  
    return false
