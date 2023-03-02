#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union Book{
    char Name[20];
    char Author[20];
    int Publish_Year;
    int Page;
    int Is_Avalible;
};




    






int main() {
    printf("Welcome to Library\n");

    char Book_Indexes[20];
    union Book a;
    Book_Indexes[0] = 'a';
    
    strcpy(a.Name, "Test_Name");




    printf("Please search for the book you want\n" );
    int search;
    printf("For name search press 1 ");
    printf("\nFor Author search press 2 ");
    printf("\nFor Publish year search press 3 ");
    printf("\nFor page search search press 4 \n");
    
    scanf("%d", &search);

    switch (search){
        case 1:
            printf("%s\n" ,  a.Name);
            printf("it works");
            break;
        case 2:
            printf("it works");
            break;
        case 3:
            printf("it works");
            break;
        case 4:
            printf("it works");
            break;
        default:
            printf("Error");

    }
        

    //new branch
    return 0;
}