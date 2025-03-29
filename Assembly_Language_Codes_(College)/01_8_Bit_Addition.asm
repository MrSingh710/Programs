; 2022BCSE019
;Subtraction of 16 two bit-numbers


START:     MVI A, 34H
           MOV C, A
           MVI A, 12H
           SUB C
           MOV L, A
           JNC NO_BORROW

BORROW:    MVI A, 78H
           MOV C, A
           MVI A, 56H
           SUB C
           DCR A
           MOV H, A
           JMP STORE

NO_BORROW: MVI A, 78H
           MOV C, A
           MVI A, 56H
           SUB C
           MOV H, A

STORE:     SHLD 0000
           HLT
