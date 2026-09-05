let score = '33'
let New_number = Number(score)

let one = null
let New = Number(one)
console.log(New)

let two = undefined
let new_1 = Number(two)
console.log(new_1)

let mixed = '33abc'
let mixed_1 = console.log(typeof (Number(mixed)))

// when '33' passed to number it got converted from string to number

//but when null was passed it gave me the result 0 which is innaccurate as null does not represent 0 but it is defined as an oject in javascript

// when undefined is taken it cosoled log into Nan which is also an error

//when a string was passed which included both string and number and i focefully tried to convert it into a number i got  a Nan because string was unable to get converted into the Number even though when we find the type of the following number it will display that the string has been converted to the  following number

// if " " empty paranthesis is defined then the expects result is given to us as 0 