#include <iostream>

using namespace std;

void display_balance(int num1, int num2);
void drawline(int num,char symbol);
int main()
{
    int randomNum,bet,guess,player_money=500,casino_vault=1000000;
    bool exit;
    char y_n;
    randomNum = rand()%10;
    drawline(80,'-');
    cout<<"\n\nWelcome to the Casino\nDo You Wish to Play?(True/False) :"<<endl;
    drawline(80,'-');
    cin>>y_n;
    if(y_n=='T')
    {exit=true;}
    else
    {exit=false;}
    system("cls");
    display_balance(player_money,casino_vault);
    cout<<"How much do you bet? :"<<endl;
    cin>>bet;
    do
    {
        int tries=0;
        cout<<"Guess a Number Between (1-10) :"<<endl;
        cin>>guess;
        if(guess==randomNum)
        {
            cout<<"Congrats You've Won\n"<<endl;
            player_money+=bet;
            casino_vault-=bet;
            display_balance(player_money,casino_vault);           
            exit=false;
            
        }
        else
        {
            cout<<"Better luck next time\n";
            drawline(80,'-');
            tries++;

        }
        if(tries==3)
        {
            player_money-=bet;
            casino_vault+=bet;
            exit=false;
        }
    }while(exit);
    display_balance(player_money,casino_vault); 
    return 0;
}
void display_balance(int num1, int num2)
{
    drawline(80,'-');
    cout<<"Your Money  :"<<num1<<"\n"<<endl;
    cout<<"Casino Money:"<<num2<<"\n"<<endl;
    drawline(80,'-');
}
void drawline(int num,char symbol)
{
    for(int i=0;i<num;i++)
    {cout<<symbol;}
    cout<<"\n";
}