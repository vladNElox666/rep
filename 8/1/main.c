#include <stdio.h>
#include <locale.h>
#include <encrypt.h>
#include <checksum.h>

int main(){
    setlocale(LC_ALL, "Russian");
    char s[] = "����� ���� � �������";
    encrypt(s);
    printf("����������� � '%s'\n", s);
    printf("����������� �����: %d\n", checksum(s));
    encrypt(s);
    printf("������������ � '%s'\n", s);
    printf("����������� �����: %d\n", checksum(s));
    return 0;
}
