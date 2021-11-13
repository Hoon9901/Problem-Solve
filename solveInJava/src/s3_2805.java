import java.util.Scanner;
import java.util.Vector;

public class s3_2805 {

    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N, M;
        N = scanner.nextInt();
        M = scanner.nextInt();

        int [] trees = new int[N];  // vector 사용하니 시간초과뜸

        int max = 0;
        for (int i = 0; i < N; i++){
            trees[i] = scanner.nextInt();
            if (trees[i] > max) {
                max = trees[i];
            }
        }

        // 이분탐색
        int mid = 0;
        int min = 0;
        while(min < max){
            mid = (max + min) / 2;

            // 자른다
            long sum = 0;
            for (int i = 0; i < N; i++){
                if(trees[i] > mid)
                    sum += trees[i] - mid;
            }

            if(sum < M){
                max = mid;
            }else{
                min = mid + 1; // 하한 증가
            }

        }
        System.out.println(min - 1);    // upper bound
    }
}
