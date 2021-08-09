// Submitted by Sohan Agarkar

import java.util.Scanner;

public class SetSolver {
    static Scanner sc;
    static final char[][] chars = {
            {'g','r','p'},
            {'o','s','d'},
            {'s','o','f'},
            {'1','2','3'}
    };

    static String getSetCard(String one, String two) {
        String ans = "";
        for(int i = 0; i < 4; i++) {
            int o = -1;
            int t = -1;
            for(int j = 0; j < 3; j++) {
                if(one.charAt(i) == chars[i][j]) {
                    o = j;
                }
                if(two.charAt(i) == chars[i][j]) {
                    t = j;
                }
            }
            ans += chars[i][(o == t) ? o : 3-o-t];
        }
        
        return ans;
    }

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++) {
            String one = sc.next();
            String two = sc.next();
            System.out.println(getSetCard(one, two));
        }
    }
}

