public class MoveX {
    static String moveX(String str) {

        if (str.length() == 0) {
            return "";
        }

        char ch = str.charAt(0);
        String ans = moveX(str.substring(1));

        if (ch == 'x') {
            return ans + ch;
        } else {
            return ch + ans;
        }
    }

    public static void main(String[] args) {

        String s = "axbcxxd";
        System.out.println(moveX(s));
    }
}
