import java.util.Scanner;

class Recursion{
    public static int count(int n){
        if(n==0)
            return 1;
        
        System.out.println(n);
        return count(n-1);

    }
}

public class revcount{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number for reverse counting : ");
        int a = sc.nextInt(); 
        Recursion r1 = new Recursion();
        r1.count(a);
    }
}