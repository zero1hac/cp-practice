#include <cstdio>
#include <cstring>
#include<iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct stack
{
    int top;
    unsigned capacity;
    int* arr;
};
stack* createStack( unsigned capacity )
{
    stack* stac = (stack*) malloc(sizeof(stack));
 
    if (!stac) 
        return NULL;
 
    stac->top = -1;
    stac->capacity = capacity;
 
    stac->arr = (int*) malloc(stac->capacity * sizeof(int));
 
    if (!stac->arr)
        return NULL;
    return stac;
}
int isEmpty(stack* stac)
{
    return stac->top == -1 ;
}
char peek(stack* stac)
{
    return stac->arr[stac->top];
}
char pop(stack* stac)
{
    if (!isEmpty(stac))
        return stac->arr[stac->top--] ;
    return '$';
}
void push(stack* stac, char op)
{
    stac->arr[++stac->top] = op;
}
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}
int infixToPostfix(char* exp)
{
    int i, k;
    stack* stac = createStack(strlen(exp));
    if(!stac) 
        return -1 ;
 
    for (i = 0, k = -1; exp[i]; ++i)
    {
        if (isOperand(exp[i]))
            exp[++k] = exp[i];
        else if (exp[i] == '(')
            push(stac, exp[i]);
        else if (exp[i] == ')')
        {
            while (!isEmpty(stac) && peek(stac) != '(')
                exp[++k] = pop(stac);
            if (!isEmpty(stac) && peek(stac) != '(')
                return -1;                
            else
                pop(stac);
        }
        else 
        {
            while (!isEmpty(stac) && Prec(exp[i]) <= Prec(peek(stac)))
                exp[++k] = pop(stac);
            push(stac, exp[i]);
        }
 
    }
    while (!isEmpty(stac))
        exp[++k] = pop(stac );
 
    exp[++k] = '\0';
    printf( "%s\n", exp );
}
int main()
{
    char expre[401];
    int Test_case;
    cin>>Test_case;
    while(Test_case--){
		std::cin>>expre;
    infixToPostfix(expre);}
    return 0;
}
