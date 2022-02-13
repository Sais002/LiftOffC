
#include<stdio.h>
int main()
{char name [20];

printf("Saisatyam Shasany");
gets(name);

char branch [20];
printf("Electrical Engineering\n");
gets(branch);

char hobbies[20];
printf("Reading Novels\n");
gets(hobbies);

int num;
printf("002\n");
scanf("%s,&num");

printf("Saisatyam Shasany: s",name);
puts(name);
printf("Electrical Engineering: s",branch);
puts(branch);
printf("Reading Novels: s",hobbies);
puts(hobbies);
printf("002.:%d\n s",num);

return 0;
}