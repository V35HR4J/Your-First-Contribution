import java.util.Scanner;

public class EncryptorAndDecrptor {
    public static void main(String[] args){
        int x= 3;
        Scanner scan = new Scanner(System.in);

        System.out.println("Select the Option \nEncrypter (Enter 1 & Submit) or \nDecrypter(Enter 2 & Submit)");
        String selector = scan.nextLine();

        switch (selector){
            case "1":
                System.out.println("Enter the message you want to Encrypt");
                String ss = scan.nextLine();

                for(int i=0;i<ss.length(); i++) {
                    if(ss.charAt(i) != ' '){

                        char c = ss.charAt(i);

                        if('A'<= c && 'Z'>=c){
                            int t = ((int)c - 65+x)%26;
                            System.out.print((char)(65+t));
                        }else{
                            int t = ((int)c - 97+x)%26;
                            System.out.print((char)(97+t));
                        }

                    }else System.out.print(" ");
                }
                break;
            case "2":
                System.out.println("Enter the message you want to Decrypt");
                String ss2 = scan.nextLine();

                for(int i=0;i<ss2.length(); i++) {
                    if(ss2.charAt(i) != ' '){

                        char c = ss2.charAt(i);

                        if('A'<= c && 'Z'>=c){
                            int t = ((int)c -65 -x)%26;
                            int t2 = t >=0 ? t : 26+t;
                            System.out.print((char)(65+t2));
                        }else{
                            int t = ((int)c -97 -x)%26;
                            int t2 = t >=0 ? t : 26+t;
                            System.out.print((char)(97+t2));
                        }

                    }else System.out.print(" ");
                }
                break;
             default:
                 System.out.println("wrong Entry");
        }


    }
}
