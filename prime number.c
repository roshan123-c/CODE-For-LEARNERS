void main()
{
    int x,i;
    printf("Enter a Number:");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("It is not prime number.");
            break;
        }
    }
    if(i==x)
    {
        printf("It is prime number.");
    }
    getch();
}
