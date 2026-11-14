#include <stdio.h>
#include <cs50.h>

#define VAR1 "Abdo"
#define VAR2 "Ismael"

int main(void)
{
    // Variables

    /*int myAge = 20;
    int yourAge = 30;
    printf("Your Age is %d, And my Age is %d", yourAge, myAge);
    */
    
    // Data Types

    /*long long int var1 = 55;
    char var2 = 'f';
    float var3 = 77.5;
    double var4 = 567.75;
    printf("The size of var1 is %d", sizeof(var1));
    */
    
    // Constant
    
    /*
    const string V1 = "ALI";
    const string V2 = "Abo Taleb";

    printf("My nickname is %s \n", V1);
    printf("And my father name is %s \n", V2);

    printf("The defined constant is %s \n", VAR1);
    printf("The other defined constant is %s \n", VAR2);
    printf("My name is %s %s \n", VAR1, VAR2);
    
    printf("%s \n", __DATE__);
    printf("%s \n", __TIME__);
    printf("%s \n", __FILE__);
    printf("%d \n", __LINE__);
    */

    // input & output

    /*string variable = "Variables";

    printf("Print Text with %s \n", variable);
    puts("Print Text");

    
    string name = get_string("What's your name ? ");  //CS50
    printf("Your name is %s.", name);
    */

    // Arithmetic Operators

    /*
    int x = 9, z = 20;

    printf("x + z = %d \n", x + z);
    printf("x - z = %d \n", x - z);
    printf("x * z = %d \n", x * z);
    printf("x / z = %d \n", x / z);
    printf("x %% z = %d \n", x % z);

    printf("++x = %d \n", ++x);
    printf("--z = %d \n", --z);

    printf("print x before (++) --> %d \n", x++);
    printf("%d \n", x);
    printf("print z before (--) --> %d \n", z--);
    printf("%d", z);
    */

    // Assignment Operators

    /*
    int c = 10, b = 20;

    c += b;
    printf("C += b --> %d \n", c);

    c -= b;
    printf("C -= b --> %d \n", c);

    c *= b;
    printf("C *= b --> %d \n", c);

    c /= b;
    printf("C /= b --> %d \n", c);

    c %= b;
    printf("C %%= b --> %d \n", c);
    */

    // == , < , > , != , <= , >= , && , || , !


    // IF Statment

    /*
    char movies[] = " 1- movie1 \n 2- movie2 \n 3- movie3";
    char adultMovies[] = "1- adultMovie1 \n 2- adultMovie2 \n 3- adultMovie3";
    int age = get_int("Type your age : ");

    if (age > 18) {
        printf("%s \n %s", movies, adultMovies);
    } else {
        printf("%s", movies);
    }
    */

    /*
    int fn = 15, sn = 25;
    int userAnswer;
    const int correctAnswer = fn * sn;
    printf("%d * %d = ", fn, sn);
    scanf("%d", &userAnswer);

    if (userAnswer == correctAnswer) {
        printf("The answer is correct.");
    } else {
        printf("The answer is False");
    }
    */

    // For Loop

    /*
    for (int i = 1;  i <= 10; i++) {
        printf("%d \n", i);
    }
    */

    // While Loop

    /*int i = get_int("I = ");*/

    /*
    while (i <= 20) {
        printf("%d \n", i);
        ++i;
    }

    do{
        printf("%d \n", i);
        ++i;
    } while ( i <=30);
    */

    // Pointer

    /*int vr = 100;
    int* pn = &vr;

    printf("%d \n", vr);
    printf("%p \n", &vr);
    printf("%p \n", pn);
    printf("%d \n", *pn);
    */

    // Arrays

    int notes[4] = {100, 200, 300, 400};

    for(int i = 0; i <= 3; i++) {
        printf("note%d --> %d \n", i+1, notes[i]);
    }
    
    return 0;
}