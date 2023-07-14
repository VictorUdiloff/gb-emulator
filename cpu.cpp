#include "cpu.h"
#include <iostream> 

void cpu::boot(){

    clock = 0;
    AF = 0;
    BC = 0;
    DE = 0;
    HL = 0;
    SP = 0;
    PC = 0;
    int instructionpointer = 0;
}
void cpu::execute(int code[maxnumberinstructions]){

    for (int i = 0;i < maxnumberinstructions;i++){
        if (this->clock == 0 ){
            this->instructionpointer = code[i];
            this->searchop();
            this-> PC +=1;

        }else{clock = 0;}

    }
}

unsigned char cpu::printt(){

    return ram[0xFF];
}

void cpu::searchop(){
    unsigned short int opshort = ((0xFF000000) & (this->instructionpointer)) / (256*256*256);
    int index = 0;
    for (int i=0;i<maxnumberinstructions;i++){
        if(this->opcodes[i] == opshort){
        index = i;
        (this->*opcodefunctions[index])();
        }
    }

}

void cpu::NOP(){

    ;

}

void cpu::LDBCd16(){
//opcode 0x01xxxx00
    this->BC = ((0x00FFFF00) & (instructionpointer))/(256);
}

void cpu::LDQBCQA(){



}

void cpu::INCBC(){

this->BC += 0x0001;

}

void cpu::INCB(){
//opcode 0x04000000
this->BC += 0x0100;

}

void cpu::DECB(){
//opcode 0x05000000
this->BC -= 0x0100;
this->ram[0xFF] = BC;
}

void cpu::LDBd8(){


    this->BC = ((0x00FF0000) & (instructionpointer))/(256);

}

void cpu::RLCA(){

;

}

void cpu::LDQa16SP(){

;

}

