//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include<stdio.h> 
int main()
{ FILE  *ptr;
   char name[30];
   int  age; 
   ptr=fopen("info.txt","w"); 
   if( ptr==NULL)
   {printf("Error could not create file ");
   }
   printf("Enter name");
   fgets( name,sizeof(name),stdin);
   printf("Enter age ");
   scanf("%d",&age );
    fprintf(ptr, " Name: %s Age: %d\n", name, age);
    fclose(ptr);
    printf("\nData has been successfully saved to info.txt\n");
    return 0;
}