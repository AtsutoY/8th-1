int str_copy(char *dst, char *src)
{
    while (1)
    {
        *dst = *src;      // �R�s�[
        if (*dst == '\0') // �^�[�~�l�[�^�ɂȂ����炱�̊֐����I������
        {
            return 0;
        }
        dst++;            // ���̗v�f��
        src++;            // ���̗v�f��
    }
}