#include "Seven_Segment.h"
//Variables
static SevenSegment_WiresTypedef wires;


void SevenSegment_Init(SevenSegment_WiresTypedef* userWires)
{
	wires= *userWires;
	SevenSegment_Delete();
}

void SevenSegment_Delete()
{
	HAL_GPIO_WritePin(wires.Port[Segment_A],wires.Pin[Segment_A],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_B],wires.Pin[Segment_B],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_C],wires.Pin[Segment_C],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_D],wires.Pin[Segment_D],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_E],wires.Pin[Segment_E],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_F],wires.Pin[Segment_F],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_G],wires.Pin[Segment_G],GPIO_PIN_SET);
	HAL_GPIO_WritePin(wires.Port[Segment_dot],wires.Pin[Segment_dot],GPIO_PIN_SET);
}

void SetSegment(Segment_Typedef current_segment)
{
	HAL_GPIO_WritePin(wires.Port[current_segment],wires.Pin[current_segment],GPIO_PIN_RESET);
}

void SevenSegment_DisplayHexNum(int a)
{
    switch (a){
		case 0: WriteCharacter_0(); break;
        case 1: WriteCharacter_1();break;
        case 2: WriteCharacter_2();break;
        case 3: WriteCharacter_3();break;
        case 4: WriteCharacter_4();break;
        case 5: WriteCharacter_5();break;
        case 6: WriteCharacter_6();break;
        case 7: WriteCharacter_7();break;
        case 8: WriteCharacter_8();break;
        case 9: WriteCharacter_9();break;
        case 10: WriteCharacter_A();break;
        case 11: WriteCharacter_B();break;
        case 12: WriteCharacter_C();break;
        case 13: WriteCharacter_D();break;
        case 14: WriteCharacter_E();break;
        case 15: WriteCharacter_F();break;
    }
}

void SevenSegment_ToggleDot()
{
	HAL_GPIO_TogglePin(wires.Port[Segment_dot],wires.Pin[Segment_dot]);
}

void WriteCharacter_1()
{
    SetSegment(Segment_C);
    SetSegment(Segment_D);

}
void WriteCharacter_2()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_G);
    SetSegment(Segment_E);
    SetSegment(Segment_D);
}
void WriteCharacter_3()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_G);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
}
void WriteCharacter_4()
{
    SetSegment(Segment_F);
    SetSegment(Segment_C);
    SetSegment(Segment_G);
    SetSegment(Segment_B);

}
void WriteCharacter_5()
{
    SetSegment(Segment_A);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_6()
{
    SetSegment(Segment_A);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_7()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_C);

}
void WriteCharacter_8()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_9()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_0()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);

}
void WriteCharacter_A()
{
    SetSegment(Segment_A);
    SetSegment(Segment_B);
    SetSegment(Segment_C);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_B()
{

    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_C()
{
    SetSegment(Segment_A);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);

}
void WriteCharacter_D()
{

    SetSegment(Segment_B);
    SetSegment(Segment_C);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_G);
}
void WriteCharacter_E()
{
    SetSegment(Segment_A);
    SetSegment(Segment_D);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}
void WriteCharacter_F()
{
    SetSegment(Segment_A);
    SetSegment(Segment_E);
    SetSegment(Segment_F);
    SetSegment(Segment_G);
}





