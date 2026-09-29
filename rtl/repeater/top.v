module top (
    input  wire        CLK100MHZ,
    input  wire [15:0] SW,
    output wire [15:0] LED
);
    reg [26:0] counter = 0;
    always @(posedge CLK100MHZ)
        counter <= counter + 1;

    // LED0 repeats (~0.75 Hz); 
    assign LED = {SW[15:1], counter[26]};
endmodule
