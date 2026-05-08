#include <stdio.h>
int main() {
    printf("Hello World\n");
    printf("========================\n");
    printf("1.student marks percentage calculation\n");
    int a,b,c,d,e,totalMarks;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    totalMarks=a+b+c+d+e;
    float percentage = totalMarks / 5.0;
    printf("Total marks: %d\n", totalMarks);
    printf("Percentage: %.2f\n", percentage);
    printf("========================\n");
    printf("2.simple interest calculation\n");
    float amount, rate, time, simpleInterest;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time: ");
    scanf("%f", &time);
    simpleInterest = (amount * rate * time) / 100;
    printf("Simple interest: %.2f\n", simpleInterest);
    printf("========================\n");
    printf("3.area of circle and rectangle\n");
    float radius, length, width, areaCircle, areaRectangle;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    areaCircle = 3.14 * radius * radius;
    areaRectangle = length * width;
    printf("Area of circle: %.2f\n", areaCircle);
    printf("Area of rectangle: %.2f\n", areaRectangle);
    printf("========================\n");
    printf("4.temperature  calculator\n");
    int celcius,fahrenheit;
    printf("Enter the temperature in celcius: ");
    scanf("%d", &celcius);  
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in fahrenheit: %d\n", fahrenheit);
    printf("========================\n");
    printf("5.swap two numbers\n");
    int x,y,temp;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("before swapping: %d %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: %d %d\n", x, y);
    printf("========================\n");
    printf("6.electricity bill calculator\n");
    int units;
    float bill;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 1.20;
    } else if (units <= 200) {
        bill = 100 * 1.20 + (units - 100) * 2.00;
    } else {
        bill = 100 * 1.20 + 100 * 2.00 + (units - 200) * 3.00;
    }
    printf("Electricity bill: %.2f\n", bill);
    printf("========================\n");
    printf("7.salary calculator\n");
    int basic, extra, tax, totalSalary;
    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    extra = basic * 0.20;
    tax = basic * 0.10;
    totalSalary = basic + extra - tax;
    printf("Total salary: %d\n", totalSalary);
    printf("========================\n");
    printf("8. age to days conveter.\n");
    int age, days;
    printf("Enter the age: ");
    scanf("%d", &age);
    days = age * 365;
    printf("Age in days: %d\n", days);
    printf("========================\n");
    printf("9. even or odd number check.");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
    printf("========================\n");
    printf("10. biggest of three number's");
    int a1, b1, c1;
    printf("Enter the first number: ");
    scanf("%d", &a1);
    printf("Enter the second number: ");
    scanf("%d", &b1);
    printf("Enter the third number: ");
    scanf("%d", &c1);
    if (a1 > b1 && a1 > c1) {
        printf("First number is biggest\n");
    } else if (b1 > a1 && b1 > c1) {
        printf("Second number is biggest\n");
    } else if (c1 > a1 && c1 > b1) {
        printf("Third number is biggest\n");
    } else {
        printf("All numbers are equal or two numbers are equal\n");
    }
    printf("========================\n");

    return 0;
}