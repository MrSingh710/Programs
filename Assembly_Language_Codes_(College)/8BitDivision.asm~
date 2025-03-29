<<<<<<< HEAD
MVI A, 0AH
MVI B, 03H
MVI C, 00H
MVI D, 00H

DIV_LOOP:	CMP B

			
=======
; 2022BCSE019
; Division of two 8-bit numbers

START:   MVI B, 28        
         MVI C, 03      
         MVI D, 00        
         MOV A, B         

DIVIDE:  CMP C            
         JC END_DIV       
         SUB C            
         MOV E, A         
         MOV A, D        
         INR A            
         MOV D, A        
         MOV A, E         
         JMP DIVIDE       

END_DIV: STA 1            
         MOV A, D         
         STA 0            
         HLT
>>>>>>> 184ef6cfe (assembly codes)
