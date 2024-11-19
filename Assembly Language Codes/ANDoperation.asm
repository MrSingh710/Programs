; 2022BCSE019
; AND & OR operations

START:   MVI B, 5         
         MVI C, 0   
     
; AND operation
         MOV A, B         
         ANA C            
         STA 0

; OR operation
         MOV A, B         
         ORA C            
         STA 001          

HLT*