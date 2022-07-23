import java.util.*;
class EndTerm{
    public static void main(String[] args) {
        String s;
        int n;
        double i;
        System.out.println("Enter the dollar value");
        Scanner ob = new Scanner(System.in);
        s= ob.next();
        try{
            n=Integer.parseInt(s);
            int amount= (int)n*60;
            System.out.println("rupees: "+amount); 
        }
        catch(NumberFormatException e){
            System.out.println(s+"cannot be converted"); 
        }
        
    }
}