
void FUN_01010132(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  
  piVar2 = (int *)(param_1 + 0x1d4);
  *piVar2 = 0;
LAB_0101013e:
  iVar1 = *(int *)(param_1 + 0x1d8);
  bVar4 = iVar1 == 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0x1dc);
  }
  if (bVar4 && iVar1 == 0) {
    return;
  }
  uVar3 = 1;
  do {
    if (-1 < (int)((*(uint *)(param_1 + 0x1dc) >> (uVar3 & 0xff)) << 0x1f)) goto LAB_01010160;
    FUN_01010028(param_1,uVar3);
    do {
      if (*piVar2 == 0) {
LAB_01010160:
        if ((int)((*(uint *)(param_1 + 0x1d8) >> (uVar3 & 0xff)) << 0x1f) < 0) {
          FUN_01010028(param_1,-uVar3);
        }
      }
      uVar3 = uVar3 + 1;
      if (0x17 < uVar3) {
        if (*piVar2 != 0) {
          return;
        }
        goto LAB_0101013e;
      }
    } while (*piVar2 != 0);
  } while( true );
}

