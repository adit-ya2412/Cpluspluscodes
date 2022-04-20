#include<iostream>
#include<stdio.h>
#include<string>
void printReverse(const char *str) {
  if (!*str)
    return;
  printReverse(str + 1);
  putchar(*str);
}
int main(){
	char ch="aditya";
	printReverse(ch);
}
