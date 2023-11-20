#include <stdio.h>

typedef struct complex
{
    float r;
    float c;
} Complex;

void complex_sum(Complex n1, Complex n2)
{
    float s_r = n1.r + n2.r;
    float s_c = n1.c + n2.c;

    printf("---------- Result of Sum ---------- \n");
    printf("(Real) %f \n", s_r);
    printf("(Complex) %f \n", s_c);
};

void complex_multiple(Complex n1, Complex n2)
{
    float m_r = (n1.r * n2.r) - (n1.c * n2.c);
    float m_c = (n1.c * n2.r) + (n1.r * n2.c);

    printf("---------- Result of Multiple ---------- \n");
    printf("(Real) %f \n", m_r);
    printf("(Complex) %f \n", m_c);
};

void show_info(Complex n1, Complex n2)
{
    printf("(Output) 1st Complex Number \n");
    printf("Real : %f \n", n1.r);
    printf("Complex : %f \n", n1.c);

    printf("(Output) 2nd Complex Number \n");
    printf("Real : %f \n", n2.r);
    printf("Complex : %f \n", n2.c);
};

int main(void)
{
    Complex n1;
    Complex n2;

    printf("(Input) 1st Complex Number \n");
    printf("Real : ");
    scanf("%f", &n1.r);
    printf("Complex : ");
    scanf("%f", &n1.c);

    printf("(Input) 2nd Complex Number \n");
    printf("Real : ");
    scanf("%f", &n2.r);
    printf("Complex : ");
    scanf("%f", &n2.c);

    show_info(n1, n2);

    complex_sum(n1, n2);
    complex_multiple(n1, n2);

    return 0;
}