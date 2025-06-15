module led_blink(
    input clk,    // clk stand for clock and is the oscillates between 0 and 1.
    output reg led // reg is a type that can hold a value, and is used in seq logic.
    );

reg [31:0]count; // 32  bit wide register.

always @(posedge clk) begin

if(count == 9) begin //Time is up
    count <= 0;             //Reset count register
    led <= ~led;            //Toggle led (in each second), with the bitwise not.
end else begin
    count <= count + 1;     //Counts 100MHz clock
    end

end

endmodule
