#define maxnumberinstructions 3

class cpu{
    
    public:



    void boot();
    void execute(int code[maxnumberinstructions]);
    // Execute one instruction
    void searchop();
    unsigned char printt();

    // RAM
        unsigned char ram[65536];


    private:

    int clock;

    // Registers
        unsigned short int AF;
        unsigned short int BC;
        unsigned short int DE;
        unsigned short int HL;
        unsigned short int SP;
        unsigned short int PC;

    // Virtual register to store current opcode

        int instructionpointer;

    // Arrays with opcodes and functions
    unsigned short int opcodes[3] = {0x01,0x04,0x05};
    void (cpu::*opcodefunctions[3]) () = {LDBCd16,INCB,DECB};




// All instructions from CPU instructions set

void NOP();

void LDBCd16();

void LDQBCQA();

void INCBC();

void INCB();

void DECB();

void LDBd8();

void RLCA();

void LDQa16SP();

/*
void ADDHLBC();

void LDAQBC();

void DECBC();

void INCC();

void DECC();

void LDCd8();

void RRCA();


void STOP0();

void LDDEd16();

void LDQDEA();

void INCDE();

void INCD();

void DECD();

void LDDd8();

void RLA();

void JRr8();

void ADDHLDE();

void LDAQDE();

void DECDE();

void INCE();

void DECE();

void LDEd8();

void RRA();


void JRNZr8();

void LDHLd16();

LD (HL+),A();

INC HL();

INC H();

DEC H();

LD H,d8();

DAA();

JR Z,r8();

ADD HL,HL();

LD A,(HL+)();

DEC HL();

INC L();

DEC L();

LD L,d8();

CPL();


JR NC,r8();

LD SP,d16();

LD (HL-),A();

INC SP();

INC (HL)();

DEC (HL)();

LD (HL),d8();

SCF();

JR C,r8();

ADD HL,SP();

LD A,(HL-)();

DEC SP();

INC A();

DEC A();

LD A,d8();

CCF();


LD B,B();

LD B,C();

LD B,D();

LD B,E();

LD B,H();

LD B,L();

LD B,(HL)();

LD B,A();

LD C,B();

LD C,C();

LD C,D();

LD C,E();

LD C,H();

LD C,L();

LD C,(HL)();

LD C,A();


LD D,B();

LD D,C();

LD D,D();

LD D,E();

LD D,H();

LD D,L();

LD D,(HL)();

LD D,A();

LD E,B();

LD E,C();

LD E,D();

LD E,E();

LD E,H();

LD E,L();

LD E,(HL)();

LD E,A();


LD H,B();

LD H,C();

LD H,D();

LD H,E();

LD H,H();

LD H,L();

LD H,(HL)();

LD H,A();

LD L,B();

LD L,C();

LD L,D();

LD L,E();

LD L,H();

LD L,L();

LD L,(HL)();

LD L,A();


LD (HL),B();

LD (HL),C();

LD (HL),D();

LD (HL),E();

LD (HL),H();

LD (HL),L();

HALT();

LD (HL),A();

LD A,B();

LD A,C();

LD A,D();

LD A,E();

LD A,H();

LD A,L();

LD A,(HL)();

LD A,A();


ADD A,B();

ADD A,C();

ADD A,D();

ADD A,E();

ADD A,H();

ADD A,L();

ADD A,(HL)();

ADD A,A();

ADC A,B();

ADC A,C();

ADC A,D();

ADC A,E();

ADC A,H();

ADC A,L();

ADC A,(HL)();

ADC A,A();


SUB B();

SUB C();

SUB D();

SUB E();

SUB H();

SUB L();

SUB (HL)();

SUB A();

SBC A,B();

SBC A,C();

SBC A,D();

SBC A,E();

SBC A,H();

SBC A,L();

SBC A,(HL)();

SBC A,A();


ANDB();

ANDC();

ANDD();

ANDE();

ANDH();

ANDL();

AND (HL)();

ANDA();

XORB();

XORC();

XORD();

XORE();

XORH();

XORL();

XOR (HL)();

XORA();


ORB();

ORC();

ORD();

ORE();

ORH();

ORL();

OR (HL)();

OR A();

CP B();

CP C();

CP D();

CP E();

CP H();

CP L();

CP (HL)();

CP A();


RET NZ();

POP BC();

JP NZ,a16();

JP a16();

CALL NZ,a16();

PUSH BC();

ADD A,d8();

RST 00H();

RET Z();

RET();

JP Z,a16();

PREFIX CB();

CALL Z,a16();

CALL a16();

ADC A,d8();

RST 08H();


RET NC();

POP DE();

JP NC,a16();

 	CALL NC,a16();

PUSH DE();

SUB d8();

RST 10H();

RET C();

RETI();

JP C,a16();

 	CALL C,a16();

 	SBC A,d8();

RST 18H();


LDH (a8),A();

POP HL();

LD (C),A();

 	 	PUSH HL();

AND d8();

RST 20H();

ADD SP,r8();

JP (HL)();

LD (a16),A();

 	 	 	XOR d8();

RST 28H();


LDH A,(a8)();

POP AF();

LD A,(C)();

DI();

 	PUSH AF();

OR d8();

RST 30H();

LD HL,SP+r8();

LD SP,HL();

LD A,(a16)();

EI();

 	 	CP d8();

RST 38H();
*/
};
