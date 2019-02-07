import java.util.Scanner;
 
class Main{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split("");
        String palindromo = "Si";
        for(int i=0; i<s.length; i++){
            //No se por que no se puede con ==
            if (!s[i].equals(s[s.length-1-i])){
                palindromo = "No";
            }
        }
        System.out.println(palindromo);
    }

}