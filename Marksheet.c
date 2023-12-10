                         //STUDENT MARKSHEET

void main()
{
    int Sub1,Sub2,Sub3,Sub4,Sub5,Obtained,Percentage;

    printf("Enter Your Marks In Subject 1:-\n");
    scanf("%d",&Sub1);

    printf("Enter Your Marks In Subject 2:-\n");
    scanf("%d",&Sub2);

    printf("Enter Your Marks In Subject 3:-\n");
    scanf("%d",&Sub3);

    printf("Enter Your Marks In Subject 4:-\n");
    scanf("%d",&Sub4);

    printf("Enter Your Marks In Subject 5:-\n");
    scanf("%d",&Sub5);

    printf("---------------MARKSHEET--------------\n");


    Obtained = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;
    Percentage = Obtained * 100 / 500;

    printf("Your Obtained Marks Is:-%d\n",Obtained);
    printf("Your Percentage Is :-%d\n",Percentage);

    if(Percentage>=90)
    {
        printf("Grade A+\n");
    }

    else if(Percentage>=80)
    {
        printf("Grade A\n");
    }

    else if(Percentage>=70)
    {
        printf("Grade B+\n");
    }

    else if(Percentage>=60)
    {
        printf("Grade B\n");
    }

    else if(Percentage>=50)
    {
        printf("Grade C+\n");
    }

    else if(Percentage>=35)
    {
        printf("Grade C\n");
    }

    else
    {
        printf("Fail");
    }

     if(Sub1<28)
     {
         printf("You Have Con(*) in Sub1\n");
     }

     if(Sub2<28)
     {
         printf("You Have Con(*) in Sub2\n");
     }

     if(Sub3<28)
     {
         printf("You Have Con(*) in Sub3\n");
     }

    if(Sub4<28)
     {
         printf("You Have Con(*) in Sub4\n");
     }

     if(Sub5<28)
     {
         printf("You Have Con(*) in Sub5\n");
     }

    getch();
    }
