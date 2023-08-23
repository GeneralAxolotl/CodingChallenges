import random
options = ["Rock","Paper","Scissor"]
player_choice=str(input("Enter your choice :"))
computer_choice=random.choice(options)
def check_win(ans1,ans2):
    if(ans1==ans2):
        return "Tied"
    elif (ans1=="Rock" and ans2=="Scissor"):
        return "You Won ",player_choice,"beats ",computer_choice
    elif (ans1=="Paper" and ans2=="Rock"):
        return "You Won ",player_choice,"beats ",computer_choice
    elif (ans1=="Scissor" and ans2=="Paper"):
        return "You Won ",player_choice,"beats ",computer_choice
    else:
        return "You Lost ",computer_choice,"beats",player_choice
print("You choose ",player_choice,"and Computer choose ",computer_choice)
result=check_win(player_choice,computer_choice) 
print(result)