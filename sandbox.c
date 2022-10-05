#include <stdio.h>
int find_zodiac(int day, int month);
int main()
{   
    int a_day, a_month, b_day, b_month;
    int a_zodiac, b_zodiac;
    // source: https://media.theeverygirl.com/wp-content/uploads/2022/04/the-everygirl-zodiac-chart-1.jpg
    int compatibility[12][12] = 
    {
        {2,1,2,0,1,1,2,1,2,0,0,2},
        {1,0,1,2,0,2,2,2,0,1,2,1},
        {2,1,1,2,2,0,2,0,1,0,0,2},
        {0,2,2,2,1,2,2,2,2,1,2,0},
        {2,0,2,1,2,1,2,1,2,0,2,2},
        {0,2,0,2,1,2,0,1,0,2,2,0},
        {2,2,2,2,2,0,0,1,2,1,2,2},
        {1,2,0,2,1,1,0,0,2,2,2,0},
        {1,0,1,2,2,0,2,1,2,1,0,1},
        {0,1,0,1,0,2,1,2,1,1,0,1},
        {0,2,0,2,2,2,2,2,0,0,2,1},
        {2,1,2,0,2,1,2,0,2,1,1,2}
    };

    printf("\n\n\n");
    printf("Hello! I'm a fortuneteller(占い師).\n\n");
    printf("( ◞•̀д•́)◞◟(•̀д•́◟) \n\n");
    printf("Give me your birthday and I'll tell you something cool! ( ͡° ͜ʖ ͡°)\n");
    printf("All inputs must be numbers\n");
    printf("THIS IS JUST FOR FUN!!!\n\n٩(๑`ȏ´๑)۶\n\n");

    // input user A's day of birth
    printf("Type your day of birth: ");
    scanf("%d", &a_day);
    // input user A's month of birth
    printf("Type your month of birth: ");
    scanf("%d", &a_month);
    // input user B's day of birth
    printf("Type your friend's day of birth: ");
    scanf("%d",&b_day);
    // input user's B month of birh
    printf("Type your friend's month of birth: ");
    scanf("%d",&b_month);

    a_zodiac = find_zodiac(a_day, a_month);
    b_zodiac = find_zodiac(b_day, b_month);
    // printf("%d", a_zodiac);
    // printf("%d", b_zodiac);
    
    if (a_zodiac <=11 && b_zodiac <= 11)
    {
        if (compatibility[a_zodiac][b_zodiac] == 0)
        {
            printf("Bad news! You and your friend are not very compatible! (´；д；`)");
            printf("\nBut don't be sad :D\n");
        }

        else if (compatibility[a_zodiac][b_zodiac] == 1)
        {
            printf("You two can become very good friends (❁´◡`❁) .\n");
            printf("You should talk to them to learn more about them.");
        }
        else 
        {
            printf("Perhaps you have found your destiny lover. Congrats ( ͡° ͜ʖ ͡°) \n");
        };
    }
}

//function definition
int find_zodiac(int day, int month)
{       
    if (day <=31 && month <=12)
    {
        if( (month == 12 && day >= 22) || (month == 1 && day <= 19) )  
        {  
            return 9;  
        }  
        else if( (month == 1 && day >= 20) || (month == 2 && day <= 17) )  
        {  
            return 11;  
        }  
        else if( (month == 2 && day >= 18) || (month == 3 && day <= 19) )  
        {  
            return 10;  
        }  
        else if( (month == 3 && day >= 21) || (month == 4 && day <= 19) )  
        {  
            return 0;  
        }  
        else if( (month == 4 && day >= 20) || (month == 5 && day <= 20) )  
        {  
            return 1;  
        }  
        else if( (month == 5 && day >= 21) || (month == 6 && day <= 20) )  
        {  
            return 2;  
        }  
        else if( (month == 6 && day >= 21) || (month == 7 && day <= 22) )  
        {  
            return 3;  
        }  
        else if( (month == 7 && day >= 23) || (month == 8 && day <= 22) )  
        {  
            return 4;  
        }  
        else if( (month == 8 && day >= 23) || (month == 9 && day <= 22) )  
        {  
            return 5;  
        }  
        else if( (month == 9 && day >= 23) || (month == 10 && day <= 22) )  
        {  
            return 6;  
        }  
        else if( (month == 10 && day >= 23) || (month == 11 && day <= 21) )  
        {  
            return 7;  
        }  
        else if( (month == 11 && day >= 22) || (month == 12 && day <= 21) )  
        {  
            return 8;  
        } 
    }
        else  
        {  
            printf("Invalid input entered\n"); 
        }
        return 100;

}