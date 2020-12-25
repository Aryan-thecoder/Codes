
/*

Program - Game Code

Developer - <Aryan.S> <19R21A1247>

Date - <18 April 2020> <5:30PM>

*/

#include<stdio.h>
void main()
{
    int total=20,x,s,y,player,computer=0,i,sum=0;
    printf ("Welcome to the Counting Game!!!\n");
    press:
    printf ("Press 1 to know the rules\n");
    scanf ("%d",&x);
    if (x==1)
    {
    printf ("RULES :-\n\n");
    printf ("Rule 1 : Player has to choose among numbers 1, 2 or 3\n\n");
    printf ("Rule 2 : If a Player chooses any other numbers than 1, 2 or 3 then the Player will be disqualified from the game\n\n");
    printf ("Rule 3 : Choosing 1 gives 1 value as the output. Ex: 1\n\n");
    printf ("Rule 4 : Choosing 2 gives 2 consecutive values as the output. Ex: 1 2\n\n");
    printf ("Rule 5 : Choosing 3 gives 3 consecutive values as the output. Ex: 1 2 3\n\n");
    printf ("Rule 6 : As the player chooses any of the numbers, the Computer chooses another\n\n");
    printf ("Rule 7 : User who first gets to 20, WINS the game\n\n");
    }
    else
    {
        printf ("You entered Wrong Number. Please Press '1' to know the rules\n\n");
        goto press;
    }
    if (x==1)
    {
        printf ("I hope you have read the rules. Now, Lets start the Game!\n");
        start:
        printf ("Press 2 to start the game\n");
        scanf ("%d",&s);
    }
    if (s==2)
    {
        while(total<=20)
        {
            if (total==20)
            {
                printf ("Computer : Haha! A human VS me? Get ready to lose you Human!\n\n");
            }
            printf("Pick among 1 or 2 or 3\n\n");
            scanf("%d", &player);
            if (player<1||player>3)
            {
                printf ("Y0U ARE DISQUALIFIED\n\n");
                break;
            }
            if(player>0&&player<4)
            {
                printf ("Player selected : ");
                for (i=1+sum;i<=sum+player;i++)
                {
                    printf ("%d ",i);
                }
                printf ("\n");
                sum=sum+player;
                total = total - player;
                computer = 4 - player;
                printf ("Computer picked : ");
                for (i=sum+1;i<=computer+sum;i++)
                {
                    printf ("%d ",i);
                }
                printf ("\n\n");
                total = total - computer;
                sum=sum+computer;
                if(total == 0)
                {
                    printf("GAME OVER\n\n");
                    printf("YOU LOST!!!\n\n");
                    printf("Computer : Better luck next time :p!!!\n\n");
                    break;
                }
            }
        }
    }
    else if (s!=2&&x==1)
    {
        printf ("\nCome on!!! Press '2'\n");
        goto start;
    }
}
