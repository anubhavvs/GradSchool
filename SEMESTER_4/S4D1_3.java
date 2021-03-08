import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Logging {
    public static void main(String[] args) throws IOException {
        System.out.print("Enter username: ");
        BufferedReader r1 = new BufferedReader(new InputStreamReader(System.in));
        String username = r1.readLine();
        System.out.print("Enter password: ");
        BufferedReader r2 = new BufferedReader(new InputStreamReader(System.in));
        String password = r2.readLine();
        System.out.println("Username: "+username+"\nPassword: "+password);
    }
}