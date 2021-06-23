// Modified submission originally by Grace Wang

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] firstLine = scanner.nextLine().split(" ");
        int n = Integer.parseInt(firstLine[0]);
        int m = Integer.parseInt(firstLine[1]);
        String[] secondLine = scanner.nextLine().split(" ");
        long[] obj = new long[m];
        for(int i=0;i<m;i++){
            obj[i] = Long.parseLong(secondLine[i]);
        }
        
        long[][] weight = new long[n][2];
        for(int i=0;i<n;i++){
            weight[i][0] = 0;
            weight[i][1] = i+1;
            String[] nextLine = scanner.nextLine().split(" ");
            long[] box = new long[m];
            for(int j=0;j<m;j++){
                box[j] = Long.parseLong(nextLine[j]);
                weight[i][0] += box[j]*obj[j];
            }
        }

        Arrays.sort(weight, (a,b) -> Long.compare(a[0],b[0]));
        for(int i=0;i<n;i++){
            System.out.println(weight[i][1]);
        }
    }
}

