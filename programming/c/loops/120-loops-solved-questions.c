#include <stdio.h>

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    int n2;
    printf("enter a number: ");
    scanf("%d", &n2);
    for(int i=n2; i>=1; i--) {
        printf("%d\n", i);
    }
    int n3;
    printf("enter a number: ");
    scanf("%d", &n3);

    for(int i=2; i<=n3; i+=2) {
        printf("even number: %d\n", i);
    }

    int n4;
    printf("enter a number: ");
    scanf("%d", &n4);

    for(int i=1; i<=n4; i+=2) {
        printf("odd number: %d\n", i);
    }
    int n5;
    printf("enter a number: ");
    scanf("%d", &n5);
    for(int i=1; i<=10; i++) {
        printf("%d * %d = %d\n", n5, i, n5*i);
    }
    int n6;
    printf("enter a number: ");
    scanf("%d", &n6);
    for(int i=0; i<=n6; i++) {
        printf("%d\n", i*i);
    }
    int n7;
    printf("enter a number: ");
    scanf("%d",&n7);
    int sum1 = 0;
    for(int i=1;i<=n7;i++){
        sum1 = sum1 + i;
        printf("sum: %d\n", sum1);   



    }
    // i want sum of all number one by one
    // find factorial
    double n8;
    printf("enter a number: ");
    scanf("%lf", &n8);
    double fact = 1;
    for(int i=1;i<=n8;i++){
        fact = fact * i;
        printf("factorial: %lf\n", fact);
    }
    // reverse factorial
    double reverse_fact = 1;
    int n9;
    printf("enter a number: ");
    scanf("%d", &n9);
    for(int i=n9;i>=1;i--){
        reverse_fact = reverse_fact * i;
        printf("reverse factorial: %lf\n", reverse_fact);
    }
    int n10;
    printf("enter a number: ");
    scanf("%d", &n10);
    for(int i=n10;i>=1;i--){
        printf("number: %d\n", i);
    }
    int n11;
    printf("enter a number: ");
    scanf("%d", &n11);
    printf("ASCII values:\n");
    for(int i=0;i<=255;i++){
        printf("%d: %c\n", i, i);
    }

    //count digit in numbers
    int n12;
    printf("enter a number: ");
    scanf("%d", &n12);
    int count1 = 0;
    while(n12>0){
        n12 = n12/10;
        count1++;
    }
    printf("count digit in numbers: %d\n", count1);
    //sum of digit
    int n13;
    printf("enter a number: ");
    scanf("%d", &n13);
    int sum2 = 0;
    while(n13>0){
        sum2 = sum2 + n13%10;
        n13 = n13/10;
    }
    printf("sum of digit: %d\n", sum2);
    //Palindrome number
    int n14;
    printf("enter a number: ");
    scanf("%d", &n14);
    int reverse = 0;
    int original1 = n14;
    while(n14>0){
        reverse = reverse * 10 + n14%10;
        n14 = n14/10;
    }
    if(reverse == original1){
        printf("Palindrome number\n");
    }
    else{
        printf("Not a Palindrome number\n");
    }

//Armstrong number
int n15;
printf("enter a number: ");
scanf("%d", &n15);
int sum3 = 0;
int original2 = n15;
while(n15>0){
    sum3 = sum3 + (n15%10)*(n15%10)*(n15%10);
    n15 = n15/10;
}
if(sum3 == original2){
    printf("Armstrong number\n");
}
else{
    printf("Not an Armstrong number\n");
}
//find power of (x^y)
int x;
int y=2;
printf("enter x : ");
scanf("%d ", &x);
int power = 1;
for(int i=1;i<=y;i++){
    power = power * x;
}
printf("power: %d\n", power);
int n16;
printf("enter a number: ");
scanf("%d", &n16);
int mul = 1;
for(int i=1;i<=n16;i++){
    mul = mul * i;
}
printf("multiplication: %d\n", mul);
    //print number divisible by 5
    int n17;
    printf("enter a number: ");
    scanf("%d", &n17);
    for(int i=1;i<=n17;i++){
        if(i%5==0){
            printf("divisible by 5: %d\n", i);
        }
    }
    //find avrage of n number
    int n18;
    printf("enter a number: ");
    scanf("%d", &n18);
    int sum4 = 0;
    for(int i=1;i<=n18;i++){
        sum4 = sum4 + i;
    }
    printf("avrage of n number: %d\n", sum4/n18);

    //find maximum number in n input
    int n19;
    printf("enter a number: ");
    scanf("%d", &n19);
    int min = 0;
    for(int i=1;i<n19;i++){
        if(i<min){
            min = i;
        }
    }
    printf("minimum number in n input: %d\n", min);

    int n20;
    printf("enter numbers:");
    scanf("%d",&n20);
    int sum5=0;
    for(int i=1;i<=n20;i++){
        if(i%2==0){
        sum5=sum5+i;
        }
    }
    printf("sum of even numbers: %d\n", sum5);
    int sum6=0;
    for(int i=1;i<=n20;i++){
        if(i%2!=0){
        sum6=sum6+i;
        }
    }
    printf("sum of odd numbers: %d\n", sum6);
    //count even number
    int n21;
    printf("enter a number: ");
    scanf("%d", &n21);
    int count2 = 0;
    for(int i=1;i<=n21;i++){
        if(i%2==0){
            count2++;
        }
    }
    printf("count of even numbers: %d\n", count2);
    //count odd number
    int n22;
    printf("enter a number: ");
    scanf("%d", &n22);
    int count3 = 0;
    for(int i=1;i<=n22;i++){
        if(i%2!=0){
            count3++;
        }
    }
    printf("count of odd numbers: %d\n", count3);
    //count even digit
    int n23;
    printf("enter a number: ");
    scanf("%d", &n23);
    int count4 = 0;
    while(n23>0){
        if(n23%2==0){
            count4++;
        }
        n23 = n23/10;
    }
    printf("count of even digits: %d\n", count4);
    //count odd digit
    int n24;
    printf("enter a number: ");
    scanf("%d", &n24);
    int count5 = 0;
    while(n24>0){
        if(n24%2!=0){
            count5++;
        }
        n24 = n24/10;
    }
    printf("count of odd digits: %d\n", count5);
    //print fibonicc series
    int n25;
    printf("enter a number: ");
    scanf("%d", &n25);
    int a = 0;
    int b = 1;
    int c;
    for(int i=1;i<=n25;i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

//check prime number
int n26;
printf("enter a number: ");
scanf("%d", &n26);
int isPrime = 1;
for(int i=2;i<n26;i++){
    if(n26%i==0){
        isPrime = 0;
        break;
    }
}
if(isPrime==1){
    printf("Prime number\n");
}
else{
    printf("Not a Prime number\n");
}
    //count prime number till n
    int n27;
    printf("enter a number: ");
    scanf("%d", &n27);
    int count6 = 0;
    for(int i=2;i<=n27;i++){
        int isPrime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            count6++;
        }
    }
    printf("count of prime numbers till n: %d\n", count6);
    //find hcf
    int a1, b1;
    printf("enter two numbers: ");
    scanf("%d %d", &a1, &b1);
    int hcf = 1;
    for(int i=1;i<=a1 && i<=b1;i++){
        if(a1%i==0 && b1%i==0){
            hcf = i;
        }
    }
    printf("hcf of two numbers: %d\n", hcf);
    //find lcm
    int a2, b2;
    printf("enter two numbers: ");
    scanf("%d %d", &a2, &b2);
    int max = (a2 > b2) ? a2 : b2;
    int lcm = max;
    while(1){
        if(lcm % a2 == 0 && lcm % b2 == 0){
            printf("lcm of two numbers: %d\n", lcm);
            break;
        }
        lcm++;
    }
    //neon number
    int n28;
    printf("enter a number: ");
    scanf("%d", &n28);
    int square = n28 * n28;
    int sum7 = 0;
    while(square > 0){
        sum7 += square % 10;
        square /= 10;
    }
    if(sum7 == n28){
        printf("Neon number\n");
    }
    else{
        printf("Not a Neon number\n");
    }
    //automorphic number
    int n29;
    printf("enter a number: ");
    scanf("%d", &n29);
    int square1 = n29 * n29;
    int lastDigit = square1 % 10;
    if(lastDigit == n29){
        printf("Automorphic number\n");
    }
    else{
        printf("Not an Automorphic number\n");
    }
    //sum of factorial
    int n30;
    printf("enter a number: ");
    scanf("%d", &n30);
    int sum8 = 0;
    for(int i=1;i<=n30;i++){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact *= j;
        }
        sum8 += fact;
    }
    printf("sum of factorial: %d\n", sum8);
    
    //harmonic series
    int n31;
    printf("enter a number: ");
    scanf("%d", &n31);
    float sum9 = 0;
    for(int i=1;i<=n31;i++){
        sum9 += 1.0/i;
    }
    printf("sum of harmonic series: %f\n", sum9);
    
   // fined binery of number
   int n32;
   printf("enter a number: ");
   scanf("%d", &n32);
   int binary = 0;
   int power1 = 1;
   while(n32 > 0){
       int remainder = n32 % 2;
       binary += remainder * power1;
       power1 *= 10;
       n32 /= 2;
   }
   printf("binary of number: %d\n", binary);
   // count zeros in number
   int n33;
   printf("enter a number: ");
   scanf("%d", &n33);
   int count7 = 0;
   while(n33 > 0){
       if(n33 % 10 == 0){
           count7++;
       }
       n33 /= 10;
   }
   printf("count of zeros in number: %d\n", count7);
   // print alternate numbers
   int n34;
   printf("enter a number: ");
   scanf("%d", &n34);
   for(int i=1;i<=n34;i+=2){
       printf("%d ", i);
   }
   printf("\n");
    // find diffrence sum even odd 
    int n35;
    printf("enter a number: ");
    scanf("%d", &n35);
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=1;i<=n35;i++){
        if(i%2==0){
            sumEven += i;
        }
        else{
            sumOdd += i;
        }
    }
    printf("diffrence sum even odd: %d\n", sumEven - sumOdd);

    // sum of rupees
    int n36;
    printf("enter a number: ");
    scanf("%d", &n36);
    int sum10 = 0;
    for(int i=1;i<=n36;i++){
        sum10 += i;
    }
    printf("sum of rupees: %d\n", sum10);
    // sum of squares
    int n37;
    printf("enter a number: ");
    scanf("%d", &n37);
    int sum11 = 0;
    for(int i=1;i<=n37;i++){
        sum11 += i * i;
    }
    printf("sum of squares: %d\n", sum11);
    // sum of cubes
    int n38;
    printf("enter a number: ");
    scanf("%d", &n38);
    int sum12 = 0;
    for(int i=1;i<=n38;i++){
        sum12 += i * i * i;
    }
    printf("sum of cubes: %d\n", sum12);
    // count multiplyes of 7
    int n39;
    printf("enter a number: ");
    scanf("%d", &n39);
    int count8 = 0;
    for(int i=1;i<=n39;i++){
        if(i % 7 == 0){
            count8++;
        }
    }
    printf("count multiplyes of 7: %d\n", count8);
    // pattern *****
    char ch = '*';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c", ch);
        }
        printf("\n");
    }
    // pattern *****
    char ch1 = '*';
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c", ch1);
        }
        printf("\n");
    }
    return 0;
}