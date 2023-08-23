#include <iostream>
#include <string>

using namespace std;
//void get_word();
//void print_word();

int main()
{ 
    
    string word="jesus";
    string blanks=word;
    char letter;
    string user_word;
    char i,erobb;
    for(char& i : blanks)
    {
        i = '_';

    }
    cout<<blanks;
    bool gameOver = false;
    while(gameOver==false)
    {
        int x=0;
        cout<<blanks<<"\n";
        cout<<"Enter a Word :"<<"\n";
        cin>>letter;
        
        

           
        for(char& c : word)
        {
            if(letter==c)
            { 
                    blanks[x]=letter;
            }
            x++;
        }
        if(blanks==word)
            {
                gameOver=true;
                cout<<"You got the word";
            }
        
          
        
    }
}