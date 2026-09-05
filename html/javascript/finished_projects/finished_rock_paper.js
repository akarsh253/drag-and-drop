let score = JSON.parse(localStorage.getItem('score'));

if (!score || score.Wins === null){
    score = {
        Wins: 0,
        Loss: 0,
        Ties: 0
    };
}

function computermove(){

    let random = Math.random();
    let result = '';

    if(random < 1/3){
        result = 'Rock';
    }else if(random < 2/3){
        result = 'Paper';
    }else{
        result = 'Scissors';
    }

    return result;
}

function playermove(move){

    let computer = computermove();
    let result2 = '';

    if (move === 'Rock'){
        if (computer === 'Rock'){
            result2 = 'Tie';
        } else if(computer === 'Paper'){
            result2 = 'You lose';
        }else{
            result2 ='You win';
        }
    }

    if (move === 'Paper'){
        if (computer === 'Rock'){
            result2 = 'You win';
        } else if(computer === 'Paper'){
            result2 = 'Tie';
        }else{
            result2 ='You lose';
        }
    }

    if (move === 'Scissors'){
        if (computer === 'Rock'){
            result2 = 'You lose';
        } else if(computer === 'Paper'){
            result2 = 'You win';
        }else{
            result2 ='Tie';
        }
    }

    if(result2 === 'You win'){
        score.Wins++;
    }else if(result2 === 'You lose'){
        score.Loss++;
    }else{
        score.Ties++;
    }

    localStorage.setItem('score', JSON.stringify(score));

document.querySelector('.Js-result').innerHTML = result2;

document.querySelector('.Js-moves').innerHTML =
`You 
<img src="/images/${move === 'Rock' ? 'ro ck_image.png' : move === 'Paper' ? 'paper_image.jpeg' : 'scissor.jpeg'}" height="50">

<img src="/images/${computer === 'Rock' ? 'rock_image.png' : computer === 'Paper' ? 'paper_image.jpeg' : 'scissor.jpeg'}" height="50">

Computer`;

document.querySelector('.score').innerHTML =
`Wins: ${score.Wins}
Loss: ${score.Loss}
Ties: ${score.Ties}`;

}