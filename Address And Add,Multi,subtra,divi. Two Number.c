void main()
{
    int a,b,c;
    //Address
    printf("%d %d %d\n",&a,&b,&c);

    //Addtion
    printf("Enter 2 Numbers:-");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Addtion Is %d\n\n",c);

    //Multiplication
    printf("Enter 2 Number:-");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("Multiplication Is %d\n\n",c);

    //Subtraction
    printf("Enter 2 Number:-");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("Subtraction Is %d\n\n",c);

    //Division
    printf("Enter 2 Number:-");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("Division Is %d",c);

    getch();
}
