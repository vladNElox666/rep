#include <stdio.h>
#include <locale.h>
#include "fish.h"

int main() {
    setlocale(LC_ALL, "Russian");
    fish snappy = {"��������", "�������", 69, 4, {{"����", 0.09},
    {"�������� � �������", 7.5}}};
    label(snappy);
    return 0;
}