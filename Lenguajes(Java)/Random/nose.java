import java.util.Random;
public class nose {
    static public void main(String[] args)
    {
        Random rand=new Random();
        int a;
        a=rand.nextInt(10);
        System.out.println("la cantidad de alumnos es de: "+a);
        int[] cal;
        cal=new int[1000];
        
        for(int i=0;i<a+1;i++)
        {
            System.out.print("alumno: "+i+ " sacaste:");
            cal[i]=rand.nextInt(10);
            switch(cal[i])
            {
                case 1: 
                System.out.println("scaste 1");;
                System.out.println("reprobaste");;
                break;
                case 2: 
                System.out.println("sacaste 2");;
                System.out.println("reprobaste");;
                break;              
                 case 3: 
                System.out.println("sacaste 3");;
                System.out.println("reprobaste");;
                break;
                case 4: 
                System.out.println("sacaste 4");;
                System.out.println("reprobaste");;
                break;
                case 5: 
                System.out.println("sacaste 5");;
                System.out.println("reprobaste");;
                break;
                case 6: 
                System.out.println("sacaste 6");;
                System.out.println("reprobaste");;
                break;
                case 7: 
                System.out.println("sacaste 7");;
                System.out.println("aprobaste");;
                break;
                case 8: 
                System.out.println("sacaste 8");;
                System.out.println("aprobaste");;
                break;
                case 9: 
                System.out.println("sacaste 9");;
                System.out.println("aprobaste");;
                break;
                case 10: 
                System.out.println("sacaste 10");;
                System.out.println("aprobaste");;
                break;
            }
        }
    }
}
