//Accept the number and toggle 4th and 7th digit.

//Accept the number and toggle it
//X-OR ^ 48

// 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10  9  8  7  6  5  4   3   2   1 Bits
//  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0   0   0   0 Numbers
import java.lang.*;
import java.util.*;

//  0000    0000    0000    0000    0010    0000    0000    0000
//   0       0       0       0       2       0       0       0
class Bitwise
{
    public int OnBit(int iNo)       // 4
    {
        int iMask = 0X00000048;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class program188
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter Number: ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iret = bobj.OnBit(value);
        System.out.println("Updated number is  : "+iret);
    }
}

/*
Decimal       Hexadecimal           Binary
0                      0                        0000
1                       1                       0001
2                       2                       0010
3                       3                       0011
4                       4                       0100
5                       5                       0101
6                       6                       0110
7                       7                       0111
8                       8                       1000
9                       9                       1001
10                      A                      1010
11                      B                      1011
12                      C                       1100
13                      D                      1101
14                      E                      1110
15                      F                       1111
*/