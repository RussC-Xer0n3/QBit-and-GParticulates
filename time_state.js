/**
 * https://curlie.org/Computers/Computer_Science/Theoretical/Automata_Theory/Finite_State_Automata/
 * 
 * https://en.m.wikipedia.org/wiki/Finite-state_machine
 * 
*/

/**
 * @Author - xer0n3, Matthew James, Et. Al
 * Calculate the transitions, use 
 * qty and probability of state use
 * according to Ai and DNN calls
*/

function Time_State(){
    //Counts use
    //TODO: per state and which one
    function use () {
        var count = 0;
        count+=1;
        use = count;
        return use;  
    }
    
    //Quantity of states available
    function States (){

        1 : function derivative () {
        //Partial time derivative
            use();
        },

        2 : function PT () {
        //Past time
            use();
        },

        3 : function FT () {
        //Future time
            use();
        },

        4 : function T () {
        //Time
            use();
        }

    }
    
    //Set initial state
    let state = States.T(); //obviously
  
    //Validate state change method
    function validate(){
        for (var i in States) {
            if(states.hasOwnProperty(i) && States[i] == state) {
               return true;
            }
        }
        return false;
    }
    
    //Set state
    function setState = async function (state) {
        validate(state);
    }

    function probability (){
        //efficient probability algebra 
        const state_probability = ((4 ** 4) * 2);
        return state_probability;
    }

    /**
     * four states, probability of one being in use at 
     * any time based on load and use where use is qty 
     * of times a state has been used per 100ms
     */
    const transition = async function (state, (resolve, reject) => {
        ((state_probability  / use) / 1e1);
    });

return;
}
