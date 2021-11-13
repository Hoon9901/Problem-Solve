import java.util.Scanner;
import java.util.Vector;

public class s5_7568 {

    static Scanner scanner = new Scanner(System.in);

    static class Pair {
        public int height;
        public int weight;
        public Pair(int h, int w){
            this.height = h;
            this.weight = w;
        }
    }

    public static void main(String[] args) {
        int N = scanner.nextInt();
        Vector<Pair> peoples = new Vector<>();

        for (int i = 0; i < N; i++){
            int h = scanner.nextInt();
            int w = scanner.nextInt();
            peoples.add(new Pair(h, w));
        }

        for(int i = 0; i < N; i++){
            int rank = 1;
            Pair people = peoples.elementAt(i);

            for(int j = 0; j < N; j++){
                if(i == j)
                    continue;
                Pair another = peoples.elementAt(j);

                if(people.height < another.height){
                    if(people.weight < another.weight){
                        rank++;
                    }
                }
            }
            System.out.println(rank);
        }

    }
}
