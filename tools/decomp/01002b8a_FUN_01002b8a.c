
void FUN_01002b8a(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_3 = (param_3 & 7) << 2;
    uVar2 = 0x1c;
    iVar1 = DAT_01002d7c;
  }
  else {
    uVar2 = 0xf;
    iVar1 = DAT_01002d80;
  }
  pin_update(iVar1 + param_2,uVar2,param_3);
  return;
}

