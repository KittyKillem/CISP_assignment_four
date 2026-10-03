/*
File Name: assignment_four.cpp

Program Purpose: Convert Metric to Imperial.

Programmed By: Kat Salas

Date: 02 October, 2026

Problem No.: 1

Instructions:

    Mr. Arthur Einstein, your college physics teacher, wants a program for English-to-Metric conversions. 

    The program should be able to convert from kilometers to miles, kilograms to pounds, and liters to quarts. 

    The program should first determine the type of conversion desired. 

    To do this, the user will enter a letter indicating the type of measurement: 
        pounds (P), 
        miles (M), and 
        quarts (Q). 

    After doing this, the program should proceed to read the appropriate metric value and convert it to the correct imperial value. 

    Use the following conversion factors:
        1 kilometer = 0.621388 miles
        1 kilogram = 2.2046 pounds
        1 liter = 0.877193 quarts
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // DECLARE VARIABLES:
    char conversion_type;
    string conversion_descriptor;
    double conversion_rate;
    double metric_value;
    double imperial_value;

    // GET CONVERSION TYPE:
    cout << "Convert Metric to Imperial. Select a conversion type:" << endl << endl;
    cout << "(P) Kilograms to Pounds" << endl;
    cout << "(M) Kilometers to Miles" << endl;
    cout << "(Q) Litres to Quarts" << endl << endl;

    cout << "Enter a capital letter as your response: ";
    cin.get(conversion_type);

    // INITIALIZE CONVERSION RATE:
    switch (conversion_type)
    {
        case 'P':
            conversion_rate = 2.2046;
            conversion_descriptor = "pounds";
            break;
        case 'M':
            conversion_rate = 0.621388;
            conversion_descriptor = "miles";
            break;
        case 'Q':
            conversion_rate = 0.877193;
            conversion_descriptor = "quarts";
            break;
        default:
            cout << endl << "Incorrect input. Restart and try again.";
            return 0;
    }

    // GET METRIC VALUE:
    cout << endl << "Enter a number to convert to " << conversion_descriptor << ":";
    cin >> metric_value;

    // CONVERT TO IMPERIAL:
    imperial_value = metric_value * conversion_rate;

    // OUTPUT IMPERIAL VALUE:
    cout << endl << "Your final value is: " << imperial_value << endl;

    return 0;
}