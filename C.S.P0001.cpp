#include<conio.h>
#include<stdio.h>
#include<string.h>


// Reverse String input
void reversedString (char str[]) {
	for(int i=strlen(str); i>=0; i--)
    { 
		if(str[i]==' ') {
        	str[i]='\0';
        	printf("%s ", &str[i]+1);
		}
    } 
}
int main()
{
	char k;
    char str[100];
    
	do{
        printf("nhap chuoi: ");
        gets(str);
        printf("Chuoi ban dau la:%s \n",str);
        
        printf("Chuoi sau khi doi nguoc la:");
        reversedString(str);
		printf("%s\n",str);
        printf("Press enter to continue \n");
        k=getch();
	}while ( k != 27);
	printf("Good Bye!");//output
}
