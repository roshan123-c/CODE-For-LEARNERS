int add(int *p,int *q,int *r)
{
    *r=(*p)+(*q);
}
void main()
{
    int x,y,z;
    printf("Enter 2 Number:");
    scanf("%d %d",&x,&y);
    add(&x,&y,&z);
    printf("Addition is %d",z);
    getch();
}
