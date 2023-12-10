void main()
{
    int i;
    int marks[5];
    printf("Enter the marks of 5 subject :-");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
      printf("entered marks is:- ");
    for(i=0;i<5;i++)
    {
        printf("%d ",marks[i]);
    }
    getch();
}
