void main()
{
    char j;

    printf("hello\n\n");
    printf("%c",j);

    char a[10]="mahesh";
    char b[20]="mahesh";
    int k;
    k=strcmp(a,b);
    if(k==0)
    {
        printf("Both the String Are same\n");
    }
    else
    {
        printf("Both the string are diffrent\n");
    }

    strcpy(b,a);
    printf("Afetr Coping %s\n",b);

    strrev(a);
    printf("Afetr revrse: %s\n",a);


    k=strlen(a);
    printf("length of A is %d\n",k);

    getch();

}
