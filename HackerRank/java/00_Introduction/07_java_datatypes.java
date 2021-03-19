import java.util.*;
import java.io.*;

class Solution {
    public static String one() {
        return "* long";
    }

    public static String two() {
        return "* int\n* long";
    }

    public static String three() {
        return "* short\n* int\n* long";
    }

    public static String four() {
        return "* byte\n* short\n* int\n* long";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            try {
                long x = sc.nextLong();
                System.out.println(x + " can be fitted in:");

                String result = new String();
                
                if (x >= -128 && x <= 127) {
                    result = four();
                } else if (x >= -32768 && x <= 32767) {
                    result = three();
                } else if (x >= -2147483648 && x <= 2147483647)  {
                    result = two();
                } else {
                    result = one();
                }

                System.out.println(result);
            } catch(Exception e) {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }
        }
    }
}