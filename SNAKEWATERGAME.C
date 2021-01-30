//SNAKE , WATER AND GUN GAME.

#include<stdio.h>
#include<stdlib.h> //used for rand()
#include<time.h> //used for time
int main()
{
            char userchoice();//function prototype
            float number;
            char user;
            char computer;
            int flag;
            //random number generator
            srand(time(0));
            number = rand()%100+1;//generate random number between 1 to 100
             if(number <= 33.33)
                computer = 's';
            else if(number > 33.33 && number <= 66.66 )
                computer = 'w';
            else
                computer = 'g';
             user = userchoice();
            //logic for the game
            // 1 = winning , -1 = lossing , 0 = draw
            if(user == 'g' && computer == 's')
                flag =  1;
            else if( user == 'g' && computer == 'w' )
                flag = -1;
            else if( user == 's' && computer == 'g' )
                flag = -1;
            else if( user == 's' && computer == 'w' )
                flag = 1;
            else if( user == 'w' && computer == 's' )
                flag = -1;
            else if( user == 'w' && computer == 'g' )
                flag = 1;
            else
                flag = 0;

    if(flag == 0)
        printf("Computer pressed '%c' and you pressed '%c' \n so, Game draw" , computer , user);
    else if(flag == 1)
        printf("Computer pressed '%c' and you pressed '%c' \n so, you win" ,  computer , user);
    else
        printf("Computer pressed '%c' and you pressed '%c' \n so, you lose" , computer , user);

return 0;
}
//function for user choice
char userchoice(){
    char c;
    printf(" press's' for snake 'g' for gun and 'w' for water \n ");
    scanf("%c" , &c);
    return c;
}
