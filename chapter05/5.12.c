#include <stdio.h>

int main(void)
{
    int a, b, c;
    double t;
    double ex4(int, int, double, int); // �֐�ex4�̃v���g�^�C�v�錾

    ex4(a, b, t, c);
    ex4(1, 2, 3.0, 4);
    ex4(a, b, 5, c);                   // ��������5�ɒ���

    return 0;
}

double ex4(int a, int b, double t, int c)
{
    return a + b + t + c;
}
