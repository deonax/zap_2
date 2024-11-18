#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int is_white(const char c) {
	if (c == ' ' || c == '\t' || c == '\n') {
		return 1;
	}
	return 0;
}

void change_whites(char string[]) {
	for (int i = 0; i<strlen(string); i++) {
		if (string[i] == ' ' || string[i] == '\n') {
			string[i] = '.';
		}
	}
}

int guess_eval(const int guess, const int my_number) {
	if (guess == my_number) {
        return 1;
	}
	if (guess > my_number) {
	    return 0;
	}
	if (guess < my_number) {
        return 2;
	}
}

int leap_year(const int year){
    if (year < 1 || year > 4443){
        return -1;
    }
    if (year % 400 == 0){
        return 1;
    }
    if (year % 100 == 0){
        return 0;
    }
    if (year % 4 == 0){
        return 1;
    }
    else {
        return 0;
    }
}

int count_positives(const int size, int array[]){
    int counter = 0;
    if (array==NULL){
        return -1;
    }
    for (int i = 0; i<size; i++){
        if (array[i]>0){
            counter++;
        }
    }
    return counter;
}

int count_whites(const char string[]){
    int counter = 0;
    for (int i=0; i<strlen(string); i++){
        counter += is_white(string[i]);
    }
    return counter;
}

int direction_correction(const int degree){
    if (degree < 0 || degree % 90 != 0) {
        return -1;
    }
    return degree % 360;
}

int all_positives(const int size, const int array[]){
    for (int i=0; i<size; i++){
        if (array[i]<1){
            return 0;
        }
    }
    return 1;
}

int last_positive(const int size, const int array[]){
    int buf = -1;
    for(int i=0;i<size;i++){
        if(array[i]>0){
            buf = array[i];
        }
    }
    return buf;
}

int binary_num(const int num){
    if (num == 0 || num == 1){
        return 1;
    }
    else if(num<-1000||num>1000){
        return -1;
    }
    return 0;
}

void swap_sign(const int size, int array[]){
    for (int i=0;i<size;i++){
        array[i]=array[i]*-1;
    }
}

int div_by_3(const int num){
    if(num%3==0){
        return 1;
    }
    return 0;
}

int same_case(const char a, const char b){
    if (isalpha(a)==0||isalpha(b)==0)
    {
        return -1;
    }
    
    if(isupper(a)==isupper(b)){
        return 1;
    }
    return 0;
}

int find_first_A(const char string[]){
    for (int i = 0;strlen(string)>i;i++){
        if(string[i]=='A'||string[i]=='a'){
            return i;
        }
    }
    return -1;
}

void string_to_upper(char string[]){
    for(int i=0;i<strlen(string);i++){
        string[i]=toupper(string[i]);
    }
}

int main()
{
    
}
