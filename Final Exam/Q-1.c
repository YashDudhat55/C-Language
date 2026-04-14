#include <stdio.h>
#define pf printf

void main()
{

    char a;

    pf("enter any character in only small : ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        pf("you entered is vowel a");
        break;
    case 'e':
        pf("you entered is vowel e");
        break;
    case 'i':
        pf("you entered is vowel i");
        break;
    case 'o':
        pf("you entered is vowel o");
        break;
    case 'u':
        pf("you entered is vowel u");
        break;

        // consonts starts here

    case 'b':
        pf("you entered is consonts b");
        break;
    case 'c':
        pf("you entered is consonts c");
        break;
    case 'd':
        pf("you entered is consonts d");
        break;
    case 'f':
        pf("you entered is consonts f");
        break;
    case 'g':
        pf("you entered is consonts g");
        break;
    case 'h':
        pf("you entered is consonts h");
        break;
    case 'j':
        pf("you entered is consonts j");
        break;
    case 'k':
        pf("you entered is consonts k");
        break;
    case 'l':
        pf("you entered is consonts l");
        break;
    case 'm':
        pf("you entered is consonts m");
        break;
    case 'n':
        pf("you entered is consonts n");
        break;
    case 'p':
        pf("you entered is consonts p");
        break;
    case 'q':
        pf("you entered is consonts q");
        break;
    case 'r':
        pf("you entered is consonts r");
        break;
    case 's':
        pf("you entered is consonts s");
        break;
    case 't':
        pf("you entered is consonts t");
        break;
    case 'v':
        pf("you entered is consonts v");
        break;
    case 'w':
        pf("you entered is consonts w");
        break;
    case 'x':
        pf("you entered is consonts x");
        break;
    case 'y':
        pf("you entered is consonts y");
        break;
    case 'z':
        pf("you entered is consonts z");
        break;
    default:
        pf("Entered character is not a vowel and not a consonant");
    }
}