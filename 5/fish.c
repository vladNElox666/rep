#include <stdio.h>
#include "fish.h"

void catalog(fish f) {
    printf("%s - ��� %s � %d ������. ��� %d ����\n",
    f.name, f.species, f.teeth, f.age);
}

void label(fish a) {
    printf("������: %s\n������������: %s\n%d ����, %d �����\n", 
    a.name, a.species, a.age, a.teeth);
    printf("������ %2.2f �� %s � ��������� %s �� ���������� %2.2f �����\n",
    a.care.food.weight, a.care.food.ingredients,
    a.care.exercise.description, a.care.exercise.duration);
}