import java.io.*;
// Submitted by Luke Qiao

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String[][] sets = new String[n][3];
        s.nextLine();
        
        for (int i = 0; i < n; i++) {
            String[] line = s.nextLine().split(" ");
            for (int j = 0; j < 3; j++) {
                sets[i][j] = line[j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            int yes = 0;
            for (int j = 0; j < 4; j++) {
                if (sets[i][0].charAt(j) == sets[i][1].charAt(j) && sets[i][1].charAt(j) == sets[i][2].charAt(j)) {
                    yes++;
                } else if (sets[i][0].charAt(j) != sets[i][1].charAt(j) && sets[i][1].charAt(j) != sets[i][2].charAt(j)                             && sets[i][0].charAt(j) != sets[i][2].charAt(j)) {
                    yes++;
                }
            }
            if (yes == 4) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
