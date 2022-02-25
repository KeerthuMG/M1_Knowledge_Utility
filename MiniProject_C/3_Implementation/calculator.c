#include <stdio.h>

void addition ();
void subtraction ();
void multiplication ();
void division ();
void square ();
void cube();
void modulus ();
void factorial ();
void sel_func (int);

int main (void)
{
        int x;
    
        Input:
           printf("Input a number [ Addition(1), Subtraction(2), Multiplication(3), Division(4), Square(5), Cube(6), Modulus(7) Factorial(8)] : ");
           scanf("%d",&x);
         
           if (x > 8 |  x < 1)
           {
                  printf("Enter a valid input again\n");
                  goto Input;
           }
           sel_func (x);
    
           goto Input;
}

void sel_func (int x)
{
        void (*p)(void);
        switch (x){
        case 1:
                p = addition;
                break;
        case 2:
                p = subtraction;
                break;
        case 3:
                p = multiplication;
                break;
        case 4:
                p = division;
                break;
        case 5:
                p = square;
                break;
        case 6:
                p = cube;
                break;
        case 7: 
               p = modulus;
               break;
        case 8:
                p = factorial;
                break;        
        }
    
        p();
}

void addition ()
{
        int n1, n2;
        
        printf("Input two numbers : ");
        scanf("%d%d", &n1,&n2);
        printf("Result = %d\n", n1 + n2);
}

void subtraction ()
{
        int n1, n2;
        
        printf("Input two numbers : ");
        scanf("%d%d", &n1,&n2);
        printf("Result = %d\n" , n1 - n2);
}

void multiplication ()
{
        int n1, n2;
      
        printf("Input two numbers : ");
        scanf("%d%d", &n1,&n2);
        printf("Result = %d\n", n1 * n2);
}

void division ()
{
        int n1, n2;
        
        printf("Input two numbers : ");
        scanf("%d%d", &n1,&n2);
        printf("Result = %d\n", n1 / n2);
}

void square ()
{
        int base, i;
        int result = 1;
    
        printf("Input base number : ");
        scanf("%d",&base);
        
        result = base * base;
      
        printf("%d^%d = %d\n",
                    base,2,result);
}

void cube ()
{
        int base, i;
        int result = 1;
    
        printf("Input base number : ");
        scanf("%d",&base);
        
        result = base * base * base;
      
        printf("%d^%d = %d\n",
                    base,3,result);
}

void modulus()
{
    int n1, n2, d=0; 
    printf("\nEnter first number : "); 
    scanf("%d", &n1); 
    printf("Enter second number : "); 
    scanf("%d", &n2);
    d=n1%n2;
    printf("\nModulus of entered numbers = %d\n",d);
}

void factorial ()
{
        int n1, n2;
        int sum = 1;
    
        printf("Input a number : ");
        scanf("%d", &n2);
    
        for (n1 = 1; n1 <= n2; ++n1)
                    sum *= n1;
        
        printf("%d!=%d\n",n2,sum);
}