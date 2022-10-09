//Accept number from user check whether the 3rd bit is on or off
//4bit = 1 nibble 
import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        
        int iResult = 0;
        int iMask= 64; // put cuz need to perform operation of &

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
class program181
{
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
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