/*
LED Chaser program
 Connect LEDs to PORT 2 (use 1k resistors )
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
	 P2=0x80;
		while(P2){
		  delay(100);
			P2=P2>>1;
		}
	}
}