/*
Blinking LED program 

Connect LED's to PORT 2
*/
#include <reg51.h>

void delay(int d){
int i,j;
	for(i=0;i<d;i++){
	for(j=0;j<256;j++);
	}
}

int main(){
P2=0x00;
	while(1){
	 P2=0xFF;
	 delay(1000);
	 P2=0x00;
   delay(1000);		
	}
}
