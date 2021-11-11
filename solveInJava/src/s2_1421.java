import java.util.Scanner;
import java.util.Vector;

public class s2_1421 {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N, C, W;    // 가지고있는 나무 수, 자를 비용, 나무 단위 당 가격
        long result = 0;
        Vector<Integer> trees = new Vector<>();
        N = scanner.nextInt();
        C = scanner.nextInt();
        W = scanner.nextInt();
        // 갖고 있는 나무 입력
        for(int i = 0; i < N; i++){
            int temp;
            temp = scanner.nextInt();
            trees.add(temp);
        }
        for(int length = 1; length <= 10000; length++){    // 나무의 길이
            long sum = 0;
            // length 길이로 나무 자르기
            for(int i = 0; i < N; i++){
                // K * L * W 원 발생
                int slice = trees.elementAt(i) / length; // 자른 나무 개수

                int cost; // 자르는 비용
                if(trees.elementAt(i) % length == 0){
                    cost = trees.elementAt(i) / length - 1;
                }else{
                    cost = trees.elementAt(i) / length;
                }
                // 판매 이득(K *W * L) - COST * C
                long profit = slice * W * length - cost * C;
                if(profit > 0) {    // 흑자만 계산
                    sum += profit;
                }
            }
            result = Math.max(result, sum);
        }
        // 벌수있는 최대 값
        System.out.println(result);
    }
}
