
undefined4 FUN_0101a690(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  char acStack_38 [20];
  int iStack_24;
  
  uVar1 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar3 = *(int *)(DAT_0101a8f8 + (uint)*(byte *)(DAT_0101a8f0 + param_1) * 4);
    param_2 = param_2 * 3;
    iStack_24 = param_4;
    FUN_0101206c(acStack_38,&DAT_0101a90c,0x14);
    pcVar2 = DAT_0101a8fc;
    if (param_4 == 0) {
      pcVar2 = DAT_0101a900;
    }
    (*pcVar2)(param_4,iVar3 + 0x80,acStack_38[param_2] + acStack_38[param_2 + 1] * '\b',0xb);
    (*pcVar2)(param_4,iVar3 + 0x7e,((uint)(byte)acStack_38[param_2 + 2] << 0x1f) >> 0x18,0x80);
    if (param_1 != 2) {
      param_3 = (param_3 << 0x1c) >> 0x18;
    }
    (*pcVar2)(param_4,DAT_0101a904,param_3);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

