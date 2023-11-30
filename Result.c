void main()
{
    int Java,Software,ComputerNetwork,Microprocessor,VBNET,Obtained,Percentage;
    printf("Enter your Marks !!\n");
    scanf("%d",&Java);
    printf("Enter your Marks !!\n");
    scanf("%d",&Software);
    printf("Enter your Marks !!\n");
    scanf("%d",&ComputerNetwork);
    printf("Enter your Marks !!\n");
    scanf("%d",&Microprocessor);
    printf("Enter your Marks !!\n");
    scanf("%d",&VBNET);

     printf("-------MARKSHEET-----------\n ");

    Obtained = Java + Software + ComputerNetwork + Microprocessor + VBNET;
    Percentage = Obtained * 100 / 500;
    printf("Your Obtained marks Are %d\n",Obtained);
    printf("Your Percenatage Is %d\n",Percentage);

    if(Percentage>=80)
    {
        printf("Grade:- A+\n");
    }
    else if(Percentage>=70)
    {
        printf("Grade:- A\n");
    }
    else if(Percentage>=50)
    {
        printf("Grade:- B+\n");
    }
    else if(Percentage>=35)
    {
        printf("Grade:- B\n");
    }
    else
    {
        printf("Grade:- Fail\n");
    }
    int con=0;

    if(Java<28)
    {
        printf("You Have CON * In Java/n");
        //con++;
    }
    if(Software<28)
    {
        printf("You Have CON * In Software/n");
        //con++;
    }
    if(ComputerNetwork<28)
    {
        printf("You Have CON * In Computer Network/n");
        //con++;
    }
    if(Microprocessor<28)
    {
        printf("You Have CON * In Microprocessor/n");
        //con++;
    }
    if(VBNET<28)
    {
        printf("You Have CON * In VBNET");
        //con++;
    }
    //printf("You Have %d CON *",con);


    getch();
}
