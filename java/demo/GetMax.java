import java.util.*;
import java.lang.Integer;

/*
 * main函数的agrs 参数，用来接收 java 命令传入的参数 :  shell :> java GetMax args
 * getMaxNumber 直接return 三目运算的结果。
 *
 *
 */
public class GetMax{

    public static void main(String[] args){
        String x = args[0];
        String y = args[1];
        System.out.println(x+" compare "+y);
        int a = Integer.parseInt(x);
        int b = Integer.parseInt(y);
        System.out.println(Integer.toString(new GetMax().getMaxNumber(a,b)));
    }

    public int getMaxNumber(int x , int y){
    /*
        if(x > y){
            return x;
        }else{
            return y;
        }
    */
        return x > y ? x : y ;
    }

}
