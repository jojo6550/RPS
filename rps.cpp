/*Stone Paper Scissor or Rock Paper Scissor is a game that is played between two people, 
Each player in this game forms one of three shapes. 
The winner will be decided as per the given rules:
Rock vs Scissor -> Rock wins
Rock vs Paper -> Paper wins
Paper vs Scissor -> Scissor wins
In this game, the user is asked to make choices based on both computer, 
and user choices and the results are displayed showing both computer and user choices.*/

#include <iostream>
#include <string>
using namespace std;
class Game{
    public:
        int rock = 1;
        int paper = 2;
        int scissor = 3;
        int computerChoice;
        int playerChoice;
        int Computer(){
            for (int i = 0; i <3; i++){
                computerChoice = i;
            }
            return computerChoice;
        }
        int Player(){
            cout<<"Rock(1), Paper(2) or Scissors(3)?"<<endl;
            cin>>playerChoice;
            return playerChoice;
        }
        void gamefunction(){
            if (playerChoice == 1 && computerChoice == 2){
                cout<<"Paper beats Rock! Computer wins!"<<endl;
            } else if (playerChoice == 1 && computerChoice == 3){
                cout<<"Rock beats Scissors! Player wins!"<<endl;
            } else if (playerChoice == 1 && computerChoice == 1){
                cout<<"Rock and Rock makes a bigger rock! Draw"<<endl;

            } else if (playerChoice == 2 && computerChoice == 2){
                cout<<"Paper and Paper makes a book! Draw"<<endl;
            } else if (playerChoice == 2 && computerChoice == 3){
                cout<<"Scissors beats Paper! Computer wins!"<<endl;   
            } else if (playerChoice == 2 && computerChoice == 1){
                cout<<"Rock beats Scissors! Computer wins!"<<endl;
            } else if(playerChoice == 3 && computerChoice ==1){
                cout<<"Rock beats Scissors! Computer wins!"<<endl;
            } else if(playerChoice == 3 && computerChoice == 2){
                cout<<"Scissors beats Paper! Player wins!"<<endl;
            } else if(playerChoice == 3 && computerChoice ==3){
                cout<<"Scissors and Scissors! Draw!"<<endl;
            }
        }
        void printInfo(){
            cout<<"Computer: "<<computerChoice<<endl;
            cout<<"Player: "<<playerChoice<<endl;
        }

};
int main(){
    Game game;
    int count;
    while(count != 2){
        cout<<"Rock Paper Scissors........... SHOOOOOOOOT!"<<endl;
        cout<<"1. To play. 2 to exit."<<endl;
        cin>>count;
        switch(count){
            case 1:
                cout<<"Rock Paper Scissors........... SHOOOOOOOOT!"<<endl;
                game.Player();
                game.Computer();
                game.gamefunction();
                break;
            case 2:
                return 0;
        }
        
    }
    return 0;
}