//
//  main.c
//  currencyAndUnitConverter.c
//
//  Created by AMRUTA PALO on 01/08/18.
//  Copyright © 2018 AMRUTA PALO. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//macros for currencies

#define USDollar 68.53
#define britishPound 89.92
#define japaneseYen 0.61
//#define indianRupee
#define euros 80.08

//macros for length
#define metreFromKm 1000
#define kilometreFromMetre 0.001


//macros for area

#define squareMetre
#define squareKilometre


//macros for volume

#define cubicMetre
#define cubicKiloMetre


//macros for temperature
#define celsiusFromFahrenheit -17.2222
#define celsiusFromKelvin -272.15
#define kelvinFromFahrenheit 255.928
#define fahrenheitFromCelsius 33.8
#define kelvinFromCelsuis 274.15
#define fahrenheitFromKelvin (-457.87)


//macros for pressure

#define pascalFromBar 100000
#define pascalFromAtmosphere 101325
#define pascalFromTorr 133.3223
#define barFromPascal 0.00001
#define barFromAtmosphere 1.01325
#define barFromTorr 0.001333
#define atmosphereFromPascal 0.000009869
#define atmosphereFromBar 0.98692
#define atmosphereFromTorr 0.001315
#define torrFromPascal 0.0075
#define torrFromAtmosphere 760
#define torrFromBar 750.0616


//macros for power

#define wattFromHorsePower 745.69987
#define wattFromBTUperHour 0.29307111
#define horsePowerFromWatt 0.0013410
#define horsePowerFromBTUperHour 0.0003931
#define BTUperHourFromHorsePower 2544.43322
#define BTUperHourFromWatt 3.4121411

//macros for time

#define secFromMinutes 60
#define secFromHours 3600
#define minutesFromHour 60
#define minutesFromSeconds 0.01666
#define hoursFromMinutes 0.01666
#define hoursFromSeconds 0.000277777

void currencyConversion(float amountInRupee)
{
    //Assuming the User has to convert from Indian Currency
    
    int choice;
    printf("Enter the currency you want it to convert to? \n 1.US Dollar 2.British Pound 3.Japanese Yen 4. Euros");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
            printf("%f Indian rupee = %f USD",amountInRupee,amountInRupee*USDollar);
            break;
            
        case 2:
            printf("%f Indian rupee = %f Pounds",amountInRupee,amountInRupee*britishPound);
            break;
            
        case 3:
            printf("%f Indian rupee = %f Yen",amountInRupee,amountInRupee*japaneseYen);
            break;
            
        case 4:
            printf("%f Indian rupee = %f Euros",amountInRupee,amountInRupee*euros);
            break;
            
            
            
        default:
            printf("Invalid choice");
            break;
    }
    
    
}

void lengthConversion(char userUnit[],double userQuantity)
{
    //int choice;
    //printf("What do you want to convert it to? \n 1.metre \n 2.km \n");
    //scanf("%d",&choice);
    
    if(strcmp(userUnit,"km") == 0)
        printf("%f km = %f metres", userQuantity,userQuantity*metreFromKm);
    
    
    
    else if (strcmp(userUnit,"m") == 0)
        printf("%f metres = %f km", userQuantity,userQuantity*kilometreFromMetre);
    
    
    
    else
        printf("Invalid choice");
    
}

void areaConversion(char userUnit[],double userQuantity)
{
    //int choice;
    //printf("What do you want to convert it to? \n 1.metre \n 2.km \n");
    //scanf("%d",&choice);
    
    if(strcmp(userUnit,"km") == 0)
        printf("%f square km = %f square metres", userQuantity,userQuantity*pow(metreFromKm,2));
    
    
    
    else if (strcmp(userUnit,"m")== 0)
        printf("%f square metres = %f square km", userQuantity,userQuantity*pow(kilometreFromMetre,2));
    
    
    
    else
        printf("Invalid choice");
    
}

void volumeConversion(char userUnit[],double userQuantity)
{
    //int choice;
    //printf("What do you want to convert it to? \n 1.metre \n 2.km \n");
    //scanf("%d",&choice);
    
    if(strcmp(userUnit,"km") == 0)
        printf("%f square km = %f square metres", userQuantity,userQuantity*pow(metreFromKm,3));
    
    
    
    else if (strcmp(userUnit,"m") == 0)
        printf("%f square metres = %f square km", userQuantity,userQuantity*pow(kilometreFromMetre,3));
    
    
    
    else
        printf("Invalid choice");
    
}

void temperatureConversion(char userUnit[],double userQuantity)
{
    int choice;
    
    
    
    if(strcmp(userUnit, "C") == 0)
    {
    
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Fahrenheit 2.Kelvin \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Celsius = %f Fahrenheit",userQuantity,userQuantity*fahrenheitFromCelsius);
                break;
                
            case 2:
                printf("%f Celsius = %f Kelvin",userQuantity,userQuantity*kelvinFromCelsuis);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "F") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Celsius 2.Kelvin \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Fahrenheit = %f Celsius",userQuantity,userQuantity*celsiusFromFahrenheit);
                break;
                
            case 2:
                printf("%f Fahrenheit = %f Kelvin",userQuantity,userQuantity*kelvinFromFahrenheit);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "K") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Celsius 2.Fahrenheit \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Kelvin = %f Celsius",userQuantity,userQuantity*celsiusFromKelvin);
                break;
                
            case 2:
                printf("%f Kelvin = %f Fahrenheit",userQuantity,userQuantity*fahrenheitFromKelvin);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else{
        
        printf("Invalid");
    }
    
}



void pressureConversion(char userUnit[],double userQuantity)
{
    int choice;
    
    //Pascal(Pa), Bar(B), Atmosphere(atm) or Torr(torr)
    
    
    
    if(strcmp(userUnit, "Pa") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Bar 2.Atmosphere 3.Torr \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Pascal = %f Bar ",userQuantity,userQuantity*barFromPascal);
                break;
                
            case 2:
                printf("%f Pascal = %f Atmosphere",userQuantity,userQuantity*atmosphereFromPascal);
                break;
                
            case 3:
                printf("%f Pascal = %f Torr",userQuantity,userQuantity*torrFromPascal);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "B") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Pascal 2.Atmosphere 3.Torr \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Bar = %f Pascal",userQuantity,userQuantity*pascalFromBar);
                break;
                
            case 2:
                printf("%f Bar = %f Atmosphere ",userQuantity,userQuantity*atmosphereFromBar);
                break;
                
            case 3:
                printf("%f Bar = %f Torr",userQuantity,userQuantity*torrFromBar);
                break;
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "atm") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Pascal 2.Bar 3.Torr \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Atmosphere = %f Pascal",userQuantity,userQuantity*pascalFromAtmosphere);
                break;
                
            case 2:
                printf("%f Atmosphere = %f Bar ",userQuantity,userQuantity*barFromAtmosphere);
                break;
                
            case 3:
                printf("%f Atmosphere = %f Torr",userQuantity,userQuantity*torrFromAtmosphere);
                break;
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "torr") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Pascal 2.Bar 3.Atmosphere \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Torr = %f Pascal",userQuantity,userQuantity*pascalFromTorr);
                break;
                
            case 2:
                printf("%f Torr = %f Bar ",userQuantity,userQuantity*barFromTorr);
                break;
                
            case 3:
                printf("%f Torr = %f Atmosphere",userQuantity,userQuantity*atmosphereFromTorr);
                break;
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else{
        
        printf("Invalid");
    }
    
}

void powerConversion(char userUnit[],double userQuantity)
{
    int choice;
    
    //Watt(W), horsepower(hp), BTU/hour(btuh)
    
    
    
    if(strcmp(userUnit, "W") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.horsepower(hp) 2.BTU/hour \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Watt = %f horsepower(hp)  ",userQuantity,userQuantity*horsePowerFromWatt);
                break;
                
            case 2:
                printf("%f Watt = %f BTU/hour ",userQuantity,userQuantity*BTUperHourFromWatt);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    else if(strcmp(userUnit, "hp") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Watt 2.BTU/hour \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f horsepower(hp) = %f Watt ",userQuantity,userQuantity*wattFromHorsePower);
                break;
                
            case 2:
                printf("%f horsepower(hp) = %f BTU/hour ",userQuantity,userQuantity*wattFromBTUperHour);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
    
    
    else if(strcmp(userUnit, "btuh") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Watt 2.HorsePower \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f BTU/hour = %f Watt ",userQuantity,userQuantity*wattFromBTUperHour);
                break;
                
            case 2:
                printf("%f BTU/hour = %f HorsePower ",userQuantity,userQuantity*horsePowerFromBTUperHour);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }

    else
    {
        printf("Invalid Choice");
    }
}

void timeConversion(char userUnit[],double userQuantity)
{
    int choice;
    
    //Seconds(s), Minute(min) or  Hours(hour)
    
    
    
    if(strcmp(userUnit, "s") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Minute(min) 2.Hours(hour) \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Seconds = %f Minute  ",userQuantity,userQuantity*minutesFromSeconds);
                break;
                
            case 2:
                printf("%f Seconds = %f Hours ",userQuantity,userQuantity*hoursFromSeconds);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }

   else if(strcmp(userUnit, "min") == 0)
    {
        
        printf("Enter the unit of Temperature you want it to convert to? \n 1.Seconds 2.Hours \n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                printf("%f Minute = %f Seconds  ",userQuantity,userQuantity*secFromMinutes);
                break;
                
            case 2:
                printf("%f Minute = %f Hours ",userQuantity,userQuantity*secFromHours);
                break;
                
                
            default:
                printf("Invalid choice");
                break;
        }
    }
   else if(strcmp(userUnit, "hours") == 0)
   {
       
       printf("Enter the unit of Temperature you want it to convert to? \n 1.Seconds 2.Minutes \n");
       scanf("%d",&choice);
       
       switch (choice)
       {
           case 1:
               printf("%f Hours = %f Seconds  ",userQuantity,userQuantity*secFromHours);
               break;
               
           case 2:
               printf("%f Hours = %f  Minutes ",userQuantity,userQuantity*minutesFromHour);
               break;
               
               
           default:
               printf("Invalid choice");
               break;
       }
   }
   else{
       printf("invalid Choice");
       
   }
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int ch;
    float amountInRupee;
    char userUnit[5] ; double userQuantity;
    printf("What do you want to convert? \n 1.Currency \n 2.Length \n 3.Area \n 4.Volume \n 5. Temperature \n 6.Pressure \n 7.Power \n 8.Time \n");
    scanf("%d",&ch);
    
    switch (ch) {
            
        case 1:
            
            
            printf("Enter the amount in Indian Rupees.");
            scanf("%f",&amountInRupee);
            currencyConversion(amountInRupee);
            break;
            
        case 2:
            
            
            printf("Enter your unit of length, metres(m) or km(km)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit");
            scanf("%lf",&userQuantity);
            lengthConversion(userUnit,userQuantity);
            
            break;
            
        
        case 3:
            
            
            printf("Enter your unit of area, squaremetres(m) or squareKilometres(km)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit");
            scanf("%lf",&userQuantity);
            areaConversion(userUnit,userQuantity);
            
            break;
        
            
        case 4:
            
            
            printf("Enter your unit of volume, cubicmetres(m) or cubicKilometres(km)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit");
            scanf("%lf",&userQuantity);
            volumeConversion(userUnit,userQuantity);
            
            break;
            
        case 5:
            
            
            printf("Enter your unit of temperature, Celsius(C) or Fahrenheit(F)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit (eg: 1000)");
            scanf("%lf",&userQuantity);
            temperatureConversion(userUnit,userQuantity);
            
            break;
        
        case 6:
            
            
            printf("Enter your unit of pressure, Pascal(Pa), Bar(B), Atmosphere(atm) or Torr(torr)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit (eg: 1000)");
            scanf("%lf",&userQuantity);
            pressureConversion(userUnit,userQuantity);
            
            break;
            
        case 7:
            
            
            printf("Enter your unit of power, Watt(W), horsepower(hp) or BTU/hour(btuh)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit");
            scanf("%lf",&userQuantity);
            powerConversion(userUnit,userQuantity);
            
            break;
            
        case 8:
            
            
            printf("Enter your unit of power, Seconds(s), Minute(min) or  Hours(hours)");
            scanf("%s",userUnit);
            printf("Enter the magnitude in above unit");
            scanf("%lf",&userQuantity);
            timeConversion(userUnit,userQuantity);
            
            break;
            
        default:
            printf("Invalid");
            break;
    }
    
    return 0;
}

