
void FUN_01017972(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01018188 + param_1 * 4);
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar3 = iVar3 + 0x2a;
    FUN_01017964(param_1,0x10,param_2 << 4 & 0xff);
    uVar2 = (uint)(param_2 << 0x1d) >> 0x18;
    uVar1 = 0x20;
  }
  else {
    uVar2 = param_2 << 4 & 0xff;
    uVar1 = 0x10;
    iVar3 = iVar3 + 0xd7;
  }
  pin_update(iVar3,uVar1,uVar2,param_4);
  return;
}

