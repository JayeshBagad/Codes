import java.io.*;
import java.util.*;

class program304
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:);
        String str = sobj.nextLine();

        String newstr = str.replaceAll("\\s+"," ");
        String str = newstr.split();

    }
}