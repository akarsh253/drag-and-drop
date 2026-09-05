/*use backticks {` `} because of their property of interpolation as this makes us free from all the hassle eg. ${}*/

const gameName = new String('Akarsh')
console.log(gameName)
// when you will console log this you will get key value pairs as the string is taken as an object eg 0:a, 1:k ,2:a so on and so forth. Do not confuse string to be taken as an array it is an object and object store information in key value pairs..

console.log(gameName.length)

console.log(gameName.__proto__)// this proto represents a property of javascript named as prototype as it allows us to access all the methods available for various other objects,in moder syntax we can use the methods directly without the need of proto but just for the purpose know that it exists example = #_________________________________________________________________________________________________#                console.log(gameName.__proto__toUpperCase()===gameName.toUpperCase())            #_________________________________________________________________________________________________# 
  

// baki learn major methods for strings.