import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            try {
                long x = sc.nextLong();
                System.out.println(x + " can be fitted in:");

                String result = new String();
                
                if (x >= -128 && x <= 127) {
                    result = "* byte\n* short\n* int\n* long";
                } else if (x >= -32768 && x <= 32767) {
                    result = "* short\n* int\n* long";
                } else if (x >= -2147483648 && x <= 2147483647) {
                    result = "* int\n* long";
                } else {
                    result = "* long";
                }

                System.out.println(result);
            } catch(Exception e) {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }
        }
    }
}