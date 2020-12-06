// Submitted by Luke Qiao

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        s.nextLine();
        
        String[] cards = s.nextLine().split(" ");
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (ok(cards[i], cards[j], cards[k])) {
                        ans++;
                    }
                }
            }
        }
        
        System.out.println(ans);
    }
    
    public static boolean ok(String a, String b, String c) {
        int yes = 0;
        for (int i = 0; i < 4; i++) {
            if (a.charAt(i) == b.charAt(i) && b.charAt(i) == c.charAt(i)) {
                yes++;
            } else if (a.charAt(i) != b.charAt(i) && b.charAt(i) != c.charAt(i) && a.charAt(i) != c.charAt(i)) {
                yes++;
            }
        }
        return yes == 4;
    }
}
