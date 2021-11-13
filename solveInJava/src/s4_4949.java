import java.nio.file.LinkPermission;
import java.util.Scanner;
import java.util.Stack;

public class s4_4949 {

    static Scanner scanner = new Scanner(System.in);

    static String find(String input) {
        Stack<Character> stack = new Stack<Character>();

        for(int i = 0; i < input.length(); i++){
            char now = input.charAt(i);

            if(now == '(' || now == '['){
                stack.push(now);
            } else if (now == ')') {
                if (stack.isEmpty() || stack.peek() != '(') {
                    return "no";
                }
                else {
                    stack.pop();
                }
            } else if (now == ']') {
                if (stack.isEmpty() || stack.peek() != '[') {
                    return "no";
                }else{
                    stack.pop();
                }
            }
        }
        if(stack.isEmpty())
            return "yes";
        else
            return "no";

    }

    public static void main(String[] args) {
        String input = "";
        while(true){
            input = scanner.nextLine();

            if(input.isEmpty() || input.charAt(0) == '.')
                break;

            System.out.println(find(input));
        }
    }
}
