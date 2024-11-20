/*
Unit Converter
CS 2211

this program converts a given quantity from one measuring unit to another
*/

#include <stdio.h>

// function declaration 
void G_O_converter();
void SM_SY_converter();
void L_P_converter();
void M_F_converter();

// menu function to display the menu for the users choice of input
void menu(){
int user_int;

// menu options
printf("\n1 for conversion between Grams and Ounce\n");
printf("2 for conversion between Square meters and Square Yards\n");
printf("3 for conversion between Litres and Pints\n");
printf("4 for conversion between Meter and Feet\n");
printf("5 for quit\n");
printf("What would you like to do? (enter integer): ");
scanf("%d" ,&user_int);
   
    // making sure user input is valid
   while (user_int < 1 || user_int > 5)
    {
        printf("invalid choice! try again: ");
        scanf("%d", &user_int);
    }

// calling the conversion function depending on the user's input
switch (user_int){
case 1: G_O_converter();
    break;

case 2: SM_SY_converter();
    break;

case 3: L_P_converter();
    break;

case 4: M_F_converter();
    break;

case 5: 
    break;
    }
}

// function to convert between grams and ounces
void G_O_converter(){

char g_o_input;
float g_o_num;

// asking user for conversion type and validating it
printf("\nType: G for conversion from Grams to Ounces\n");
printf("Type: O for conversion from Ounces to Grams: ");
scanf(" %c", &g_o_input);

    while (g_o_input != 'G' && g_o_input != 'O' && g_o_input != 'g' && g_o_input != 'o'){
        menu();
        return;
    }

// asking user for value to convert 
printf("Please enter a value: ");
scanf("%f", &g_o_num);

float ounces_converted;
float grams_converted;
    
    // performing conversion depending on user input
    if (g_o_input == 'G' || g_o_input == 'g')
    {
        grams_converted = g_o_num * 0.03527;
        printf("Your conversion (in ounces): %f\n", grams_converted);
        menu();
    }
    else if (g_o_input == 'O' || g_o_input == 'o')
    {
        ounces_converted = g_o_num / 0.03527;
        printf("Your conversion (in grams): %f\n", ounces_converted);
        menu();
    }
    
}

// function to convert between square meters and square yards
void SM_SY_converter(){
    
char SM_SY_input;
float SM_SY_num;

// asking user for conversion type and validating it
printf("\nType: M for conversion from Square Meters to Square Yards\n");
printf("Type: Y for conversion from Square Yards to Square Meters: ");
scanf(" %c", &SM_SY_input);

    while (SM_SY_input != 'M' && SM_SY_input != 'Y' && SM_SY_input != 'm' && SM_SY_input != 'y'){
        menu();
        return;
    }

// asking user for value to convert
printf("Please enter a value: ");
scanf("%f", &SM_SY_num);

float square_meters_converted;
float square_yards_converted;

    // performing conversion depending on user input
    if (SM_SY_input == 'M' || SM_SY_input == 'm'){
        square_meters_converted = SM_SY_num * 1.19599;
        printf("Your conversion (in square yards): %f\n", square_meters_converted);
        menu();
    }
    else if (SM_SY_input == 'Y' || SM_SY_input == 'y'){
        square_yards_converted = SM_SY_num / 1.19599;
        printf("Your conversion (in square meters): %f\n", square_yards_converted);
        menu();
    }
}

// function to convert between litres and pints
void L_P_converter(){

char L_P_input;
float L_P_num;

// asking user for conversion type and validating it
printf("\nType: L for conversion from Litres to Pints\n");
printf("Type: P for conversion from Pints to Litres: ");
scanf(" %c", &L_P_input);

    while (L_P_input != 'L' && L_P_input != 'P' && L_P_input != 'l' && L_P_input != 'p'){
        menu();
        return;
    }

// asking user for value to convert
printf("Please enter a value: ");
scanf("%f", &L_P_num);

float litres_converted;
float pints_converted;

    // performing conversion depending on user input
    if (L_P_input == 'L' || L_P_input == 'l'){
        litres_converted = L_P_num * 2.11338;
        printf("Your conversion (in pints): %f\n", litres_converted);
        menu();
    }
    else if (L_P_input == 'P' || L_P_input == 'p'){
        pints_converted = L_P_num / 2.11338;
        printf("Your conversion (in litres): %f\n", pints_converted);
        menu();
    }
 
}

// function to convert between meters and feet
void M_F_converter(){

char M_F_input;
float M_F_num;

// asking user for conversion type and validating it
printf("\nType: M for conversion from Meters to Feet\n");
printf("Type: F for conversion from Feet to Meters: ");
scanf(" %c", &M_F_input);

    while (M_F_input != 'M' && M_F_input != 'F' && M_F_input != 'm' && M_F_input != 'f')
    {
        menu();
        return;
    }

// asking user for value to convert
printf("Please enter a value: ");
scanf("%f", &M_F_num);

float meters_converted;
float feet_converted;

    // performing conversion depending on user input
    if (M_F_input == 'M' || M_F_input == 'm'){
        meters_converted = M_F_num * 3.28084;
        printf("Your conversion (in feet): %f\n", meters_converted);
        menu();
    }
    else if (M_F_input == 'F' || M_F_input == 'f'){
        feet_converted = M_F_num / 3.28084;
        printf("Your conversion (in meters): %f\n", feet_converted);
        menu();
    }

} 

// main function where the program begins
int main() {
menu();
return 0;
}

