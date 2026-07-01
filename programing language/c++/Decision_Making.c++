#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "enter a:" << endl;
    cin >> a;
    if (a > 0) {
        cout << "a is positive" << endl;
    }
    else if (a == 0) {
        cout << "a is zero" << endl;
    }
    else {
        cout << "a is negative" << endl;
    }
    cout << "===================" << endl;
    if(a%2==0){
        cout<<"a is even" << endl;
    }else{
        cout<<"a is odd" << endl;   
    }
    cout << "===================" << endl;
    int first,second;
    cout<<"enter first and seconf number:"<<endl;
    cin>>first>>second;
    if(first>second){
        cout<<"first number is greater then second number" << endl;
    }else if(first<second){
        cout<<"first number is less then second number" << endl;
    }else{
        cout<<"first number is equal to second number" << endl;
    }
    cout << "===================" << endl;
    int third;
    cout<<"enter third number:"<<endl;
    cin>>third;
    if(third>first && third>second){
        cout<<"third number is greatest" << endl;
    }else if(second>first && second>third){
        cout<<"second number is greatest" << endl;
    }else if(first>second && first>third){
        cout<<"first number is greatest" << endl;
    }else{
        cout<<"third number is equal to first or second number" << endl;
    }
    cout << "===================" << endl;
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    if (age>=18){
        cout<<"you are eligible to vote" << endl;
    }else{
        cout<<"you are not eligible to vote" << endl;
    }
    cout << "===================" << endl;
    int year;
    cout<<"enter a year:"<<endl;
    cin>>year;
    if(year%400==0 || year%4==0 && year%100!=0){
        cout<<"year is leap year" << endl;
    }else{
        cout<<"year is not leap year" << endl;
    }
    cout << "===================" << endl;
    char ch;
    cout<<"enter a character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') {
        cout<<"character is alphabet" << endl;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            cout<<"character is vowel" << endl;
        } else {
            cout<<"character is consonant" << endl;
        }
    } else {
        cout<<"character is not alphabet" << endl;
    }
    cout << "===================" << endl;
    int number;
    cout<<"enter a number:"<<endl;
    cin>>number;
    if(number%5==0&&number%11==0){
        cout<<"number is divisible by 5 and 11" << endl;
    }else{
        cout<<"number is not divisible by 5 and 11" << endl;
    }
    cout << "===================" << endl;
    int marks;
    cout<<"enter your marks:"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"your grade is A" << endl;
    }else if(marks>=80){
        cout<<"your grade is B" << endl;
    }else if(marks>=70){
        cout<<"your grade is C" << endl;
    }else if(marks>=60){
        cout<<"your grade is D" << endl;
    }else if(marks>=50){
        cout<<"your grade is E" << endl;
    }else{
        cout<<"your grade is F" << endl;
    }
    cout << "===================" << endl;
    int ab,bc;
    cout<<"enter two number:"<<endl;
    cin>>ab>>bc;
    char ch;
    cout<<"enter a character:"<<endl;
    cin>>ch;
    switch(ch){
        case '+':
            cout<<"addition is "<<ab+bc<<endl;
            break;
        case '-':
            cout<<"subtraction is "<<ab-bc<<endl;
            break;
        case '*':
            cout<<"multiplication is "<<ab*bc<<endl;
            break;
        case '/':
            cout<<"division is "<<ab/bc<<endl;
            break;
        default:
            cout<<"invalid character"<<endl;
    }
    cout << "===================" << endl;
    float a,b,c;
    cout<<"enter three angle:"<<endl;
    cin>>a>>b>>c;
    if(a+b+c==180){
        cout<<"triangle is possible" << endl;
    }else{
        cout<<"triangle is not possible" << endl;
    }
    cout << "===================" << endl;
    float a,b,c;
    cout<<"enter three sides of a triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"triangle is equilateral" << endl;
    }else if(a==b || b==c || c==a){
        cout<<"triangle is isosceles" << endl;
    }else{
        cout<<"triangle is scalene" << endl;
    }
    cout << "===================" << endl;

    return 0;
}