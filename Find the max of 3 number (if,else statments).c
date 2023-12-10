void main()
{
    int a,b,c;
    printf("Enter 3 Number:");
    scanf("%d  %d  %d",&a,&b,&c);
     if(a>b && a>c)
     {
         printf("%d is Greater:",a);
     }
     else if(b>a && b>c)
     {
         printf("%d is greater:",b);
     }
     else
     {
         printf("%d is Greater",c);
     }
     getch();
}
