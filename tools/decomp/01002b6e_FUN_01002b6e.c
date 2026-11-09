
void FUN_01002b6e(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = param_3 << 0x1d;
    uVar2 = 0x60;
    iVar1 = DAT_01002d7c;
  }
  else {
    uVar3 = param_3 << 0x1c;
    uVar2 = 0x30;
    iVar1 = DAT_01002d80;
  }
  pin_update(iVar1 + param_2,uVar2,uVar3 >> 0x18);
  return;
}

