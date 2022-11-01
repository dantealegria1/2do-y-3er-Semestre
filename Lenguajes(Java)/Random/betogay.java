import java.util.Random;
public class betogay {
    static public void main(String[] args)
    {
        Random rand=new Random();
        int[] cal;
        cal=new int[1000];
        int reprobado=0;
        int n7=0;
        int n8=0;
        int n9=0;
        int n10=0;
        for(int i=0;i<1000;i++)
        {
            cal[i]=rand.nextInt(11);
            switch(cal[i])
            {
                case 0:
                reprobado=reprobado+1;
                break;
                case 1:
                reprobado=reprobado+1;
                break;
                case 2:
                reprobado=reprobado+1;
                break;
                case 3:
                reprobado=reprobado+1;
                break;
                case 4:
                reprobado=reprobado+1;
                break;
                case 5:
                reprobado=reprobado+1;
                break;
                case 6:
                reprobado=reprobado+1;
                break;
                case 7:
                n7=n7+1;
                break;
                case 8:
                n8=n8+1;
                break;
                case 9:
                n9=n9+1;
                break;
                case 10:
                n10=n10+1;
                break;
            }

        }  
        System.out.println("_______________________________");
        System.out.println("reprobados: "+reprobado);
        System.out.println("alumnos con calificacion 7: "+n7);
        System.out.println("alumnos con calificacion 8: "+n8);
        System.out.println("alumnos con calificacion 9: "+n9);
        System.out.println("alumnos con calificacion 10: "+n10);
        System.out.println("_______________________________");
        System.out.println("total de alumnos: "+(reprobado+n7+n8+n9+n10));
    }
}
