module helloworldfpga(

    input  wire U,
    input  wire V,
    input  wire W,
    
    output wire F,
    );
     assign U=1;
     assign V=0;
     assign W=0;
    
    always @(*)
    begin
   F=((U&V)|(U&!W)); 
    end
    endmodule
