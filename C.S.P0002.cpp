#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


//create array contain word
char *single_digits[] = { "zero", "one", "two",  
                               "three", "four","five",  
                               "six", "seven", "eight", "nine"}; 
    
char *two_digits[] = {"ten", "eleven", "twelve",  
                               "thirteen", "fourteen", 
                               "fifteen", "sixteen",  
                               "seventeen", "eighteen", "nineteen"}; 
                               
char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty", 
                            "sixty", "seventy", "eighty", "ninety"}; 
    
// Print word of number less 10
void singleDigit(int number) {
	printf("%s",single_digits[number]);
}

// Print word of number greater than 10 and less 20
void twoDigitless20(int number) {
	printf("%s",two_digits[number%10]);
}

// Print word of number >=20 and <=100
void twoDigitthan20(int number) {
	printf("%s",tens_multiple[number/10]);
		if(number%10!=0) {
			printf(" %s",single_digits[number%10]);	
		}
}

// Print word of number >=100 and <=999
void threeDigit(int number) {
	printf("%s",single_digits[number/100]);
		if((number/100)!=1) {
			printf(" hundreds");
		}
		else {
			printf(" hundred");
		}
		if((number%100)<20) {
			printf(" %s",two_digits[((number%10)%10)]);
		}
		printf(" %s",tens_multiple[(number/10)%10]);
		if((number%10)!=0) {
			printf(" %s",single_digits[number%10]);	
		}
}


// Print word of number >=1000 and <=9999
void fourDigit(int number) {
	printf("%s",single_digits[number/1000]);
		if((number/1000)!=1) {
			printf(" thousands ");
		}
		else {
			printf(" thousand ");
		}
		threeDigit(number%1000);
}

// main
int main() {
	
	char s[50],key;
	do {
		printf("\nNhap:");
		gets(s);
		int number = atoi(s);
		if(number>0 and number <10) {
			singleDigit(number);
		}
		else if(number<20) {
			twoDigitless20(number);
		}
		else if(number<100) {
			twoDigitthan20(number);
		}
		else if(number<1000){
			threeDigit(number);
		}
		else if(number<9999) {
			fourDigit(number);
		}
		key=getch();
		
	}while(key!=27);
	

}
