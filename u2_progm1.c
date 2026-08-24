 #include<stdio.h>
 #define MAX 3

  int stack[MAX],top=-1;
  void push();
  void pop();
  void peek();
  void update();
  void display();

  void main()
{

       int op;
       do
       {
           printf("\n 1. push");
           printf("\n 2. pop");
           printf("\n 3. peek");
           printf("\n 4. update");
           printf("\n 5. display");
           printf("\n 6. exit");


           printf("\n enter value :");
           scanf("%d ",&op);

           switch(op)
            {
          case 1:
            push();
            break;
          case 2:
            pop();
            break;
          case 3:
            peek();
            break;
          case 4:
            update();
            break;
          case 5:
            display();
            break;

            }
       }

        while(op!=6);
}

   void push()
   {
     int value;
     printf("\n enter value to be added : ");
     scanf("%d",&value);

     if(top==MAX-1)
     {
         printf("\n stack overflow...");

     }
     else
     {
        top++;
        stack[top]=value;
     }
 }
 void pop()
 {
    int val;
    if(top==-1)
    {
        printf("\n stack is underflow..");
    }
    else
    {
        val=stack[top];
        top--;
        printf("\n value deleted is : %d", val);
    }
}
    void peek()
{
    int val;
    if(top==-1)
    {
        printf("\n stack is empty..");
    }
    else
    {
     printf("\n top element is : %d",stack[top]);
    }
}
    void update()
{
    int i,x;

    printf("\n enter index : ");
    scanf("%d",&x);

    if(top-i+1<=-1)
    {
        printf("\n invalid index..");
    }
    else
    {
       stack[top-i+1]=x;
    }
}
   void display()
   {
       int i;
       if(top==-1)
       {
           printf("\n stack is empty..");
       }
       else
       {
           for(i=top;i>=0;i--)
           {
               printf("\n %d", stack[i]);
           }
       }
   }





