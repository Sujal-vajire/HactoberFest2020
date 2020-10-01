module mux16to1(in, sel, out);
  input [15:0] in;
  input [3:0] sel;
  output out;
  assign out=in[sel];
endmodule;

module testbench;
  reg [15:0] A; //input
  reg [3:0] S; //select lines
  wire F;
  mux16to1 M(.in(A), .sel(S), .out(F));
  initial
    begin
      $dumpfile("mux16to1.vcd");
      $dumpvars(0, testbench);
      $monitor($time, "A=%h, S=%h, F=%b", A,S, F);
      #5 A=16'h30FA; S=4'h0;
      #5 S=4'h1;
      #5 $finish;
    end
endmodule
