import java.util.Scanner;

class CustomerBill {
    public static void main(String[] args) {
        double tax = 8.25/100;
        double TV_price = 400.00;
	    double VCR_price = 220.00;
	    double Remote_Controller_price = 35.20;
	    double CD_Player_price = 300.00;
	    double Tape_Recorder_price = 150.00;

        int TV, VCR, Remote_Controller, CD_Player, Tape_Recorder;
        double subtotal, total, extTV, extVCR, extRemote_Controller, extCD_Player, extTape_Recorder, tax_deduct;

        Scanner sc = new Scanner(System.in);
        System.out.print("How Many TVs Were Sold?: ");
        TV = sc.nextInt();
        System.out.print("How Many VCRs Were Sold?: ");
        VCR = sc.nextInt();
        System.out.print("How Many Remote Controllers Were Sold?: ");
        Remote_Controller = sc.nextInt();
        System.out.print("How Many Cd Players Were Sold?: ");
        CD_Player = sc.nextInt();
        System.out.print("How Many Tape Recorders Were Sold?: ");
        Tape_Recorder = sc.nextInt();

        extTV = TV * TV_price;
        extVCR = VCR * VCR_price;
        extRemote_Controller = Remote_Controller * Remote_Controller_price;
        extCD_Player = CD_Player * CD_Player_price;
        extTape_Recorder = Tape_Recorder * Tape_Recorder_price;

        subtotal = extTV + extVCR + extRemote_Controller + extCD_Player + extTape_Recorder ;
        tax_deduct= tax*subtotal;
        total = subtotal + tax_deduct;

        System.out.println("\tQYT\tDESCRIPTION\t\t\tUNIT PRICE\tTOTAL PRICE");
        System.out.println("-------------------------------------------------------");
        System.out.printf("\t%d\tTV\t\t\t\t\t%.2f\t\t%.2f\n",TV, TV_price, extTV);
        System.out.printf("\t%d\tVCR\t\t\t\t\t%.2f\t\t%.2f\n",VCR, VCR_price, extVCR);
        System.out.printf("\t%d\tRemote Controller\t%.2f\t\t%.2f\n",Remote_Controller, Remote_Controller_price, extRemote_Controller);
        System.out.printf("\t%d\tCD Player\t\t\t%.2f\t\t%.2f\n",CD_Player, CD_Player_price, extCD_Player);
        System.out.printf("\t%d\tTape Recorder\t\t%.2f\t\t%.2f\n\n", Tape_Recorder, Tape_Recorder_price, extTape_Recorder);
        System.out.printf("\tSubtotal: %.2f\n",subtotal);
        System.out.printf("\tTax Amount: %.2f\n", tax_deduct);
        System.out.printf("\tTotal Amount: %.2f\n", total);
    }
}