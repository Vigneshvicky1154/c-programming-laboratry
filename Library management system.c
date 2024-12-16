#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() 
{
    struct Book books[3];
    int max = 0, min = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf(" %s", books[i].title);
        scanf(" %s", books[i].author);
        scanf("%f", &books[i].price);

        if (books[i].price > books[max].price) max = i;
        if (books[i].price < books[min].price) min = i;
    }
    for(int i=0;i<3;i++)
    {
      printf("\nInput details of Book-%d:\n",i+1);
      printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", books[i].title, books[i].author, books[i].price);

    }

    printf("\nMost Expensive Book:\n");
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", books[max].title, books[max].author, books[max].price);

    printf("\nLowest Priced Book:\n");
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", books[min].title, books[min].author, books[min].price);

    return 0;
}
