void main()
{
    int i,s=0,q,r;
    int marks[5];
    printf("Enter the marks of 5 subject :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
      printf("Total marks is:- ");
    for(i=0;i<5;i++)
    {
        s=s+marks[i];
    }
    printf("%d",s);
    getch();
}
