 #include <stdio.h>

int main() {

char municipality[50];
char mayor[50];
int population;

printf("Municipal Financial Management System\n");

printf("Enter Municipality Name: \n");
scanf(" %49[^\n]", municipality);		// "%s" reads one word and stops at a space, [^\n] reads everything until you press enter

printf("Enter Major's Name: \n");
scanf(" %49[^\n]", mayor);

printf("Enter Population: \n");
scanf("%d", &population);

printf("\n------------------------------------\n");
printf("Municipality: %s\n", municipality);
printf("Major: %s\n", mayor);
printf("Population: %d\n", population);


return 0;
}