import java.util.*;
/*
 * java 局部变量是必须初始化的。全局变量可以不用初始化。
 * java 的swithc 和C的switch 执行逻辑上来看绝大部分相似。。。
 */
public class SwitchTest{
    char a ;
    public static void main(String [] args){
        String garde = null; 
        System.out.println("garde_init value = " + garde);
        garde = args[0];
        System.out.println("garde_args value = " + garde);
        String result0 = null;
        String result1 = null;
        String result2 = null;
        String result3 = null;
        switch(garde){
            case "A": result0 = "A" ;
            case "B": result1 = "B" ; break ;
            case "C": result2 = "C" ; result2 = "CC";
            case "D": result3 = "D" ; result3 = "DD";
            default : System.out.println("no result");
        }
        System.out.println("result :");
        System.out.println("r0 = " + result0);
        System.out.println("r1 = " + result1);
        System.out.println("r2 = " + result2);
        System.out.println("r3 = " + result3);
    }
}
