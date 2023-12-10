void main()
{
    int ch,a,b,c;
    printf("1. For Addition\n");
    printf("2. For Subtraction\n");
    printf("3. For Multiplication\n");
    printf("4. For Division\n");
    printf("5. For Exit\n");

    while(1)
    {
        printf("\n\nEnter Your Choise:-");
        scanf("%d",&ch);

        switch(ch)
        {

           case 1:
           {
               printf("Enter 2 Numbers:");
               scanf("%d %d",&a,&b);
               c=a+b;
               printf("Addition Is %d",c);
               break;
           }

            case 2:
           {
               printf("Enter 2 Numbers:");
               scanf("%d %d",&a,&b);
               c=a-b;
               printf("Subtraction Is %d",c);
               break;
           }

            case 3:
           {
               printf("Enter 2 Numbers:");
               scanf("%d %d",&a,&b);
               c=a*b;
               printf("Multiplicaion Is %d",c);
               break;
           }

            case 4:
           {
               printf("Enter 2 Numbers:");
               scanf("%d %d",&a,&b);
               c=a/b;
               printf("Division Is %d",c);
               break;
           }


            case 5:
                {
                    exit(0);
                }
            default:
                {
                    printf("---WRONG INPUT---");
                }
        }
    }

    getch();
}
