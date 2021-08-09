// Submitted by Sohan Agarkar

import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Solution {

    static Scanner sc;
    static final List<Character> VOWELS = Arrays.asList('a','e','i','o','u');

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int length = sc.nextInt();
        String word = sc.next();
        int count = 0;
        for(int i = 0; i < word.length(); i++) {
            if (VOWELS.contains(word.charAt(i))) {
                count++;
            }
        }

        System.out.println(length-count);
    }
}

