/* things i forgot => I forgot how to extract the value from a text field {".value"} is used to get the value and {"remove"} is a method provided to us which removes the appended child from the , we can also target css in js using '{style}' , i was appending the button in the body i could have directly appended the button in the list for better functioning.  */


let form1 = document.body.querySelector('.f1')


let button = document.body.querySelector('.b1')
button.addEventListener("click",(event)=>{
    if (form1.value === ''){
        alert("type something")
        
    }
    else{
    event.preventDefault();
   
   console.log(form1.value)
  
   let list1 = document.createElement('li')
  
   list1.innerHTML = form1.value
  
   let button2 = document.createElement('button')
    button2.style.flex=1
    button2.style.backgroundColor='red'
    button2.style.margin = '20px'
    button2.addEventListener('click', () => {
            list1.remove()
            
        })
  
   button2.innerHTML = 'Remove'
  
   list1.appendChild(button2)
  
   document.body.appendChild(list1)
  
   form1.value = ""}
})



