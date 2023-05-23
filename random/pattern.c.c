#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)
    {
        //S
        for (int col = 1; col <= 5; col++)
        {
            if (row == 1 || row == 3 || row == 5 || (col == 1 && row <= 3) || (col == 5 && row >= 3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //a
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||col==1||col==5){
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //h
        for (int col = 1; col <= 5; col++)
        {
            if (col==1||col==5||row==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //e
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||row==5||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 5; col++)
        {
            if (col==1||row==1||row==3||row==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //N
        for (int col = 1; col <= 5; col++)
        {
            if (col==1||col==5||row==col)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    printf("\n\n");
    
    ////New line
    //2
    
    for(int row=1;row<=5;row++)
    {
        //n
         for(int col=1;col<=5;col++)
        {
            if(row==col||col==1||col==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //0 letter
         for (int col = 1; col <= 5; col++)
        {
            if ((col==1&&row>1&&row<5)||(row==1&&col>1&&col<5)||(row==5&&col>1&&col<5)||(col==5&&row>1&&row<5)){
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        for(int col=1;col<=5;col++)
        {
            if(row==1||col==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        for(int col=1;col<=5;col++)
        {
            if(row==1 ||row==5|| col==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        for(int col=1;col<=5;col++)
        {
            if(row==1||col==1||(col==5&&row<=3)||row==3||(row==col&&row>=3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
    // New Line 3
    printf("\n\n");
    for (int row = 1; row <= 5; row++)
    {
        //p
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||col==1||(col==5&&row<=3)||row==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //0
        for (int col = 1; col <= 5; col++)
        {
            if ((col==1&&row>1&&row<5)||(row==1&&col>1&&col<5)||(row==5&&col>1&&col<5)||(col==5&&row>1&&row<5)){
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //l
        for (int col = 1; col <= 5; col++)
        {
            if (col==1||row==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //a
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||col==1||col==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //k
        for (int col = 1; col <= 5; col++)
        {
            if (col==1|| col==2||(row==col&row>=3)||(row<=3&&col==5-row+1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //E
         for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||row==5||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    printf("\n\n");
    // new line 4
    for(int row=1;row<=5;row++)
    {
        //d
         for(int col=1;col<=5;col++)
        {
            if(col==1||(row==1&&col<5)||(row==5&&col<5)||(col==5&&row>1&&row<5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 2; space++)
        {
            printf(" ");
        }
        //h letter
         for (int col = 1; col <= 5; col++)
        {
            if (col==1||col==5||row==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //o
        for (int col = 1; col <= 5; col++)
        {
            if ((col==1&&row>1&&row<5)||(row==1&&col>1&&col<5)||(row==5&&col>1&&col<5)||(col==5&&row>1&&row<5)){
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //r
       for(int col=1;col<=5;col++)
        {
            if(row==1||col==1||(col==5&&row<=3)||row==3||(row==col&&row>=3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //e
       for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||row==5||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 7; space++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        //e
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 5; col++)
        {
            if (row==1||row==3||row==5||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        //L
        for (int col = 1; col <= 5; col++)
        {
            if (row==5||col==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int space = 1; space <= 3; space++)
        {
            printf(" ");
        }
        
        
        printf("\n");
    }
    

    return 0;
}