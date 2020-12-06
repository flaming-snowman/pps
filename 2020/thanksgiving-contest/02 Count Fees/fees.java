// Submitted by Luke Qiao

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        
        int ans = 0;
        if (n > 0) {
            StringBuilder str = new StringBuilder(s.next());
            for (int i = 0; i < n - 2; i++) {
                if (str.substring(i, i + 3).equals("FEE")) {
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}
