//https://www.codechef.com/problems/TREE2

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{

	try {
			Scanner scn = new Scanner(System.in);
			int t = scn.nextInt();
			while (t > 0) {
				int n = scn.nextInt();
				int[] arr = new int[n];
				for (int i = 0; i < n; i++) {
					arr[i] = scn.nextInt();
				}
				System.out.println(minStep(arr));
				t--;
			}
		} catch (Exception e) {
			return;
		}
	}

public static int minStep(int[] arr) {
		HashMap<Integer, Integer> map = new HashMap<>();
		int s = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] != 0) {
				if (map.containsKey(arr[i])) {
				} else {
					map.put(arr[i], 0);
					s++;
				}
			}
		}
		return s;
	}
}
