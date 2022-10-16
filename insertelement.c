#include<stdio.h>

int main()
{
    int a[50],pos,num,i,size;
    printf("Enter The Size of Array\n");
    scanf("%d",&size);
    printf("Enter The Elements of Array\n");
    if (size>50)
    {
        printf("OVERFLOW !!");
    }
    else{
    
    for ( i = 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }
    }
    printf("Enter The Number To Insert\n ");
    scanf("%d",&num);
    printf("Enter The Position\n");
    scanf("%d",&pos);
    for ( i = size ; i >= pos - 1 ; i--)
    {
      a[i+1] = a[i];
    } 
    
      a[pos - 1] = num;
      size ++;
    if(pos<=0 || pos>size+1)
    {
        printf("INVALID POSITION \n");
    }
    else{
        printf("Array : ");
    for ( i = 0 ; i < size ; i++)
    {
        printf("%d",a[i]);
    }
    }
    
    
    return 0;
    
    


}