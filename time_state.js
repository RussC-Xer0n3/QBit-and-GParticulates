/**
 * https://curlie.org/Computers/Computer_Science/Theoretical/Automata_Theory/Finite_State_Automata/
 * 
 * https://en.m.wikipedia.org/wiki/Finite-state_machine
 * 
*/

/**
 * @Author - xer0n3
 * Calculate the transitions, use 
 * qty and probability of state use
 * according to Ai and DNN calls
*/

function Time_State(){

    function use () {
        var count = 0;
        for(var i in States[i]) {
            count+=1;
        }
        use = count;
        return use;  
    }
    //Quantity of states available
    function States (){

        const function derivative () {
        //Partial time derivative
            use();
        } : 1

        const function PT () {
        //Past time
            use();
        } : 2

        const function FT () {
        //Future time
            use();
        } : 3

        const function T () {
        //Time
            use();
        } : 4

    }

    const state = States.T(); //obviously

    function probability (){
        //efficient probability algebra 
        const state_probability = (4 ** 4) * 2)
        return state_probability;
    }

    //four states, probability of one being in use at any time based on load and use where use is qty of times a state has been used per 100ms

    const transition = async function (state, (resolve, reject) => {
        (((state_probability  / use) / 1e1);
    });

return;
}