// 예제 2-1
//
//#include <stdio.h>  // 헤더 파일 stdio.h 호출
//void main() {       // 반환값이 없는(void) 메인 함수 선언
//	printf("char 자료형 크기 : %d byte\n", sizeof(char)); // sizeof() : 입력값에 대한 자료형의 크기를 byte 단위로 반환하는 함수
//												          // printf 함수를 통해 char의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														  // char : 'character'의 약자, 부호가 있는 8비트(1바이트) 정수형 처리 변수이며 -128~127의 정수 혹은 문자를 나타내는 자료형
//	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));	// printf 함수를 통해 signed char의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																		// signed char : 부호가 있는 char와 동일한 형태, 8비트(1바이트) 처리 변수이며 -128~127의 정수 혹은 문자를 나타내는 자료형
//	printf("unsigned char 자료형 크기 : %d byte\n", sizeof(unsigned char)); // printf 함수를 통해 unsigned char의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																		    // unsigned char : 부호가 없는 char의 형태, 8비트(1바이트) 정수형 처리 변수이며 0~255의 정수를 나타내는 자료형
//	printf("short 자료형 크기 : %d byte\n", sizeof(short)); // printf 함수를 통해 short의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														    // short : 부호가 있는 2바이트 정수형 처리 변수이며, -32768~32767의 정수를 나타내는 자료형
//	printf("short int 자료형 크기 : %d byte\n", sizeof(short int)); // printf 함수를 통해 short int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																    // short int : short와 동일한 부호가 있는 2바이트 정수형 처리 변수이며, -32768~32767의 정수를 나타내는 자료형
//	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short)); // printf 함수를 통해 signed short의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																          // signed short : short와 동일한 부호가 있는 2바이트 정수형 처리 변수이며, -32768~32767의 정수를 나타내는 자료형
//	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int)); // printf 함수를 통해 signed short int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																                  // signed short int : short와 동일한 부호가 있는 2바이트 정수형 처리 변수이며, -32768~32767의 정수를 나타내는 자료형
//	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short)); // printf 함수를 통해 unsigned short의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																              // unsigned short : 부호가 없는 2바이트 정수형 처리 변수이며, 0~65535의 정수를 나타내는 자료형
//	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int)); // printf 함수를 통해 unsigned short의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																                      // unsigned short int : 부호가 없는 2바이트 정수형 처리 변수이며, 0~65535의 정수를 나타내는 자료형
//	printf("int 자료형 크기 : %d byte\n", sizeof(int)); // printf 함수를 통해 int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//													    // int : 'integer'의 약자, 부호가 있는 정수형 처리 변수이며,8비트 CPU에선 16비트(2바이트 정수형)으로 -32768~32767의 정수를 나타내는 자료형
//																													32비트 CPU에선 32비트(4바이트 정수형)으로 –2147483648~2147483647의 정수를 나타내는 자료형
//	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int)); // printf 함수를 통해 signed int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	  // signed int : 부호가 있는 정수형 처리 변수이며,8비트 CPU에선 16비트(2바이트 정수형)으로 -32768~32767의 정수를 나타내는 자료형
//																												      32비트 CPU에선 32비트(4바이트 정수형)으로 –2147483648~2147483647의 정수를 나타내는 자료형
//	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned)); // printf 함수를 통해 unsigned의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																  // unsigned : 부호가 없는 정수형 처리 변수이며,8비트 CPU에선 16비트(2바이트 정수형)으로 0~65535의 정수를 나타내는 자료형
//																												32비트 CPU에선 32비트(4바이트 정수형)으로 0~4294967295의 정수를 나타내는 자료형
//	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int)); // printf 함수를 통해 unsigned int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																		  // unsigned int : 부호가 없는 정수형 처리 변수이며,8비트 CPU에선 16비트(2바이트 정수형)으로 0~65535의 정수를 나타내는 자료형
//																										     	          	32비트 CPU에선 32비트(4바이트 정수형)으로 0~4294967295의 정수를 나타내는 자료형
//	printf("long 자료형 크기 : %d byte\n", sizeof(long)); // printf 함수를 통해 long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														  // long : 부호가 있는 정수형 처리 변수이며,4바이트 정수형으로 –2147483648~2147483647의 정수를 나타내는 자료형
//	printf("long int 자료형 크기 : %d byte\n", sizeof(long int)); // printf 함수를 통해 long int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														          // long int : 부호가 있는 정수형 처리 변수이며,4바이트 정수형으로 –2147483648~2147483647의 정수를 나타내는 자료형
//  printf("signed long 자료형 크기 : %d byte\n", sizeof(unsigned long)); // printf 함수를 통해 signed long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																		  // signed long : 부호가 있는 정수형 처리 변수이며,4바이트 정수형으로 –2147483648~2147483647의 정수를 나타내는 자료형
//	printf("signed long int 자료형 크기 : %d byte\n", sizeof(unsigned long int)); // printf 함수를 통해 signed long int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																         		  // signed long int : 부호가 있는 정수형 처리 변수이며,4바이트 정수형으로 –2147483648~2147483647의 정수를 나타내는 자료형
//	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long)); // printf 함수를 통해 unsigned long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																         	// unsigned long : 부호가 없는 정수형 처리 변수이며,4바이트 정수형으로 0~4294967295의 정수를 나타내는 자료형
//	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int)); // printf 함수를 통해 unsigned long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	            	// unsigned long int: 부호가 없는 정수형 처리 변수이며,4바이트 정수형으로 0~4294967295의 정수를 나타내는 자료형
//	printf("long long 자료형 크기 : %d byte\n", sizeof(long long)); // printf 함수를 통해 long long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	// long long : 부호가 있는 정수형 처리 변수이며,8바이트 정수형으로 –9223372036854775808~9223372036854775807의 정수를 나타내는 자료형
//	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int)); // printf 함수를 통해 long long int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	        // long long int : 부호가 있는 정수형 처리 변수이며,8바이트 정수형으로 –9223372036854775808~9223372036854775807의 정수를 나타내는 자료형
//	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long)); // printf 함수를 통해 signed long long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	              // signed long long : 부호가 있는 정수형 처리 변수이며,8바이트 정수형으로 –9223372036854775808~9223372036854775807의 정수를 나타내는 자료형
//	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int)); // printf 함수를 통해 signed long long int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	                      // signed long long int : 부호가 있는 정수형 처리 변수이며,8바이트 정수형으로 –9223372036854775808~9223372036854775807의 정수를 나타내는 자료형
//	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long)); // printf 함수를 통해 unsigned long long의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	                  // unsigned long long : 부호가 없는 정수형 처리 변수이며,8바이트 정수형으로 0~18446744073709551615의 정수를 나타내는 자료형
//	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int)); // printf 함수를 통해 unsigned long long int의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																	                          // unsigned long long int : 부호가 없는 정수형 처리 변수이며,8바이트 정수형으로 0~18446744073709551615의 정수를 나타내는 자료형
//	printf("float 자료형 크기 : %d byte\n", sizeof(float));	// printf 함수를 통해 float의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														    // float : 4바이트 실수형 변수이며 3.4*10^(-38)~3.4*10^38 범위 내의 실수를 나타내는 자료형 
//	printf("double 자료형 크기 : %d byte\n", sizeof(double)); // printf 함수를 통해 double의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//														      // double : 8바이트 실수형 변수이며 1.7*10^(-308)~1.7*10^308 범위 내의 실수를 나타내는 자료형 
//	printf("long double 자료형 크기 : %d byte\n", sizeof(long double)); // printf 함수를 통해 long double의 자료형 크기를 byte 단위로 환산하여 텍스트 'byte'와 함께 출력 후 줄 바꿈 
//																        // long double : 8바이트 실수형 변수이며 1.7*10^(-308)~1.7*10^308 범위 내의 실수를 나타내는 자료형 
//}