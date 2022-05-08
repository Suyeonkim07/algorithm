package greedy;
import java.util.*;

/* 1이 될때까지 */

public class forOne {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int count = 0;
		
		while(true) {
			if (n == 1)
				break;
			else if (n % k == 0) {
				n = n/k;
				count++;
			}
			else {
				n--;
				count++;
			}
		}
		System.out.print(count);
	}
}

