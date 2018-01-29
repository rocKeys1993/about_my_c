import java.util.*;

/*
 * 和C语言对比，因为C中的true和false 是不能当作值赋给变量的。
 */

public class BooleanTest{
    public static void main(String [] args){
        boolean a = true;
        if(a) System.out.println("got a = true");
	else System.out.println("got a = false");
    }
}
