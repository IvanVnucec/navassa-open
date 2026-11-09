
void FUN_01009810(int param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = DAT_0100a1a8;
  pcVar1 = DAT_0100a1a4;
  if (param_2 != 0) {
    pcVar3 = DAT_0100a1b0;
    pcVar1 = DAT_0100a1ac;
  }
  if (((param_1 == 0) && (iVar2 = (*pcVar3)(param_2,param_3,param_4 & 0xff), iVar2 == 0)) &&
     (iVar2 = (*pcVar3)(param_2,param_3 + 1,(param_4 << 0x10) >> 0x18), iVar2 == 0)) {
    (*pcVar1)(param_2,param_3 + 2,(param_4 << 8) >> 0x18,0x7f);
  }
  return;
}

