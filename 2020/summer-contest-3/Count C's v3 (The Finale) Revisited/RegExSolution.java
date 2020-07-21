// Submitted by Shayan Azmoodeh

import java.io.*;
import java.util.*;
import java.util.regex.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String s = scan.next().toLowerCase();
        long cCount = 0;
        
        //using RegEx to search the string for C's
        Pattern p = Pattern.compile("(s(e{1,}a{1,}))|(s(e{2,}))");
        Matcher m = p.matcher(s);
        
        /* Finding the number of occurences of C's in the string */
        cCount = s.chars().filter(c -> c == 'c').count();

        /* Finding the length of each occurence of a string that counts
        * as a C and adding that length to cCount
        */
        while(m.find())
        {
           cCount += m.end() - m.start();
        }
        System.out.println(cCount);
    }
}
