
void FUN_0100b2c4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(DAT_0100b544 + param_1 * 4);
  pcVar3 = DAT_0100b548;
  if (param_3 == 0) {
    pcVar3 = DAT_0100b54c;
  }
  iVar1 = (*pcVar3)(param_3,iVar2 + 0x5a,param_2 & 0xff,param_4,param_4);
  if ((iVar1 == 0) &&
     (iVar1 = (*pcVar3)(param_3,iVar2 + 0x5b,(param_2 << 0x10) >> 0x18), iVar1 == 0)) {
    (*pcVar3)(param_3,iVar2 + 0x5c,param_2 >> 0x10 & 0xff | 0x80);
  }
  return;
}

