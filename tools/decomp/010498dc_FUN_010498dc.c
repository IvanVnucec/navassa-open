
undefined4 FUN_010498dc(byte param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0104990c;
  bVar2 = 0;
  while( true ) {
    if (1 < bVar2) {
      return 0;
    }
    if (((uint)param_1 & 1 << (uint)bVar2) != 0) break;
    bVar2 = bVar2 + 1;
  }
  uVar3 = param_2[1];
  *(undefined4 *)(DAT_0104990c + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  return 0;
}

