// Submitted by Luke Qiao

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] perm = new int[n];
        for (int i = 0; i < n; i++) {
            perm[i] = s.nextInt();
        }
        
        int cross = 0;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i - 1; j >= 0; j--) {
                if (perm[j] > perm[i]) {
                    cross++;
                }
            }
        }
        
        System.out.println(cross);
    }
}
