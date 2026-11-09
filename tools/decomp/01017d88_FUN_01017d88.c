
int FUN_01017d88(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = DAT_010181c4;
  iVar1 = DAT_010181c0;
  iVar4 = 0;
  uVar5 = 0;
  do {
    iVar3 = *(int *)(*(int *)(iVar2 + (uVar5 & 0xff) * 4) + 8);
    if ((iVar4 == 0) && (iVar3 != -1)) {
      iVar4 = FUN_010179ae(uVar5 & 0xff,*(int *)(iVar1 + iVar3 * 8 + uVar5 * 4) + 0x8c);
    }
    if ((int)((((uint)(param_2 << 0x1c) >> 0x1e) >> (uVar5 & 0xff)) << 0x1f) < 0) {
      if (iVar4 == 0) {
        iVar4 = FUN_010179ae(uVar5 + 2 & 0xff,uVar5 * 0xbc + param_1 + 0xb0);
      }
    }
    else {
      FUN_01017e00(0x13,(uVar5 + 2 & 0xff) * 0x13 + 0x79,0xcc,0x88);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return iVar4;
}

