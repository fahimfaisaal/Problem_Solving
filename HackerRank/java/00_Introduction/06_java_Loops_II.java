import java.util.*;
import java.io.*;

class Solution7 {
    private static int pow(int base, int pow) {
        if (pow == 0) return 1;
        
        return base * pow(base, pow - 1);
    }
    
    public static void main(String [] args) {
        Scanner in = new Scanner(System.in);
        
        int t = in.nextInt();
        
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            for (int j = 0; j < n; j++) {
                a += (pow(2, j) * b);
                System.out.print(a + " ");
            }
            
            System.out.print("\n");
        }
        
        in.close();
    }
}