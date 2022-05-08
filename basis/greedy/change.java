package greedy;

/* 거스름돈 문제 */
/* 시간복잡도는 화폐의 종류에만 영향을 받아서 O(k) */

public class change {
	public static void main(String args[]) {
		int sum = 1260;
		int a[] = {500,100,50,10};
		int count = 0;

		for(int i=0; i < a.length ; i++){
			count += sum / a[i];
			sum = sum % a[i];
		}
		System.out.println(count);
	}
}
