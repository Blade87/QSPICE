// Automatically generated .v file on Fri Feb  9 12:57:31 2024
//

module input_logic ( out1, out2 ) ;
// You will probably want to flush out the nature of these port declarations:
   output real out1;
   output real out2;

   // Implement the module here
   assign out1 = 0;
   assign out2 = 0;
   #100
   assign out1 = 1;
   assign out2 = 0;
   #100
   assign out1 = 0;
   assign out2 = 1;
   #100
   assign out1 = 1;
   assign out2 = 1;
   #100


endmodule
