import java.util.Scanner;

class Solution5 {

    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("================================");
            
            for (int i = 0; i < 3; i++) {
                String s1 = sc.next();
                int x = sc.nextInt();
                
                System.out.print(s1);
                
                for (int j = 0; j < 15 - s1.length(); j++) {
                    System.out.print(" ");
                }
                
                System.out.println((x < 10 ? "00" : x < 100 ? "0" : "") + x);

                // System.out.printf("%-15s%03d%n", s1, x); (also can use this line only)
            }
            
            System.out.println("================================");
    }
}