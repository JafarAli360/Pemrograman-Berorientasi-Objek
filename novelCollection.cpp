import java.util.Scanner;
public class novelCollection {
	String title, writer, desc;
	int year,buyPrice, sellPrice;
	Scanner scan = new Scanner(System.in);

	//constructor
	novelCollection(String t, String w, String d, int y, int bp){
		this.title = t;
		this.writer = w;
		this.desc = d;
		this.buyPrice = bp;
	}

	void showTitle() {
			System.out.println("Title: " + this.title);
	}

	void showItemData() {
		System.out.println("Title: " + this.title);
		System.out.println("Writer: " + this.writer);
		System.out.println("Descriptions: " + this.desc);
		System.out.println("Year Out: " + this.year);
		System.out.println("Bought Price: " + this.buyPrice);
	}


	public static void main(String[] args) {
		int n = 0, x, bp, y;
		String t, w, d;

		Scanner scan = new Scanner(System.in);
		novelCollection[] obj = new novelCollection[3];

		//input novel description
		System.out.println("Silahkan input data novel");
		while (n < 3){
			x = n+1;
			System.out.println("Data ke-" + x);

			System.out.print("Title: ");
			t = scan.next();
			System.lineSeparator();

			System.out.print("Writer: ");
			w = scan.next();
			System.lineSeparator();

			System.out.print("Descriptions: ");
			d = scan.next();
			System.lineSeparator();

			System.out.print("Years Out: ");
			y = scan.nextInt();
			System.lineSeparator();

			System.out.print("Bought Price: ");
			bp = scan.nextInt();
			System.lineSeparator();
			obj [n] = new novelCollection(t, w, d, y, bp);
			n++;
		}

		System.lineSeparator();
		System.out.println("=================");
		System.out.println("Data List: ");
		System.out.println("=================");
		for(int z = 0; z < 3; z++) {
			obj[z].showItemData();
		}
	}
}
