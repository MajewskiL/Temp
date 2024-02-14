#include <iostream>
#include <random>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    random_device rd;   // Seed with a real random value, if available
    mt19937 gen(rd());  // Standard mersenne_twister_engine seeded with rd()
    int random_choice = gen() % 3;

    std::string ans;

    std::cout << "Welcome to Rock, Paper, Scissors!\n\nChoose your move: Rock, Paper, or Scissors" << std::endl;
    std::cin >> ans;

    std::string winner;

    std::unordered_map<int, std::string> c; 
    c[0] = "Rock"; 
    c[1] = "Paper"; 
    c[2] = "Scissors"; 
    std::cout << c[random_choice].c_str() << endl << random_choice << endl;
    std::printf("\nThe computer chose %s. ", c[random_choice].c_str());

    if ((ans == "Rock" && c[random_choice] == "Paper") || (ans == "Paper" && c[random_choice] == "Rock") ) {

        std::printf("Paper covers Rock. ");
        winner = (ans == "Paper") ? "You win!" : "Sorry, you lost.";
    } else if ((ans == "Scissors" && c[random_choice] == "Paper") || (ans == "Paper" && c[random_choice] == "Scissors") ) {

        std::printf("Scissors cutting Paper. ");
        winner = (ans == "Scissors") ? "You win!" : "Sorry, you lost.";

    } else if ((ans == "Scissors" && c[random_choice] == "Rock") || (ans == "Rock" && c[random_choice] == "Scissors") ) {

        std::printf("Rock smashes Scissors. ");
        winner = (ans == "Rock") ? "You win!" : "Sorry, you lost.";
    } else if (ans == c[random_choice]) {
        winner = "Draw!";
    } else {
        std::cout << "Invalid move. Please enter Rock, Paper, or Scissors.";
        winner = "";
    }
    std::cout << winner;
     return 0;

}   
 