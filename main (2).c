/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    char category;
  int tempChoice;
  int lenChoice;
  int massChoice;
  int distChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
   int userinputFeettoMeter; // User inputted for Feet to Meter;
  int userinputMetertoFeet; // User inputted for Meter to Feet;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  int userinputKilometer; // User inputted for kilometer
  int userinputCentimeter; // User inputter for centimeter
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
   float FeettoMeter ; // varaible that stores the converted Feet->Meter;
  float MetertoFeet; // stores the converted Meter->Feet;
   float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
  float KilometertoCentimeter; // stores the converted Kilometer->Centimeter
  float CentimetertoKilometer; // stores the converted Centimeter->Kilometer
    printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Length(L),Mass(M),Distance(D) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
     if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  else if(category == 'L') {
      printf("Welcome to Length Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Feet to Meter. \n");
      printf("Enter 2 for Meter to Feet. \n");
      scanf("%d",&lenChoice);
      if(lenChoice == 1){
          printf("Please enter the Feet: \n");
          scanf("%d",&userinputFeettoMeter);
          FeettoMeter=userinputFeettoMeter/3.2808399;
           printf("Feet: %f",FeettoMeter);
      }
        else if(lenChoice == 2){
          printf("Please enter the Meter: \n");
          scanf("%d",&userinputMetertoFeet);
          MetertoFeet = userinputMetertoFeet *3.2808399 ;
          printf("Meter: %f",MetertoFeet);
        }
      else
        printf("Please enter correct choice. \n");
   }
   else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
   else if(category == 'D') {
      printf("Welcome to Distance Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Kilometer to Centimeter \n");
      printf("Enter 2 for Centimeter to Kilometer \n");
      scanf("%d",&distChoice);
      if(distChoice == 1){
          printf("Please enter the Kilometer: \n");
          scanf("%d",&userinputKilometer);
          KilometertoCentimeter= userinputKilometer * 100000;
          printf("Centimeter: %f",KilometertoCentimeter); 
      }
      else if(distChoice == 2){
          printf("Please enter the Centimeter: \n");
          scanf("%d",&userinputCentimeter);
          CentimetertoKilometer = userinputCentimeter/100000;
          printf("Kilometer: %f",CentimetertoKilometer);
      }
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}