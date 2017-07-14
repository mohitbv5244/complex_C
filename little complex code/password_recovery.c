#include <stdio.h>

int main()
{
    int n, num;
    printf("enter the choice\n");
    printf("1 for entering the password\n");
    printf("2 for rewriting the password\n");
    printf("3 for checking the questions\n");
    printf("enter the password\n");
    scanf("%d", &n);
    printf("you entered: %d\n", n);
    printf("enter the choice\n");
    scanf("%d", &num);
    int pass = 1234;
    
    switch(num){
        case 1:
        printf("you entered 1\n");
        if(n == pass)
    {
        printf("password is correct");
    }
    else
    {
        printf("password is wrong\n");
    }
        break;
        case 2:printf("you entered 2");
        printf("you want to change the password\n");
        printf("answer the question\n");
       
      
        printf("enter the date of birth in this order dd/mm/yyyy\n");
        int dob;
        scanf("%d", &dob);
        printf("you entered \n");
      
        printf("date of birth: %d\n", dob);
        if(dob == 1091989)
        {
            printf("enter the new password\n");
            scanf("%d", &pass);
            printf("the new password entered is %d\n", pass);
        }
        else
        {
            printf("wrong information\n");
        }
        break;
        case 3:printf("you entered 3\n");
        printf("to know your password, please answer the question\n");
        int db;
        printf("enter the number(favourite)\n");
        scanf("%d", &db);
        printf("you entered: %d\n", db);
        if(db == 45)
        {
            printf("right answer\n");
            printf("the password is %d", pass);
        }
        else
        {
            printf("wrong answer\n");
        }
        break;
        default:
        printf("wrong choice\n");
    }

    return 0;
}

