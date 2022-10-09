//Hexadecimal Number System Program

//Accept number from user check whether the 14th bit is on or off
 //for 8192 
 // 0000  0000  0000  0000  0000  0000  0000  0000  0000 Binary
 //   0     0     0     0     2     0     0     0     0  Hexadeci
import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        
        int iResult = 0;
        int iMask= 0X00002000;//1048576 // put cuz need to perform operation of &

        iResult = iNo & iMask;

        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class program184
{
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bret  = bobj.CheckBit(value);
 
        if(bret == true)
        {
            System.out.println("Bit is On");
        }
        else
        {
            System.out.println("Bit is Off");
        }
    }
}