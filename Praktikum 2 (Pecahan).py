public class Praktikumpecahan {
    public int pembilang;
    public int penyebut;    

    
    //constructor
    public Praktikumpecahan(int pembilang, int penyebut){
        this.pembilang = pembilang;
        this.penyebut = penyebut;
    }
    
    public int getpembilang(){
        return pembilang;
    }
    
    public int getpenyebut(){
        return penyebut;
    }
    
    //function
    public Praktikumpecahan tambah(Praktikumpecahan p){
        int atas;
        int bawah;
        
//pecahan pertama

        Praktikumpecahan pertama;
        pertama = p;
        
        atas=p.pembilang;
        bawah=p.penyebut;
        
//pecahan 2 
       Praktikumpecahan kedua= new Praktikumpecahan (5,6);
        System.out.println("kedua = " + kedua.getpembilang() + "/" + kedua.getpenyebut());
        System.out.println("\n");
        
        //rumus dan syarat 
        if(bawah == kedua.penyebut){
        p.pembilang = atas + kedua.pembilang;
        p.penyebut = bawah;
        } else {
            p.pembilang =(kedua.penyebut * atas ) + (bawah * kedua.pembilang);
            p.penyebut = bawah * kedua.penyebut;
        }
         return p;
    }