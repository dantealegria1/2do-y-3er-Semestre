import java.util.StringTokenizer;

public class OrdenarValores {
    public static void main(String[] args)
        {
            
            //nuestras variables sumaTotal y CantidadValoresTotal 
            //son para almacenar los valores de la suma y la cantidad de valores
            //y ya despues sacar el promedio

            int SumaTotalHombres=0;
            int SumaTotalMujeres=0;
            int CantidadValoresTotalHombres=0;
            int CantidadValoresTotalMujeres=0;

            int sumaHombres1=0;
            int sumaHombres2=0;
            int sumaHombres3=0;
            int sumaHombres4=0;
            int sumaHombres5=0;
            int sumaHombres6=0;
            int sumaHombres7=0;
            int sumaHombres8=0;
            int sumaHombres9=0;
            int sumaHombres10=0;
            int sumaHombres11=0;
            int sumaHombres12=0;
            int sumaHombres13=0;
            int sumaHombres14=0;
            int sumaHombres15=0;
            int sumaHombres16=0;
            int sumaHombres17=0;
            int sumaHombres18=0;
            int sumaHombres19=0;
            int sumaHombres20=0;
            int sumaHombres21=0;
            int sumaHombres22=0;
            int sumaHombres23=0;
            int sumaHombres24=0;
            int sumaHombres25=0;
            int sumaHombres26=0;
            int sumaHombres27=0;
            int sumaHombres28=0;
            int sumaHombres29=0;
            int sumaHombres30=0;
            int sumaHombres31=0;
            int sumaHombres32=0;

            int sumaMujeres1=0;
            int sumaMujeres2=0;
            int sumaMujeres3=0;
            int sumaMujeres4=0;
            int sumaMujeres5=0;
            int sumaMujeres6=0;
            int sumaMujeres7=0;
            int sumaMujeres8=0;
            int sumaMujeres9=0;
            int sumaMujeres10=0;
            int sumaMujeres11=0;
            int sumaMujeres12=0;
            int sumaMujeres13=0;
            int sumaMujeres14=0;
            int sumaMujeres15=0;
            int sumaMujeres16=0;
            int sumaMujeres17=0;
            int sumaMujeres18=0;
            int sumaMujeres19=0;
            int sumaMujeres20=0;
            int sumaMujeres21=0;
            int sumaMujeres22=0;
            int sumaMujeres23=0;
            int sumaMujeres24=0;
            int sumaMujeres25=0;
            int sumaMujeres26=0;
            int sumaMujeres27=0;
            int sumaMujeres28=0;
            int sumaMujeres29=0;
            int sumaMujeres30=0;
            int sumaMujeres31=0;
            int sumaMujeres32=0;

            int cantidadValoresM1=0;
            int cantidadValoresM2=0;
            int cantidadValoresM3=0;
            int cantidadValoresM4=0;
            int cantidadValoresM5=0;
            int cantidadValoresM6=0;
            int cantidadValoresM7=0;
            int cantidadValoresM8=0;
            int cantidadValoresM9=0;
            int cantidadValoresM10=0;
            int cantidadValoresM11=0;
            int cantidadValoresM12=0;
            int cantidadValoresM13=0;
            int cantidadValoresM14=0;
            int cantidadValoresM15=0;
            int cantidadValoresM16=0;
            int cantidadValoresM17=0;
            int cantidadValoresM18=0;
            int cantidadValoresM19=0;
            int cantidadValoresM20=0;
            int cantidadValoresM21=0;
            int cantidadValoresM22=0;
            int cantidadValoresM23=0;
            int cantidadValoresM24=0;
            int cantidadValoresM25=0;
            int cantidadValoresM26=0;
            int cantidadValoresM27=0;
            int cantidadValoresM28=0;
            int cantidadValoresM29=0;
            int cantidadValoresM30=0;
            int cantidadValoresM31=0;
            int cantidadValoresM32=0;

            int cantidadValoresH1=0;
            int cantidadValoresH2=0;
            int cantidadValoresH3=0;
            int cantidadValoresH4=0;
            int cantidadValoresH5=0;
            int cantidadValoresH6=0;
            int cantidadValoresH7=0;
            int cantidadValoresH8=0;
            int cantidadValoresH9=0;
            int cantidadValoresH10=0;
            int cantidadValoresH11=0;
            int cantidadValoresH12=0;
            int cantidadValoresH13=0;
            int cantidadValoresH14=0;
            int cantidadValoresH15=0;
            int cantidadValoresH16=0;
            int cantidadValoresH17=0;
            int cantidadValoresH18=0;
            int cantidadValoresH19=0;
            int cantidadValoresH20=0;
            int cantidadValoresH21=0;
            int cantidadValoresH22=0;
            int cantidadValoresH23=0;
            int cantidadValoresH24=0;
            int cantidadValoresH25=0;
            int cantidadValoresH26=0;
            int cantidadValoresH27=0;
            int cantidadValoresH28=0;
            int cantidadValoresH29=0;
            int cantidadValoresH30=0;
            int cantidadValoresH31=0;
            int cantidadValoresH32=0;

            int promedioHombres1=(sumaHombres1/cantidadValoresH1);
            int promedioHombres2=(sumaHombres2/cantidadValoresH2);
            int promedioHombres3=(sumaHombres3/cantidadValoresH3);
            int promedioHombres4=(sumaHombres4/cantidadValoresH4);
            int promedioHombres5=(sumaHombres5/cantidadValoresH5);
            int promedioHombres6=(sumaHombres6/cantidadValoresH6);
            int promedioHombres7=(sumaHombres7/cantidadValoresH7);
            int promedioHombres8=(sumaHombres8/cantidadValoresH8);
            int promedioHombres9=(sumaHombres9/cantidadValoresH9);
            int promedioHombres10=(sumaHombres10/cantidadValoresH10);
            int promedioHombres11=(sumaHombres11/cantidadValoresH11);
            int promedioHombres12=(sumaHombres12/cantidadValoresH12);
            int promedioHombres13=(sumaHombres13/cantidadValoresH13);
            int promedioHombres14=(sumaHombres14/cantidadValoresH14);
            int promedioHombres15=(sumaHombres15/cantidadValoresH15);
            int promedioHombres16=(sumaHombres16/cantidadValoresH16);
            int promedioHombres17=(sumaHombres17/cantidadValoresH17);
            int promedioHombres18=(sumaHombres18/cantidadValoresH18);
            int promedioHombres19=(sumaHombres19/cantidadValoresH19);
            int promedioHombres20=(sumaHombres20/cantidadValoresH20);
            int promedioHombres21=(sumaHombres21/cantidadValoresH21);
            int promedioHombres22=(sumaHombres22/cantidadValoresH22);
            int promedioHombres23=(sumaHombres23/cantidadValoresH23);
            int promedioHombres24=(sumaHombres24/cantidadValoresH24);
            int promedioHombres25=(sumaHombres25/cantidadValoresH25);
            int promedioHombres26=(sumaHombres26/cantidadValoresH26);
            int promedioHombres27=(sumaHombres27/cantidadValoresH27);
            int promedioHombres28=(sumaHombres28/cantidadValoresH28);
            int promedioHombres29=(sumaHombres29/cantidadValoresH29);
            int promedioHombres30=(sumaHombres30/cantidadValoresH30);
            int promedioHombres31=(sumaHombres31/cantidadValoresH31);
            int promedioHombres32=(sumaHombres32/cantidadValoresH32);

            int promedioMujeres1=(sumaMujeres1/cantidadValoresM1);
            int promedioMujeres2=(sumaMujeres2/cantidadValoresM2);
            int promedioMujeres3=(sumaMujeres3/cantidadValoresM3);
            int promedioMujeres4=(sumaMujeres4/cantidadValoresM4);
            int promedioMujeres5=(sumaMujeres5/cantidadValoresM5);
            int promedioMujeres6=(sumaMujeres6/cantidadValoresM6);
            int promedioMujeres7=(sumaMujeres7/cantidadValoresM7);
            int promedioMujeres8=(sumaMujeres8/cantidadValoresM8);
            int promedioMujeres9=(sumaMujeres9/cantidadValoresM9);
            int promedioMujeres10=(sumaMujeres10/cantidadValoresM10);
            int promedioMujeres11=(sumaMujeres11/cantidadValoresM11);
            int promedioMujeres12=(sumaMujeres12/cantidadValoresM12);

            int promedioMujeres13=(sumaMujeres13/cantidadValoresM13);
            int promedioMujeres14=(sumaMujeres14/cantidadValoresM14);
            int promedioMujeres15=(sumaMujeres15/cantidadValoresM15);
            int promedioMujeres16=(sumaMujeres16/cantidadValoresM16);
            int promedioMujeres17=(sumaMujeres17/cantidadValoresM17);
            int promedioMujeres18=(sumaMujeres18/cantidadValoresM18);
            int promedioMujeres19=(sumaMujeres19/cantidadValoresM19);
            int promedioMujeres20=(sumaMujeres20/cantidadValoresM20);
            int promedioMujeres21=(sumaMujeres21/cantidadValoresM21);
            int promedioMujeres22=(sumaMujeres22/cantidadValoresM22);
            int promedioMujeres23=(sumaMujeres23/cantidadValoresM23);
            int promedioMujeres24=(sumaMujeres24/cantidadValoresM24);
            int promedioMujeres25=(sumaMujeres25/cantidadValoresM25);
            int promedioMujeres26=(sumaMujeres26/cantidadValoresM26);
            int promedioMujeres27=(sumaMujeres27/cantidadValoresM27);
            int promedioMujeres28=(sumaMujeres28/cantidadValoresM28);
            int promedioMujeres29=(sumaMujeres29/cantidadValoresM29);
            int promedioMujeres30=(sumaMujeres30/cantidadValoresM30);
            int promedioMujeres31=(sumaMujeres31/cantidadValoresM31);
            int promedioMujeres32=(sumaMujeres32/cantidadValoresM32);
            //Primero vemos nuestro renglon 
            //ReplaceFrase solo es una variable auxiliar para ayudarnos a reemplazar 
            //los caracteres que no queremos, que son las comillas y las M y H
            //Para despues regresarlo a su variable original

            String frase=("'M',24,272,363,12/'H',24,272,363/'M',21,413/'H',24,312/'H',24,221");
            //reemplazar dobles comillas
            String ReplaceFrase=frase.replace("\"", "");
            String Replacefrase=frase.replace("'","");
            Replacefrase=Replacefrase.replace("M","1");
            Replacefrase=Replacefrase.replace("H","2");
            frase=Replacefrase;

            //Ahora vemos nuestro separador que es la diagonal aqui
            //en el codigo solo se tendira que cambiar por el salto de linea
            //para que funcione con el archivo de texto

            StringTokenizer st = new StringTokenizer(frase, "/");

            //Ahora vemos nuestro ciclo que nos ayudara a recorrer cada renglon

            while(st.hasMoreTokens())
            {
                //En esta variable auxiliar se almacenara cada renglon
                //cantidadcomas es igual para saber cuantos valores hay en cada renglon

                String token = st.nextToken();
                int cantiadadComas=0;

                //Este ciclo nos ayudara a saber cuantos valores hay en cada renglon

                for(int i=0;i<token.length();i++)
                {
                    if(token.charAt(i)==',')
                    {
                        cantiadadComas++;
                    }
                }

                //Aqui separamos los valores de cada renglon y los almacenamos en un arreglo
                //de comas +1 por que seria el numero de datos

                String[] valores = token.split(",");
                int[] valoresInt = new int[cantiadadComas+1];

                //Aqui convertimos los valores de String a int

                for(int i = 0; i < valores.length; i++)
                {
                    valoresInt[i] = Integer.parseInt(valores[i]);
                }

                //Aqui sumamos los valores despues de la segunda posicion
                //ya que la primera posicion es el genero y la segunda es el estado
                //y cada que de una vuelta sume 1 a la cantidad de valores para
                //saber cuantos valores hay en total y sacar promedio

                int suma=0;
                int cantidadValores=0;
                for(int i = 2; i < valoresInt.length; i++)
                {
                        suma+=valoresInt[i];
                        cantidadValores++;
                }


                //Aqui separamos si es hombre o mujer y sumamos los valores
                //y la cantidad de valores para despues sacar el promedio

                if(valoresInt[0]==1)
                {
                    SumaTotalMujeres+=suma;
                    CantidadValoresTotalMujeres+=cantidadValores;

                    //Aqui separamos por estado y sumamos los valores
                    //y la cantidad de valores para despues sacar el promedio
                    if(valoresInt[1]==1)
                    {
                        sumaMujeres1+=suma;
                        cantidadValoresM1+=cantidadValores;
                    }
                    else if(valoresInt[1]==2)
                    {
                        sumaMujeres2+=suma;
                        cantidadValoresM2+=cantidadValores;
                    }
                    else if(valoresInt[1]==3)
                    {
                        sumaMujeres3+=suma;
                        cantidadValoresM3+=cantidadValores;
                    }
                    else if(valoresInt[1]==4)
                    {
                        sumaMujeres4+=suma;
                        cantidadValoresM4+=cantidadValores;
                    }
                    else if(valoresInt[1]==5)
                    {
                        sumaMujeres5+=suma;
                        cantidadValoresM5+=cantidadValores;
                    }
                    else if(valoresInt[1]==6)
                    {
                        sumaMujeres6+=suma;
                        cantidadValoresM6+=cantidadValores;
                    }
                    else if(valoresInt[1]==7)
                    {
                        sumaMujeres7+=suma;
                        cantidadValoresM7+=cantidadValores;
                    }
                    else if(valoresInt[1]==8)
                    {
                        sumaMujeres8+=suma;
                        cantidadValoresM8+=cantidadValores;
                    }
                    else if(valoresInt[1]==9)
                    {
                        sumaMujeres9+=suma;
                        cantidadValoresM9+=cantidadValores;
                    }
                    else if(valoresInt[1]==10)
                    {
                        sumaMujeres10+=suma;
                        cantidadValoresM10+=cantidadValores;
                    }
                    else if(valoresInt[1]==11)
                    {
                        sumaMujeres11+=suma;
                        cantidadValoresM11+=cantidadValores;
                    }
                    else if(valoresInt[1]==12)
                    {
                        sumaMujeres12+=suma;
                        cantidadValoresM12+=cantidadValores;
                    }
                    else if(valoresInt[1]==13)
                    {
                        sumaMujeres13+=suma;
                        cantidadValoresM13+=cantidadValores;
                    }
                    else if(valoresInt[1]==14)
                    {
                        sumaMujeres14+=suma;
                        cantidadValoresM14+=cantidadValores;
                    }
                    else if(valoresInt[1]==15)
                    {
                        sumaMujeres15+=suma;
                        cantidadValoresM15+=cantidadValores;
                    }
                    else if(valoresInt[1]==16)
                    {
                        sumaMujeres16+=suma;
                        cantidadValoresM16+=cantidadValores;
                    }
                    else if(valoresInt[1]==17)
                    {
                        sumaMujeres17+=suma;
                        cantidadValoresM17+=cantidadValores;
                    }
                    else if(valoresInt[1]==18)
                    {
                        sumaMujeres18+=suma;
                        cantidadValoresM18+=cantidadValores;
                    }
                    else if(valoresInt[1]==19)
                    {
                        sumaMujeres19+=suma;
                        cantidadValoresM19+=cantidadValores;
                    }
                    else if(valoresInt[1]==20)
                    {
                        sumaMujeres20+=suma;
                        cantidadValoresM20+=cantidadValores;
                    }
                    else if(valoresInt[1]==21)
                    {
                        sumaMujeres21+=suma;
                        cantidadValoresM21+=cantidadValores;
                    }
                    else if(valoresInt[1]==22)
                    {
                        sumaMujeres22+=suma;
                        cantidadValoresM22+=cantidadValores;
                    }
                    else if(valoresInt[1]==23)
                    {
                        sumaMujeres23+=suma;
                        cantidadValoresM23+=cantidadValores;
                    }
                    else if(valoresInt[1]==24)
                    {
                        sumaMujeres24+=suma;
                        cantidadValoresM24+=cantidadValores;
                    }
                    else if(valoresInt[1]==25)
                    {
                        sumaMujeres25+=suma;
                        cantidadValoresM25+=cantidadValores;
                    }
                    else if(valoresInt[1]==26)
                    {
                        sumaMujeres26+=suma;
                        cantidadValoresM26+=cantidadValores;
                    }
                    else if(valoresInt[1]==27)
                    {
                        sumaMujeres27+=suma;
                        cantidadValoresM27+=cantidadValores;
                    }
                    else if(valoresInt[1]==28)
                    {
                        sumaMujeres28+=suma;
                        cantidadValoresM28+=cantidadValores;
                    }
                    else if(valoresInt[1]==29)
                    {
                        sumaMujeres29+=suma;
                        cantidadValoresM29+=cantidadValores;
                    }
                    else if(valoresInt[1]==30)
                    {
                        sumaMujeres30+=suma;
                        cantidadValoresM30+=cantidadValores;
                    }
                    else if(valoresInt[1]==31)
                    {
                        sumaMujeres31+=suma;
                        cantidadValoresM31+=cantidadValores;
                    }
                    else if(valoresInt[1]==32)
                    {
                        sumaMujeres32+=suma;
                        cantidadValoresM32+=cantidadValores;
                    }
                }
                else
                {
                    SumaTotalHombres+=suma;
                    CantidadValoresTotalHombres+=cantidadValores;
                    if(valoresInt[1]==1)
                    {
                        sumaHombres1+=suma;
                        cantidadValoresH1+=cantidadValores;
                    }
                    else if(valoresInt[1]==2)
                    {
                        sumaHombres2+=suma;
                        cantidadValoresH2+=cantidadValores;
                    }
                    else if(valoresInt[1]==3)
                    {
                        sumaHombres3+=suma;
                        cantidadValoresH3+=cantidadValores;
                    }
                    else if(valoresInt[1]==4)
                    {
                        sumaHombres4+=suma;
                        cantidadValoresH4+=cantidadValores;
                    }
                    else if(valoresInt[1]==5)
                    {
                        sumaHombres5+=suma;
                        cantidadValoresH5+=cantidadValores;
                    }
                    else if(valoresInt[1]==6)
                    {
                        sumaHombres6+=suma;
                        cantidadValoresH6+=cantidadValores;
                    }
                    else if(valoresInt[1]==7)
                    {
                        sumaHombres7+=suma;
                        cantidadValoresH7+=cantidadValores;
                    }
                    else if(valoresInt[1]==8)
                    {
                        sumaHombres8+=suma;
                        cantidadValoresH8+=cantidadValores;
                    }
                    else if(valoresInt[1]==9)
                    {
                        sumaHombres9+=suma;
                        cantidadValoresH9+=cantidadValores;
                    }
                    else if(valoresInt[1]==10)
                    {
                        sumaHombres10+=suma;
                        cantidadValoresH10+=cantidadValores;
                    }
                    else if(valoresInt[1]==11)
                    {
                        sumaHombres11+=suma;
                        cantidadValoresH11+=cantidadValores;
                    }
                    else if(valoresInt[1]==12)
                    {
                        sumaHombres12+=suma;
                        cantidadValoresH12+=cantidadValores;
                    }
                    else if(valoresInt[1]==13)
                    {
                        sumaHombres13+=suma;
                        cantidadValoresH13+=cantidadValores;
                    }
                    else if(valoresInt[1]==14)
                    {
                        sumaHombres14+=suma;
                        cantidadValoresH14+=cantidadValores;
                    }
                    else if(valoresInt[1]==15)
                    {
                        sumaHombres15+=suma;
                        cantidadValoresH15+=cantidadValores;
                    }
                    else if(valoresInt[1]==16)
                    {
                        sumaHombres16+=suma;
                        cantidadValoresH16+=cantidadValores;
                    }
                    else if(valoresInt[1]==17)
                    {
                        sumaHombres17+=suma;
                        cantidadValoresH17+=cantidadValores;
                    }
                    else if(valoresInt[1]==18)
                    {
                        sumaHombres18+=suma;
                        cantidadValoresH18+=cantidadValores;
                    }
                    else if(valoresInt[1]==19)
                    {
                        sumaHombres19+=suma;
                        cantidadValoresH19+=cantidadValores;
                    }
                    else if(valoresInt[1]==20)
                    {
                        sumaHombres20+=suma;
                        cantidadValoresH20+=cantidadValores;
                    }
                    else if(valoresInt[1]==21)
                    {
                        sumaHombres21+=suma;
                        cantidadValoresH21+=cantidadValores;
                    }
                    else if(valoresInt[1]==22)
                    {
                        sumaHombres22+=suma;
                        cantidadValoresH22+=cantidadValores;
                    }
                    else if(valoresInt[1]==23)
                    {
                        sumaHombres23+=suma;
                        cantidadValoresH23+=cantidadValores;
                    }
                    else if(valoresInt[1]==24)
                    {
                        sumaHombres24+=suma;
                        cantidadValoresH24+=cantidadValores;
                    }
                    else if(valoresInt[1]==25)
                    {
                        sumaHombres25+=suma;
                        cantidadValoresH25+=cantidadValores;
                    }
                    else if(valoresInt[1]==26)
                    {
                        sumaHombres26+=suma;
                        cantidadValoresH26+=cantidadValores;
                    }
                    else if(valoresInt[1]==27)
                    {
                        sumaHombres27+=suma;
                        cantidadValoresH27+=cantidadValores;
                    }
                    else if(valoresInt[1]==28)
                    {
                        sumaHombres28+=suma;
                        cantidadValoresH28+=cantidadValores;
                    }
                    else if(valoresInt[1]==29)
                    {
                        sumaHombres29+=suma;
                        cantidadValoresH29+=cantidadValores;
                    }
                    else if(valoresInt[1]==30)
                    {
                        sumaHombres30+=suma;
                        cantidadValoresH30+=cantidadValores;
                    }
                    else if(valoresInt[1]==31)
                    {
                        sumaHombres31+=suma;
                        cantidadValoresH31+=cantidadValores;
                    }
                    else if(valoresInt[1]==32)
                    {
                        sumaHombres32+=suma;
                        cantidadValoresH32+=cantidadValores;
                    }

                }
            }

            //Aqui lo dividimos entre 2 por que por alguna razon nos da el doble
            //de lo que deberia ser

            CantidadValoresTotalHombres=CantidadValoresTotalHombres/2;
            CantidadValoresTotalMujeres=CantidadValoresTotalMujeres/2;
            System.out.println("Salario total hombres: "+SumaTotalHombres);
            System.out.println("Salario total mujeres: "+SumaTotalMujeres);
            System.out.println("Cantidad de valores hombres: "+CantidadValoresTotalHombres);
            System.out.println("Cantidad de valores mujeres: "+CantidadValoresTotalMujeres);
            System.out.println("Promedio de mujeres: "+(SumaTotalMujeres/CantidadValoresTotalMujeres));
            System.out.println("Promedio de hombres: "+(SumaTotalHombres/CantidadValoresTotalHombres));
            System.out.println("Suma hombres 24: "+sumaHombres24);
            System.out.println("Cantidad valores hombres 24: "+(cantidadValoresH24-1));
            System.out.println("Promedio de hombres 24: "+(sumaHombres24/cantidadValoresH24-1));
}
}
