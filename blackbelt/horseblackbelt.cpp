//horseblackbelt.cpp
//horse track program randomly flips a coin to determine whihc horse advances
//this program implements 4 functions, function main, function draw
//function coinFlip and function isWinner


#include <iostream>
#include <cstdlib>
#include <stdio.h>

#define TRACK_LENGTH 15
#define HORSES_LENGTH 5


using namespace std;


//function prototypes
void coinFlip(int horses[], int horseCount);
int draw(int horses[], int horseCount);
bool isWinner(int horses[], int horseCount);


int main(){
    

    //declare int seed
    int seed;
    
    
    //print the statement in quotations.
    printf("Please enter a random seed: ");
    
    
    //scan user input to seed the srand function.
    scanf("%d", &seed);
    

    //seed srand function. 
    srand(seed);
    
    
    //intialize and int array of horse_length to 0    
    int horses[HORSES_LENGTH] = {0};
    
    
    // pass two parameters to isWinner function, coinFlip and draw function until winner is found
    while(!isWinner(horses, HORSES_LENGTH)){
        

    	//pass array horses and length of array horses as parameters to coinFlip function
        coinFlip(horses, HORSES_LENGTH);
        

        //pass array horses and length of array horses as parameters to draw function
        draw(horses, HORSES_LENGTH);
        

    } //end of while loop
    

    return(0);
    

} // end main


//pass array of horses and length of array horses as parameters and flip a coin each time
//to determine if horse advances
void coinFlip(int horses[], int horseCount){
    
    
    //Loop through array of horses 
    for(int i = 0; i < horseCount; i++){
        
        
        //if advance equals 1 horse advances
        //if advance equals 0 horse does not advance
        bool advance = rand() % 2 == 1;
        
		
		//if receives advance result
        if (advance) {
        
        
        	//increment horses[i] by 1 if advance returns 1
            horses[i]++;
        

        } //end of if statement
        

    } //end of for loop
    

} //end of coinFlip function


//pass array of horses and length of array horses as parameters
//if horses is greater or equal to track length return true and output winner
//if horses is not equal to track length return false until there is a winner
bool isWinner(int horses[], int horseCount){
    
    
    //loop through array of horses
    for(int i = 0; i < horseCount; i++){


        //if horses[i] is greater or equal to the track length output the winner
        if(horses[i] >= TRACK_LENGTH - 1){
        

        	//printf("Horse %d wins!", i);
        	//printf("\n");
            cout<<"Horse "<<i<<" wins!"<<endl;
        

        	//return true
            return true;
        

        } //end of if statement
        
        
        
    } //end of for loop
  

    //return false
    return false;
  

} //end of isWinner function


//pass array of horses and length of array horses as parameters and print horse track and horses 
int draw(int horses[], int horseCount){
    
    
    //loop through the array of horses 
    for(int i = 0; i < horseCount; i++){
        
        
        //print a '.' equal to the track length for for the amount of horses in the array horses 
        for(int track = 0; track < horses[i]; track++) {
        

    		//print the statement in quotations.
            printf(".");
        
        
        } //end of inner for loop
        
        
        //print the horse number
        printf("%d", i);
        
        
        //print the '.' equal to the track length for the '.' after the horse number is printed
        for(int track = horses[i]+2; track <= TRACK_LENGTH; track++) {
            

        	//print the statement in quotations.
            printf(".");
            
            
        } //end of inner for loop
        

        //print the statement in quotations.
        printf("\n");
        
        
    } //end of outer for loop
    
    
    //print the statement in quotations.
    printf("\n");
    

    //print the statement in quotations.
    printf("\n");
    
    
    return 0;

    //another way to achieve the same print functionality
    /*
	for (int i = 0; i < horseCount; i++) {

		for (int track = horses[i]; track < TRACK_LENGTH; track++) {


			if (horses[i] == track) {

				printf("%d", horseNumber);

			} else {

				printf(".");
			}
		}

		printf("\n");

	}
    */


} //end of draw function



