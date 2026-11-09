
void FUN_0103443c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = DAT_01034714 + (uint)*(byte *)(DAT_0103472c + param_1 * 0x5c + 0x35a) * 0x38;
  iVar3 = 0;
  uVar5 = 0;
  do {
    uVar1 = 0;
    iVar4 = iVar3;
    do {
      iVar3 = iVar4;
      if ((int)((*(uint *)(iVar2 + param_1 * 4 + uVar5 * 0xc) >> (uVar1 & 0xff)) << 0x1f) < 0) {
        iVar3 = iVar4 + 1;
        iVar6 = param_2 + iVar4 * 8;
        if (uVar5 == *(byte *)(iVar2 + 0x30) && uVar1 == 0) {
          *(undefined4 *)(param_2 + iVar4 * 8) = 0x40000000;
          *(undefined4 *)(iVar6 + 4) = 0;
        }
        else {
          *(undefined4 *)(param_2 + iVar4 * 8) = 0;
          *(undefined4 *)(iVar6 + 4) = 0;
        }
      }
      uVar1 = uVar1 + 1;
      iVar4 = iVar3;
    } while ((int)uVar1 < 8);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}

