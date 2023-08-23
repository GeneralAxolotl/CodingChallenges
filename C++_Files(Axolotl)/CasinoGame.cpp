#include <iostream>
#include <time.h>

int main()
{
    int randomNum,player_Guess,player_Tries;
    srand ( time(NULL) );
    randomNum = rand() % 10;
    for(player_Tries=2;player_Tries>=0;player_Tries--)
    {
        std::cout<<"Guess a Number Between (0-10):";
        std::cin>>player_Guess;
        if(player_Guess==randomNum)
            {std::cout<<"Congratulations,You\'ve Won! in "<<player_Tries;
             break;
            }
        else
            {std::cout<<"You Are a Dumbfuck You have Got "<<player_Tries<<" tries left\n";}
    }
        
    
       
        
   
}