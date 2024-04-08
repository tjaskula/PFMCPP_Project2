#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
    1. Boolean type
        - bool

    2. Integer types
        - short
        - int
        - long
        - long long
 
    3. Chracter types
        - char
        - wchar_t
        - char16_t
        - char32_t

   4. Floating point types
        - float
        - double
        - long double

    5. Void type
        - void

    6. Null Pointer Type
        - nullptr_t
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    bool isRaining = false;
    bool isConnected = true;
    bool hasPassedTest = true;

    // Character Types
    char initialLetter = 'J';
    char grade = 'A';
    char controlChar = '\n'; // Newline character

    char16_t emojiHeart = u'\u2764';  // Unicode heart character
    char16_t chineseCharacter = u'\u4EBA';  // Unicode for 人 (person)
    char16_t greekLetterSigma = u'\u03A3';  // Greek Capital Letter Sigma

    char32_t emojiSmile = U'\U0001F642';  // Unicode for 🙂 (smiling face)
    char32_t japaneseCharacter = U'\U00003042';  // Unicode for ま (Japanese hiragana character)
    char32_t musicalNote = U'\U0001F3B5';  // Unicode for 🎵 (musical note)

    // Integer types
    int age = 30;
    int numberOfStudents = 75;
    int temperature = -5;

    short daysInWeek = 7;
    short temperatureInCelsius = -40;
    short numberOfPages = 250;

    long nationalDebt = 17000000000000L;
    long lightYearInKm = 9460730472580800L;
    long diameterOfEarthInMeters = 12742000L;

    /* Generate compiler warnings
    long long distanceToAndromedaInKm = 24000000000000000LL;
    long long worldPopulation = 7600000000000LL;
    long long grainsOfSandOnEarth = 7500000000000000000LL; */

    // Floating point types
    float pi = 3.14f;
    float gravity = 9.81f;
    float bloodAlcoholContent = 0.08f;

    double plankConstant = 6.62607015e-34;
    double earthRadius = 6371.0;
    double speedOfLight = 299792458.0; // in m/s

    
    long double avogadroNumber = 6.02214076e23L;
    long double goldenRatio = 1.6180339887498948482L;
    long double chargeOfElectron = -1.602176634e-19L;

    // Void type
    // void is used for functions that do not return a value 

    // Null Pointer Type
    std::nullptr_t noConnection = nullptr;
    std::nullptr_t missingData = nullptr;
    std::nullptr_t undefinedPerson = nullptr;

    ignoreUnused(number, isRaining, isConnected, hasPassedTest, initialLetter, grade, controlChar, emojiHeart, chineseCharacter, greekLetterSigma, emojiSmile, japaneseCharacter, musicalNote, age, numberOfStudents, temperature, daysInWeek, temperatureInCelsius, numberOfPages, nationalDebt, lightYearInKm, diameterOfEarthInMeters, avogadroNumber, goldenRatio, chargeOfElectron, pi, gravity, bloodAlcoholContent, plankConstant, earthRadius, speedOfLight, noConnection, missingData, undefinedPerson); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void adjustScreenBrightness(int brightnessLevel = 75)
{
    ignoreUnused(brightnessLevel);
}

/*
 2)
 */
double calculateRectangleArea(double length, double width)
{
    ignoreUnused(length, width);
    return {};
}

/*
 3)
 */
bool isEven(int number)
{
    ignoreUnused(number);
    return {};
}

/*
 4)
 */
void simulateTrafficLight(char initialColor = 'G')
{
    ignoreUnused(initialColor);
}

/*
 5)
 */
double calculateSimpleInterest(double principal, double rate, int time)
{
    ignoreUnused(principal, rate, time);
    return {};
}

/*
 6)
 */
double fahrenheitToCelsius(double fahrenheit = 32.0)
{
    ignoreUnused(fahrenheit);
    return {};
}

/*
 7)
 */
int rollDice(int numberOfSides = 6)
{
    ignoreUnused(numberOfSides);
    return {};
}

/*
 8)
 */
int maxOfThree(int num1, int num2, int num3)
{
    ignoreUnused(num1, num2, num3);
    return {};
}

/*
 9)
 */
void playBeepSound(float durationSeconds = 2.0f)
{
    ignoreUnused(durationSeconds);
}

/*
 10)
 */
double calculateHypotenuse(double sideA, double sideB)
{
    ignoreUnused(sideA, sideB);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    adjustScreenBrightness(50);
    
    //2)
    auto rectangleArea = calculateRectangleArea(5.0, 10.0);
    
    //3)
    auto even = isEven(10);
    
    //4)
    simulateTrafficLight('R');
    
    //5)
    auto interestRate = calculateSimpleInterest(1000.0, 0.05, 3);
    
    //6)
    auto celcius = fahrenheitToCelsius(68.0);
    
    //7)
    auto diceResult = rollDice(20);
    
    //8)
    auto maxNumber = maxOfThree(10, 20, 30);
    
    //9)
    playBeepSound(3.0f);
    
    //10)
    auto hypotenuse = calculateHypotenuse(3.0, 4.0);
    
    
    ignoreUnused(carRented, rectangleArea, even, interestRate, celcius, diceResult, maxNumber, hypotenuse);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
