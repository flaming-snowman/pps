// Luke's Solution

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        
        int[] a = new int[n];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(st.nextToken());
        }
        
        System.out.println(solve(n, k, a));
    }
    
    public static int solve(int n, int k, int[] a) {
        Arrays.sort(a);
        int i = 0, j = n - 1;
        int ans = 0;
        while (i <= j) {
            if (a[j] >= k) {
                j--;
                ans++;
            } else if (i < j && a[i] + a[j] >= k) {
                i++;
                j--;
                ans++;
            } else {
                i++;
            }
        }
        return ans;
    }
}
