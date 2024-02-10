// Automatically generated .v file on Sat Feb 10 11:23:58 2024
//

module verilog_test ( in0, out0 ) ;
// You will probably want to flush out the nature of these port declarations:
   input reg in0;
   output real out0;

   // Implement the module here
   reg temp = 0;
   always @(posedge in0)
   begin
      temp = ~temp;
      out0 = temp;
   end

endmodule
