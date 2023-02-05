#include <stdio.h>
#include <windows.h>
#include<conio.h>
#include<string.h>
#include <ctype.h>
#include<stdlib.h>
void help();
void Rules (char);
void quit (char);
int main ()
{
    FILE *score;
    score=fopen("SCORES.txt","a");
    if (score == NULL)
        printf("Error..");
    char n[20];
    char i[12];
    char in[4];
    int count;
    printf("\n\n\n\t   __      __   ___  | |   ___    ___    _ __ ___     ___ \n ");
    printf("\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ \n");
    printf("\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ \n");
    printf(" \t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| \n");
    printf("\n\t\t\t\t    TO ");
    printf("\n\t\t\t\tQUIZ SYSTEM ");
    printf ("\n\t_______________________________________________________________________");
    printf ("\n\t_______________________________________________________________________\n");
    Sleep (2000);
    printf ("\n\t There are 2 rounds in this Quiz Game\n");
    printf ("\n\t |1|.1st round: There are 3 questions. Choose the correct answers.");
    printf ("\n\t |2|.2nd round: There are 2 questions. Write the correct answers in one word.");
    printf ("\n\t |3|.3rd round: There are 3 questions. Write the correct answers in one word within 10 seconds.\n");
    printf ("\n\t________________________________________________________________________");
    printf ("\n\t________________________________________________________________________\n");
    Sleep (2500);
    printf("\n\t\t\t!!!!!  BRAIN TESTER TO TEST KNOWLEDGE  !!!!!\n") ;
    printf ("\n\t_______________________ ARE YOU READY FOR THE QUIZ ______________________\n\n");
    Sleep (3000);
    system("cls");
void help()
{
system("cls");
    printf("\n\t_____________________________________ QUIZ GAME RULES _____________________________________");
    printf("\n\t_____________________________________ ONLINE QUIZ SYSTEM __________________________________");
    printf("\n\t 1. There are three rounds in the game.");
    printf("\n\t 2. In Warmup round you will be asked a total of 8 questions to test your general");
    printf("\n\t    knowledge.");
    printf("\n\t 3. You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t    right option.");
    printf ("\n\t__________________________________!! BEST OF LUCK !!________________________________________");
}
HOME:
    printf ("\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter your name:-");
    gets(n);
     printf ("\n\t\t\t Enter your ID:-");
    gets(i);
     printf ("\n\t\t\t Enter your Intake:-");
    gets(in);
    printf("\n\t---------------------------------");
     printf ("\n\t Choose Option:-");
    printf ("\n\t|1|.Press 'X' to Start...");
    printf ("\n\t|2|.Press 'Y' to Quit...");
    printf("\n\t|3|.Press 'Z' for Support... ");
    printf("\n\t---------------------------------\n\t");
    char option;
    scanf ("%c", &option);
    system("cls");
    if (toupper(option) == '1')
    {
    system("cls");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\t\t_______________________________ WELCOME %s To QUIZ SYSTEM ________________________",n);
    printf ("\n\t\t________________________________________________________________________________\n");
    printf ("\n\t\t\t\t\t TO CHOOSE A CATEGORY:");
    printf ("\n\t\t________________________________________________________________________________\n");
    printf("\n  SELECT A NUMBER:\n");
    printf (" |1|.Mathmatics.\n |2|.General Knowledge.\n |3|.Science.\n");
     printf ("\n\t Choose Option:-");
     int choice;
    scanf ("%d", &choice);
    printf ("\n\t\t________________________________________________________________________________");
    printf ("\n\t\t Let's Start.... ");
    printf ("\n\t\t\t\t\t 3\n");
    Sleep (1500);
    printf ("\n\t\t\t\t\t 2\n");
    Sleep (1500);
    printf ("\n\t\t\t\t\t 1\n");
    Sleep (1500);
    printf ("\n\t\t Let Begin To starts..... ");
    system("cls");
int i, j , k;
    count=0;
    char a,str[2];
if (choice == 1)
    {
        for(i=1;i<=8;i++)
        {
            switch(i)
                {
                    case 1:
                        printf("\n-----------------------------------------------");
                        system("cls");
                        printf("\n\n|1|.Which of the following is a Palindrome number?");
                        printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                        if (toupper(getch())=='C')
                            {
                                printf("\n\nCorrect!!!");count++;
                            }
                        else
                            {
                                printf("\n\nWrong!!! The correct answer is C.23232");
                            }
                            break;
                   case 2:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|2|.Solve : 200 - (96 / 4)?");
                        printf("\n\nA.176\t\tB.98\n\nC.203\t\tD.76");
                        if (toupper(getch())=='A')
                            {
                                printf("\n\nCorrect!!!");count++;
                            }
                        else
                            {
                                printf("\n\nWrong!!! The correct answer is A.176");
                            }
                            break;
                    case 3:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|3|.What is the sum of one digit prime numbers?\n");
                        printf("\n\nA.11\t\tB.13\n\nC.15\t\tD.17");
                        if (toupper(getch())=='D')
                            {
                                printf("\n\nCorrect!!!");count++;
                            }
                        else
                            {
                                printf("\n\nWrong!!! The correct answer is D.17");
                            }
                        Sleep (3000);
                        printf("\n\t_________________________________________END OF ROUND 1_______________________________________\n");
                        Sleep (2000);
                        printf("\n\t_________________________________________START OF ROUND 2______________________________________\n");
                        break;
                    case 4:
                        printf("\n\n|4|.How many months have 30 day?\n");
                        char s1[20]="eleven";
                        char s2[20];
                        fflush (stdin);
                        gets (s2);
                        int str1 = strcmp(s1, tolower(s2)) ;
                            if(str1 == 0)
                            {
                                printf("\n\nCorrect!!!");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is eleven");
                            }
                            break;
                    case 5:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|5|.What is a 1/4 as a percentage?\n");
                        char s3[20]="25";
                        char s4[20];
                        gets (s4);
                        int str2 = strcmp(s3, s4) ;
                            if(str2 == 0)
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is 25\n");
                            }
                        Sleep (3000);
                        printf("\n\t_________________________________________END OF ROUND 2_______________________________________\n");
                        Sleep (2000);
                        printf ("\n\t|-- Answers the following questions within 30 seconds using small letters and numbers only --|\n");
                        printf("\n\t_________________________________________START OF ROUND 3______________________________________\n");
                        break;
                    case 6:
                        {
                        int waitSecond =10;
                        char s7[20]="1";
                        char s8[20];
                        fflush (stdin);
                        char c;
                        printf("\n\n|6|.How many lines can be drawn through two points?\n");
                        while(1)
                        {
                         if(kbhit())
                          {
                           c=gets (s8);
                           break;
                          }
                         Sleep(1000);
                         --waitSecond;
                         if(waitSecond==0)
                            break;
                        }
                        {
                                int str4 = strcmp(s7, toupper(s8));
                                if(str4 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: 1");
                                    }
                                    }
                                }
                                break;
                case 7:
                       {
                        int waitSecond =15;
                        char s11[20]="52";
                        char s12[20];
                        char c;
                        printf("\n-----------------------------------------------");
                        printf("\n\n|7|.How many weeks are in a year?\n");
                        while(1)
                        {
                         if(kbhit())
                          {
                           c=gets (s12);
                           break;
                          }
                         Sleep(1000);
                         --waitSecond;
                         if(waitSecond==0)
                            break;
                        }
                        {
                                int str6 = strcmp(s11, toupper(s12)) ;
                                if(str6 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: 52");
                                    }
                        }
                    }
                                break;
                        case 8:
                            {
                            int waitSecond =15;
                            char s13[20]="2500";
                            char s14[20];
                            char c;
                            printf("\n-----------------------------------------------");
                            printf("\n\n|8|.50 times 5 is equal to_\n");
                            while(1)
                            {
                                if(kbhit())
                                {
                                    c=gets (s14);
                                    break;
                                }
                                Sleep(1000);
                                --waitSecond;
                                if(waitSecond==0)
                                break;
                            }
                            {
                                int str7 = strcmp(s13, toupper(s14)) ;
                                    if(str7 == 0)
                                        {
                                            printf("\n\nCorrect!!!\n");count++;
                                        }
                                    else
                                        {
                                            printf("\n\nFailed!!! The correct answer is: 250\n");
                                        }
                            }
                        }
                            Sleep (2000);
                            printf("\n\t_________________________________________END OF ROUND 3______________________________________\n\n");
                            printf ("%s Your Total Score is :- %d\n",n, count);
                            fprintf (score, "Mathmatics :- %s ---- %d\n",n, count);
                            Sleep (4000);
                            system("cls");
                            break;
            }
        }
    }
        else if (choice == 2)
            {
        for (j =1 ; j <= 8 ; j++)
            {
        switch (j)
            {
                    case 1:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|1|.When was Bangladesh made a test playing nation?\n");
                        printf("\n\nA. 26th June, 2000\t\tB.16th July, 1998\n\nC.26th February, 2001\t\tD.16th August, 1999");
                            if (toupper(getch())=='A')
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is A. 26th June, 2000\n");
                            }
                            break;
                    case 2:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|2|.Cricket received a boost after this team toured Bangladesh in 1976-77 season. Which team was this?\n");
                        printf("\n\nA.Indian A team\t\t\tB.MCC \n\nC.Indian cricket team\t\tD.Pakistan cricket team");
                            if (toupper(getch())=='B')
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!!The correct answer is: B.MCC\n");
                            }
                             break;
                    case 3:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|3|.Who has scored the most Test hundreds ever?\n");
                        printf("\n\nA.Steve Waugh\t\t\tB.Shane warne\n\nC.Sunil Gavaskar\t\tD.Sachin Tendulkar");
                            if (toupper(getch())=='D')
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is D.Sachin Tendulkar\n");
                            }
                        Sleep (3000);
                        printf("\n\t_________________________________________END OF ROUND 1_______________________________________\n");
                        Sleep (2000);
                        printf("\n\t_________________________________________START OF ROUND 2______________________________________\n");
                        break;

                    case 4:
                        printf("\n\n|4|.Grand Slam is used in which of the following games?\n\n");
                        char s15[20]="tennis";
                        char s16[20];
                        fflush (stdin);
                        gets (s16);
                        fflush (stdin);
                        int str8 = strcmp(s15, s16) ;
                        if(str8 == 0)
                        {
                        printf("\n\nCorrect!!!\n");count++;
                        }
                        else
                        {
                        printf("\n\nWrong!!! The correct answer is: tennis\n");
                        }
                        break;
                    case 5:
                        printf("\n\n|5|.A house takes  8 hours to be built by 4 men. how much time would it take one man to build it?\n\n");
                        char s33[20]="32";
                        char s34[20];
                        gets (s34);
                        int str17 = strcmp(s33, s34) ;
                            if(str17 == 0)
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is: 32\n");
                            }
                        Sleep (2000);
                        printf("\n\t_________________________________________END OF ROUND 2_______________________________________\n");
                        Sleep (2000);
                        printf ("\n\t|-- Answers the following questions within 30 seconds using small letters and numbers only --|\n");
                        printf("\n\t_________________________________________START OF ROUND 3______________________________________\n");
                         break;
                    case 6:
                        {
                        int waitSecond =15;
                        char s21[20]="kabadi";
                        char s22[20];
                        fflush (stdin);
                        char c;
                        printf("\n\n|6|.What is the National Game of Bangladesh?\n");
                        while(1)
                        {
                            if(kbhit())
                            {
                                c=gets (s22);
                                break;
                            }
                            Sleep(1000);
                            --waitSecond;
                            if(waitSecond==0)
                            break;
                        }
                        {
                            int str11 = strcmp(s21, toupper(s22)) ;
                                if(str11 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: kabadi");
                                    }
                        }
                    }
                          break;
                case 7:
                        printf("\n\n|7|.When was the first cricket Test match played?\n\n");
                        char s25[20]="1857";
                        char s26[20];
                        gets (s26);
                        int str13 = strcmp(s25, s26) ;
                            if(str13 == 0)
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is: 1857\n");
                            }
                            break;
                case 8:
                         {
                        int waitSecond =15;
                        char s27[20]="referee";
                        char s28[20];
                        char c;
                        printf("\n\n|8|.What is the name of person which controls a football match?\n");
                        while(1)
                        {
                            if(kbhit())
                            {
                                c=gets (s28);
                                break;
                            }
                            Sleep(1000);
                            --waitSecond;
                            if(waitSecond==0)
                            break;
                        }
                        {
                            int str14 = strcmp(s27, toupper(s28)) ;
                                if(str14 == 0)
                                    {
                                        printf("\n\nCorrect!!!\n\n");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: referee\n\n");
                                    }
                        }
                    }
                            Sleep (2000);
                            printf("\n\t_________________________________________END OF ROUND 3______________________________________\n\n");
                            printf ("%s your total score is :- %d\n",n, count);
                            fprintf (score, "General Knowledge :- %s ---- %d\n",n, count);
                            Sleep (4000);
                            system("cls");
                            break;
                }
        }
    }
        else if (choice == 3)
            {
        for (k =1 ; k <= 8 ; k++)
            {
        switch (k)
            {
            case 1:
                        printf("\n-----------------------------------------------");
                        printf("\n\n\n|1|.In what unit is electric power measured?");
                        printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\t\tD.Units");
                        if (toupper(getch())=='A')
                        {
                        printf("\n\nCorrect!!!\n");count++;
                        }
                        else
                        {
                        printf("\n\nWrong!!! The correct answer is A. Coulomb\n");
                        }
                        break;
            case 2:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|2|.Where is the smallest bone in the human body located?\n");
                        printf("\n\nA.Hair\t\t\tB.Hand \n\nC.Ear\t\tD.Nose");
                        if (toupper(getch())=='C')
                        {
                        printf("\n\nCorrect!!!\n");count++;
                        }
                        else
                        {
                        printf("\n\nWrong!!!The correct answer is: C.Ear\n");
                        }
                        break;
            case 3:
                        printf("\n-----------------------------------------------");
                        printf("\n\n|3|.Which is the nearest Star?\n");
                        printf("\n\nA.Moon\t\t\tB.Sun\n\nC.Jupitor\t\tD.Pluto");
                        if (toupper(getch())=='B')
                        {
                        printf("\n\nCorrect!!!\n");count++;
                        }
                        else
                        {
                        printf("\n\nWrong!!! The correct answer is B.Sun\n");
                        }
                        Sleep (2000);
                        printf("\n\t_________________________________________END OF ROUND 1_______________________________________\n");
                        Sleep (2000);
                        printf("\n\t_________________________________________START OF ROUND 2______________________________________\n");
                        break;
            case 4:
                            printf("\n\n|4|.What can run but never walk, has a mouth but never talk, has a head but never weep and has a bed but never sleep?\n\n");
                            char s29[20]="river";
                            char s30[20];
                            fflush (stdin);
                            gets (s30);
                            int str15 = strcmp(s29, s30) ;
                                if(str15 == 0)
                                {
                                    printf("\n\nCorrect!!!\n");count++;
                                }
                                else
                                {
                                    printf("\n\nWrong!!! The correct answer is: river\n");
                                }
                                break;
            case 5:
                        printf("\n\n|5|.If you have 6 fish and half of them drowns how many do you have?\n\n");
                        char s31[20]="6";
                        char s32[20];
                        gets (s32);
                        int str16 = strcmp(s31, s32) ;
                            if(str16 == 0)
                            {
                                printf("\n\nCorrect!!!\n");count++;
                            }
                            else
                            {
                                printf("\n\nWrong!!! The correct answer is: 6\n");
                            }
                                                    Sleep (2000);
                        printf("\n\t_________________________________________END OF ROUND 2_______________________________________\n");
                        Sleep (2000);
                        printf ("\n\t|-- Answers the following questions within 30 seconds using small letters and numbers only --|\n");
                        printf("\n\t_________________________________________START OF ROUND 3______________________________________\n");
                         break;
             case 6:
                        {
                        int waitSecond =15;
                        char s35[20]="incorrectly";
                        char s36[20];
                        fflush (stdin);
                        char c;
                        printf("\n\n|6|.In English which word is always spelled incorrectly?\n");
                        while(1)
                        {
                            if(kbhit())
                            {
                                c=gets (s36);
                                break;
                            }
                            Sleep(1000);
                            --waitSecond;
                            if(waitSecond==0)
                            break;
                        }
                        {
                            int str18 = strcmp(s35, toupper(s36)) ;
                                if(str18 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: incorrectly");
                                    }
                        }
}
                            break;
             case 7:
                        {
                        int waitSecond =30;
                        char s39[20]="ton";
                        char s40[20];
                        char c;
                        printf("\n\n|7|.Find the answer to this brain teaser. heavy it is but reverse it’s not?\n");
                        while(1)
                        {
                            if(kbhit())
                            {
                                c=gets (s40);
                                break;
                            }
                            Sleep(1000);
                            --waitSecond;
                            if(waitSecond==0)
                            break;
                        }
                        {
                            int str20 = strcmp(s39, toupper(s40)) ;
                                if(str20 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: ton");
                                    }
                        }
                    }
             case 8:
                       {
                        int waitSecond =30;
                        char s41[20]="short";
                        char s42[20];
                        char c;
                        printf("\n\n|8|.What is a five letter word that becomes shorter when you add two other letters to it?\n");
                        while(1)
                        {
                            if(kbhit())
                            {
                                c=gets (s42);
                                break;
                            }
                            Sleep(1000);
                            --waitSecond;
                            if(waitSecond==0)
                            break;
                        }
                        {
                            int str21 = strcmp(s41, toupper(s42)) ;
                                if(str21 == 0)
                                    {
                                        printf("\n\nCorrect!!!");count++;
                                    }
                                else
                                    {
                                        printf("\n\nFailed!!! The correct answer is: short");
                                    }
                        }
                    }
                        printf("\n\t_________________________________________END OF ROUND 3______________________________________\n\n");
                        printf ("%s Your Total Score is :- %d\n",n, count);
                        fprintf (score, "Science :- %s ---- %d\n",n, count);
                        Sleep (3000);
                        system("cls");
                        break;
                }
            }
        }
        else
        {
        printf ("\n\t\t\t ---Please Select a Number amongst The 3 Shown to Start The Game.---");
        }
        printf("\n\n\t\t\t To play again hit 1 and press enter.\n\n\t\t\tTo view scoreboard hit 2 and press enter.\n\n\t\t\tTo Quit press 3\n\n");
        scanf ("%d",&a);
        printf("\n");
        if(a==1)
                {
                goto HOME;
                }
        else if(a==2)
                {
                fclose (score);
                score=fopen("SCORES.txt","r");
        while (!feof(score))
                {
                char ch=fgetc(score);
                    printf("%c",ch);
                }
                fclose (score);
            }
        else
            {
            printf ("\n\t\t________________________________________________________________________________\n");
            printf ("\n\t\t Thanks For Participation!!\n");
            printf ("\n\t\t________________________________________________________________________________");
            }
    }
        else if (toupper(option) == '2' )
            {
                fprintf (score, "%s ---- Exit the Game\n",n );
                exit(1);
            }
         else if (toupper(option) =='3')
            {
            help();
            getch();
            goto HOME;
            }
    return 0;
}
