# Goals: 
This program simulates a horse race. There is a horse track of 15 units long represented by periods and 5 horses. To determine if the horses advance there is a coinFlip function which flips a coin to determine if the horses should advance one unit on the horse track. The horses take turns to determine if they should be advancing or not, the position of the horses on the track is visible throughout the race. The race ends when one of the horses passes the finish line, that is to say after one of the horses advances through the 15 units represented by periods.

# Input: 
This program takes in a user inputed integer and scans it into the variable called seed. Seed is used as an integer which seeds the srand function called and use it to seed the random number generator.  

# Output: 
This program prints a horse track of 15 units represented by periods and a horse number. This horse number moves through the track as the horse advances. The advancement of the horses is determined by the result of a coin flip. If this coin flip results in a 1 the horse advances if this coin flip results in a 0 the horse does not advance. 

# Steps: 
For this program 4 functions are used - main(), coinFlip(), draw() and isWinner().

- main(): In main() the int seed is declared, the user is also prompted to input a random seed integer that seeds srand to generate a random number for the coinFlip() function. The user inputed integer is scanned using scanf. main() also runs a while loop which calls isWinner() until a winner is found. Inside the while loop coinFlip() and draw() functions are called.

- coinFlip(): In the coinFlip() function, a coin is flipped to determine if the horses in the horses array advances or not. In other words a boolean called advance is initialized inside of a for loop which loops through the array of horses. If the boolean returns a 1, the array horses[i] increments by one which moves the postion of the horse by 1 on the horse track of 15 units represented by periods. If the advance boolean returns a 0 the array horses[i] does not advance which is represented by the horse remaining in the same position on the horse track of 15 units represented by the periods.  
        
- draw(): In the draw() function the horse track and horses is printed and outputed to the screen using the printf function. This could also output using cout stream if preferred. The draw() function contains 3 for loops, 2 inner for loops nested in 1 outer for loop. The outer for loop, loops through the horses represented by the horseCount variable, in this case 5 horses which creates the five lines of periods and the horses represented by the numbers 0 through 4 for a total of 5 horses. Nested within the outer for loop, are contained 2 for loops, which print the periods representing the horse track units mentioned earlier, one for loop for the periods preceeding the horse number and 1 for loop to print the succeding periods following the horse number. In between the 2 nested for loops is a printf statement which prints the horse number on the horse track.      
        
- isWinner(): In the isWinner() function the winner of the horse race is determined. If the isWinner() boolean function returns true, the winner is found otherwise the isWinner() function returns false. This allows the isWinner function to run until a winner is found. If horses[i] is greater or equal to the track length the isWinner() returns true and outputs a winner. If the isWinner() function is not equal to track length the function returns false and winner is not found. This is accomplished with a for loop which loops through the size of the array horses[], which in this case is 5 horses. If horses[i] is greater or equal to the track legnth, which in this example is 15 units long, the winning horse has crossed the finish line and the winning horse number is outputted to the screen of the user. If not, the function returns false, which allows the while loop to continue running until the winner of the horse race is found.