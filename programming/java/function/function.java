public class function {
    public static void helloWorld() {
        System.out.println("Hello World!");
    }

    public static void oneto10() {
        for (int i = 1; i <= 10; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void evento20() {
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void whileLoopExample() {
        int i = 5;
        while (i >= 1) {
            System.out.print(i + " ");
            i--;
        }
        System.out.println();
    }

    public static void doWhileLoopExample() {
        int i = 1;
        do {
            System.out.print(i + " ");
            i++;
        } while (i <= 5);
        System.out.println();
    }

    public static void printnumber(int n) {
        System.out.println("Number is " + n);
    }

    public static void starttoend(int start, int end) {
        for (int i = start; i <= end; i++) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void ispositive(int n) {
        if (n > 0) {
            System.out.println("positive");
        } else if (n < 0) {
            System.out.println("negative");
        } else {
            System.out.println("zero");
        }
    }

    public static void isdivisibleby5(int n) {
        if (n % 5 == 0) {
            System.out.println("divisible by 5");
        } else {
            System.out.println("not divisible by 5");
        }
    }

    public static void multiplicationTable(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " x " + i + " = " + (n * i));
        }
    }

    public static void starPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void fibonacci(int terms) {
        int first = 0;
        int second = 1;
        for (int i = 1; i <= terms; i++) {
            System.out.print(first + " ");
            int next = first + second;
            first = second;
            second = next;
        }
        System.out.println();
    }

    public static int getFixedNumber() {
        return 100;
    }

    public static int sumOneToTen() {
        int total = 0;
        for (int i = 1; i <= 10; i++) {
            total += i;
        }
        return total;
    }

    public static int sum(int n, int m) {
        return n + m;
    }

    public static int multi(int n, int m) {
        return n * m;
    }

    public static int factorial(int n) {
        int answer = 1;
        for (int i = 1; i <= n; i++) {
            answer *= i;
        }
        return answer;
    }

    public static int sumOfDigits(int n) {
        n = Math.abs(n);
        int total = 0;
        while (n > 0) {
            total += n % 10;
            n /= 10;
        }
        return total;
    }

    public static int countDigits(int n) {
        n = Math.abs(n);
        int count = 0;
        do {
            count++;
            n /= 10;
        } while (n > 0);
        return count;
    }

    public static int reverseNumber(int n) {
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }

    public static boolean isPalindrome(int n) {
        return n >= 0 && n == reverseNumber(n);
    }

    public static boolean isPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static int greatestOfThree(int a, int b, int c) {
        int greatest = a;
        if (b > greatest) {
            greatest = b;
        }
        if (c > greatest) {
            greatest = c;
        }
        return greatest;
    }

    public static void main(String[] args) {
        System.out.println("TYPE 1: NO PARAMETER, NO RETURN VALUE");
        helloWorld();
        oneto10();
        evento20();
        whileLoopExample();
        doWhileLoopExample();

        System.out.println("\nTYPE 2: PARAMETER, NO RETURN VALUE");
        printnumber(25);
        starttoend(4, 8);
        ispositive(-7);
        ispositive(0);
        isdivisibleby5(35);
        multiplicationTable(5);
        starPattern(4);
        fibonacci(8);

        System.out.println("\nTYPE 3: NO PARAMETER, RETURN VALUE");
        System.out.println("Fixed number = " + getFixedNumber());
        System.out.println("Sum from 1 to 10 = " + sumOneToTen());

        System.out.println("\nTYPE 4: PARAMETERS, RETURN VALUE");
        System.out.println("Sum = " + sum(10, 20));
        System.out.println("Multiplication = " + multi(6, 7));
        System.out.println("Factorial = " + factorial(5));
        System.out.println("Sum of digits = " + sumOfDigits(1234));
        System.out.println("Digit count = " + countDigits(98765));
        System.out.println("Reverse number = " + reverseNumber(1234));
        System.out.println("Palindrome = " + isPalindrome(1221));
        System.out.println("Prime = " + isPrime(29));
        System.out.println("Greatest number = " + greatestOfThree(12, 45, 30));
    }
}
