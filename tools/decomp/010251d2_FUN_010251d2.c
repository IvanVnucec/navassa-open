
void FUN_010251d2(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_01025464;
  if (param_3 != (byte *)0x0) {
    *param_3 = (byte)(*(uint *)(*(int *)(DAT_01025464 + param_1 * 4) + 0x24) >> 1) & 1;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  FUN_0102598c(*(int *)(iVar1 + param_1 * 4) + 0x24,2,uVar2,param_4);
  return;
}

