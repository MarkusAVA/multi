/*Made by ByMarco25:)
17-03-2023*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
int main (){
int choice;
std::cout << "Welcome to the multi functional program!\n" << "Please choose one of the four options below: \n" << "1) Calculator\n" << "2) CURRENTLY SEMI FUNCTIONAL Magic 8-Ball\n" << "3) Guess the random number\n" << "4) Harry potter sorting hat\n";
std::cin >> choice;

if (choice < 1 || choice > 4) { //This makes it so any number lower than 1 or higher than 4 wont break the program, and asks the user to input a new number
    std::cout << "Please choose one of the above options!\n";
    return 1;
}
else if (choice == 1) { //start of calculator code
    double a;
    double b;
    int ans;
    std::string input_str;

    while (true) { //loops the program until the user types "Stop", or "end"
        std::cout << "Please choose equation type; \n";
        std::cout << "1: Addition, 2: Subtraction, 3: Multiplication, 4: Division \n";
        std::cin >> ans;

        if (ans < 1 || ans > 4) { //This makes it so any number lower than 1 or higher than 4 wont break the program, and asks the user to input a new number
            std::cout << "Invalid equation type. Please try again and choose one of the equation options!\n";
            return 1;
        }

        std::cout << "Please choose your first number: \n";
        std::cin >> a;
        std::cout << "Please choose your second number: \n";
        std::cin >> b;

        if (ans == 4 && b == 0) { //Checks if the user tried to devided a number by 0, and tells the user that's not possible
            std::cout << "Cannot divide by zero. Please try again and choose a non-zero second number!\n";
            return 1;
        }

        switch (ans) { //Switches between different cases depending on which simple mathimaticall equetion the user wants to complete
        case 1:
            std::cout << a << " + " << b << " = " << a + b << "\n";
            break;
        case 2:
            std::cout << a << " - " << b << " = " << a - b << "\n";
            break;
        case 3:
            std::cout << a << " * " << b << " = " << a * b << "\n";
            break;
        case 4:
            std::cout << a << " / " << b << " = " << a / b << "\n";
            break;
        }

        std::cout << "Enter 'stop' or 'end' to exit, or any other input to continue: ";
        std::cin >> input_str;
        if (input_str == "stop" || input_str == "end") {
            break;
        }
    }

    return 0;

}else if (choice == 2){ //Magic 8-ball
std::cout << "MAGIC 8-BALL: \n\n";
std::string said;
while (true) {
    std::cout << "What is your query: \n";
    std::getline(std::cin, said);
    if (said.empty()) {
        std::cout << "Please enter a question!\n";
    } else {
        break;
    }
}
std::cout << "You said: " << said << "\nThe Magic 8-Ball says: \n";
std::srand(time(NULL));
int answer = std::rand() % 10; // gets a random number from between 0 and 9

if (answer == 0){ //Depending on the random number chosen by the program, a different output will be given to the user
    std::cout << "It is certain.\n";
}else if (answer == 1){
    std::cout << "I don't know\n";
}else if (answer == 2){
    std::cout << "Go ask your mum\n";
}else if (answer == 3){
    std::cout << "Go ask your dad\n";
}else if (answer == 4){
    std::cout << "Scream into the void for the answer\n";
}else if (answer == 5){
    std::cout << "Perhaps\n";
}else if (answer == 6){
    std::cout << "Looks like it\n";
}else if (answer == 7){
    std::cout << "I'd say so, yea\n";
}else if (answer == 8){
    std::cout << "Why not\n";
}else if (answer == 9){
    std::cout << "Let's go with that\n";
}else {
    std::cout << "Very doubtful.\n";
}
// ... previous code ...
std::cout << "Press enter to exit." << std::endl;
std::cin.ignore(); // ignore any leftover characters in the input stream
std::cin.get(); // wait for the user to press enter
return 0;
}else if (choice == 3){ // random number guessing game, the computer picks a number between 1-100 and asks the user to guess the number, the program ends when the user guesses correctly
    int guess;
    std::srand(time(NULL));
    
    
    while (true){ //loops the program until the correct random number is guessed by the user
        int rand_num = std::rand()%101;
        std::cout << "Try guessing the random number between 0-100, type your number: \n";
        std::cin >> guess;
        if (std::cin.fail()) { // checks if input is not a valid number
            std::cout << "Invalid input. Please enter a number between 0 and 100!\n";
            std::cin.clear(); // clears the error flag on cin
            std::cin.ignore(10000, '\n'); // ignores any remaining characters in cin
        } else if (guess < 0 || guess > 100){
            std::cout << "Please type a number between 0 and 100!\n";
        } else if (guess == rand_num){
            std::cout << "Congrats you guessed " << guess << " and the random number was " << rand_num << "!\n";
            break;
        } else{
            std::cout << "You guessed " << guess << " unfortunately the number was " << rand_num << "!\n" << "Please try again!\n";
        } 
    }
    std::cout << "Press enter to exit." << std::endl;
    std::cin.ignore(); // ignore any leftover characters in the input stream
    std::cin.get(); // wait for the user to press enter
    return 0; 
}else if (choice == 4){ //Harry potter sorting hat
int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
int answer1, answer2, answer3, answer4;
int max = 0;
std::string house;
std::cout << "The Sorting Hat Quiz!\n";
std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << " 1) The Good\n" << " 2) The Great\n" << " 3) The Wise\n" << " 4) The Bold\n";
  std::cin >> answer1;
  if (answer1 == 1){ //Adds 1 to either answer1,2 or 3 depending on what is choosen above
  hufflepuff++;
  }else if (answer1 == 2){
  slytherin++;
  }else if (answer1 == 3){
  ravenclaw++;
  }else if (answer1 == 4){
  gryffindor++;
  }else{
  std::cout << "Invalid input.\n";
  }
std::cout << "Q2) Dawn or Dusk?\n\n";
std::cout << " 1) Dawn\n" << " 2) Dusk\n";
std::cin >> answer2;
if (answer2 == 1){//Adds 1 to either answer1,2 or 3 depending on what is choosen above
  gryffindor++;
  ravenclaw++;
  }else if (answer2 == 2){
  hufflepuff++;
  slytherin++;
  }else{
  std::cout << "Invalid input.\n";
  }
std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << " 1) The trumpet\n" << " 2) The violin\n" << " 3) The piano\n" << " 4) The drum\n";
  std::cin >> answer3;
  if (answer3 == 1){//Adds 1 to either answer1,2 or 3 depending on what is choosen above
  hufflepuff++;
  }else if (answer3 == 2){
  slytherin++;
  }else if (answer3 == 3){
  ravenclaw++;
  }else if (answer3 == 4){
  gryffindor++;
  }else{
  std::cout << "Invalid input.\n";
  }
std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << " 1) The wide, sunny grassy lane\n" << " 2) The narrow, dark, lantern-litt alley\n" << " 3) The cobbled street lined (ancient buildings)\n" << " 4) The twisting, leaf-strewn path through woods\n";
  std::cin >> answer4;
  if (answer4 == 1){//Adds 1 to either answer1,2 or 3 depending on what is choosen above
  hufflepuff++;
  }else if (answer4 == 2){
  slytherin++;
  }else if (answer4 == 3){
  ravenclaw++;
  }else if (answer4 == 4){
  gryffindor++;
  }else{
  std::cout << "Invalid input.\n";
  }
if (gryffindor > max) {//Outputs one of the houses into the command output depending on which house had the most points in total
  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}
std::cout << house << "!\n";
}
// ... previous code ...
std::cout << "Press enter to exit." << std::endl;
std::cin.ignore(); // ignore any leftover characters in the input stream
std::cin.get(); // wait for the user to press enter
return 0;
}
