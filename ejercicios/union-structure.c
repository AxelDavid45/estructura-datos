 #include <stdio.h>
 #include <conio.h>
 
 // the new structure 
 union join {
 	char a;
 	int b;
 };
 
 // Create the structure
 typedef union join Union;
 
 int main() {
 	Union A;
 	
 	A.b = 4168;
 	printf("%c\n", A.a);
// 	A.a = 'C';
// 	printf("%d\n", A.b);
 	
 	return 0;
 }
