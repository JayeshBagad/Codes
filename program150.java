import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow,iCol;

    public Pattern(int a, int b)
        {
            this.iRow = a;
            this.iCol = b;
        }  

        void DisplayPattern()
        {
            int i = 0, j = 0;

            for (i = 1; i <=iRow; i++)
            {
                for ( j = 1; j <= iCol; j++)
                {
                    cout<<"*"<<"\t";
                }
                cout<<endl;
            }
            
        }

    }          

    
public class program150
{
    public static void main(String[] args) 
    {
        
    }
}
