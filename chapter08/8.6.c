#include <stdio.h>

int main(void)
{
    int a[10];
    int *a1, *a2, *a3;
    a1 = a;         // �z��a�̐擪�A�h���X�A&a[0]�Ɠ���
    a2 = &a[5];     // a[5]�̐擪�A�h���X
    a3 = a1 + 7;    // �z��a�̐擪�A�h���X��7��������

    printf("a2-a1=%d\n", a2 - a1);
    printf("a3-a1=%d\n", a3 - a1);
    printf("a3-a2=%d\n", a3 - a2);

    return 0;
}