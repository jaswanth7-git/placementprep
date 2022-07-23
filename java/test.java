import java.io.*;
import java.util.Scanner;

class Test{
    public static void main(String args[]){
        Scanner scn= new Scanner(System.in);
        String str= scn.nextLine();
        String[] values = str.split(",");
        int[] intArray = new int[values.length];
        for(int i=0; i<values.length;i++)
        {
            int foo = Integer.parseInt(value[i]);
            if(values[i]<0)
            {
                ans[i]=foo;
            }
        }
        for(int i=0; i<values.length;i++)
        {
            if(values[i]>=0)
            {
                ans[i]=foo;
            }
        }
        for(int i=0;i<ans.length;i++)
        {
            System.out.print(ans[i]);
        }
    }
    }  
