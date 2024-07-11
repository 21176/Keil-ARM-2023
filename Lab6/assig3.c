#include <LPC21xx.H>
void delay(){
	int count;
	for(count=0;count<=50000;count++);
}


int main(){
	IODIR0 |= 0xFF << 16;	//switch 1
	IODIR1 |= 0 << 28;	//switch 2
	IODIR1 |= 1 << 29;	//output for the pin

	while(1){
		int i;
		if(IOPIN1 & (1 << 28)){
			for(i=0;i<8;i+=2){
				IOSET0 |= (1 << (16 + i));
				delay();
				IOCLR0 |= (1 << (16 + i));
				delay();
			}
		}
		else if(IOPIN1 & (1 << 29)){
			for(i=1;i<8;i+=2){
				IOSET0 |= (1 << (16 + i));
				delay();
				IOCLR0 |= (1 << (16 + i));
				delay();
			}
		}
	}
	return 0;
}