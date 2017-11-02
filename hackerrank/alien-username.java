public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = (Integer.parseInt(in.nextLine()));

        Pattern pattern = Pattern.compile("^_\\d+[a-zA-Z]*_{0,1}$");

        for (int i = 0; i < n; i++) {
            String input = in.next();
            Matcher matcher = pattern.matcher(input);
            if (matcher.find()) System.out.println("VALID");
            else System.out.println("INVALID");
        }
    }
}
