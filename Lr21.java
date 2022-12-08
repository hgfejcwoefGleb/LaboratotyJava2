import java.util.Scanner;
import java.util.regex.*;
public class Mainjava22 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       System.out.println("Введите дату в формате дд/мм/гг");
        String data;
        data = sc.nextLine();//ошибки ввода
        char[] myArrayOfYear = new char[4];
        char[] myArrayOfDay = new char[2];
        char[] myArrayOfMonth = new char[2];
        String wrongPattern = "(\\d{2}).(\\d{2}).\\d{4}";
        String rightPattern = "(\\d{2})\\/(\\d{2})\\/(\\d{4})";
        Pattern DifBeetDataAndRight = Pattern.compile(rightPattern);
        Pattern DifBeetDataAndwrong = Pattern.compile(wrongPattern);
        Matcher m = DifBeetDataAndRight.matcher(data);
        if (m.matches() == true)
           System.out.println(data+"Зетс гуд");
            else {
                Matcher c = DifBeetDataAndwrong.matcher(data);
                    if (c.matches() == true)
                        System.out.println("Неверный формат данных");
                        else {
                            System.out.println("Обшибка");

            }
        }
        data.getChars(6,10,myArrayOfYear,0);
            System.out.println(myArrayOfYear);
        int year = Integer.parseInt(String.valueOf(myArrayOfYear));
if(year < 1900)
    System.out.println("Введите год от 1900 до 9999");//зациклить на еще один ввод
        System.out.println(year);
data.getChars(3,5, myArrayOfMonth, 0);
int month = Integer.parseInt(String.valueOf(myArrayOfMonth));
if(month < 1 || month > 12)
    System.out.println("Неверный формат месяца") ;//зациклить на еще один ввод
        int c;
        switch(month) {
            case 1, 3, 5, 7, 8, 10, 12: c = 31;
                break;
            case 4, 6, 9, 11: c = 30;
                break;
            case 2: c = 28;
                break;
            default: c= 0;
            break;
        }
        data.getChars(0,2,myArrayOfDay,0);
        int day = Integer.parseInt(String.valueOf(myArrayOfDay));
        if(c == 28)
        if(day <1 || day >28)
            System.out.println("Неверный формат дня");//зациклить на еще один ввод
        if(c==30)
        if(day<1||day>30)
        System.out.println("Неверный формат дня");
        if(c==31)
        if(day <1 || day >31)
            System.out.println("Неверный формат дня");
    }
}
