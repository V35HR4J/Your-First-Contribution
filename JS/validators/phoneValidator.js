/**
 * @param {*string} phone 
 * @returns Boolean
 */
 function validatePhone(phone) {
    const re = /^[\+]?[(]?[0-9]{3}[)]?[-\s\.]?[0-9]{3}[-\s\.]?[0-9]{4,6}$/im;
    return re.test(phone);
}
/** 
 * Valid formats: 
 * 
 * +31636363634
 * (123) 456-7890
 * (123)456-7890
 * +31636363634
 * 123-456-7890
 * 123.456.7890
 * 1234567890
 * 075-63546725
 * 
 * */
var validNumbersList = [
    "(123) 456-7890",
    "(123)456-7890",
    "123-456-7890",
    "123.456.7890",
    "1234567890",
    "+31636363634",
    "075-63546725",
]

var inValidNumbersList = [
    "121212121",
    "12121212121212",
    "+121212",
]

validNumbersList.forEach(element => {
    console.log("phone - "+ " " + element + " ->", validatePhone(element));    
});
inValidNumbersList.forEach(element => {
    console.log("phone - "+ " " + element + " ->", validatePhone(element));    
});