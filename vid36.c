#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_letter;
    char name[100];
} uttu, puttu;
void print()
{
    printf("%s", uttu.name);
}
int main()
{
    uttu.id = 77;
    puttu.id = 88;
    uttu.marks = 6;
    puttu.marks = 10;
    uttu.fav_letter = 'y';
    puttu.fav_letter = 't';
    strcpy(uttu.name, "Utkarsha");
    printf("uttu's id is %d and puttu's id is %d\n", uttu.id, puttu.id);
    printf("uttu got %d marks and puttu got %d marks\n", uttu.marks, puttu.marks);
    printf("uttu's fav letter is %c and puttu's fav letter is %c\n", uttu.fav_letter, puttu.fav_letter);
    printf("uttu's name is %s ,puttu is her nickname\n", uttu.name);
    print(); // global variable
    return 0;
}