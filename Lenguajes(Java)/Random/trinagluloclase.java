public class trinagluloclase {

            int a,b,c;
            trinagluloclase(int a, int b, int c)
            {
                this.a=a;
                this.b=b;
                this.c=c;
            }
            String tipo()
            {
                String valor =new String();
                if((a==b) && (c==b))
                {
                    System.out.println("es equilatero");
                }
                if((a==b) || (c==b))
                {
                    System.out.println("es isoseles");
                }
                if((a!=b) && (c!=b))
                {
                    System.out.println("es ecaleno");
                }
                return valor;
            }
        }


