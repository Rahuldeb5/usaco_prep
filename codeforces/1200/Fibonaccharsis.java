import java.util.*;
 
public class Fibonaccharsis {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        while(t-- > 0) {
            long n, k;
            n = sc.nextLong();
            k = sc.nextLong();
 
            if(k > 28) {    //largest possible value for k
                System.out.println(0);
                continue; // moves on to the next iteration
            }
 
            long a = 0, aprev, anext;   // the current, 2nd previous, 1st previous #s in fibonacci seq
            aprev = 0; anext = 1;
            
            for(int i=3; i<=k; i++) {
                a = aprev + anext;
                aprev = anext; anext = a;
            }
 
            // NOTE: a = b (from by)    AND     aprev = a (from ax)
 
            long num = 0;
 
            for(long i=0; i<=n/aprev; i++) {
                long temp = n;
                temp -= (aprev*i);
 
                if(((temp % a) == 0) && ((temp / a) >= i)) {
                    num++;
                }
            }
 
            System.out.println(num);            
        }
 
        sc.close();
    }
}
