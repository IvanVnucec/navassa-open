
void FUN_0103db3c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_0103de9c;
  uVar2 = 0;
  do {
    uVar4 = 0;
    do {
      if ((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        iVar3 = *(int *)(iVar1 + uVar2 * 4);
        pin_update(iVar3 + 0xdd,0xc0,((uint)(byte)(&DAT_0103dedc)[uVar4] << 0x1e) >> 0x18);
        *(undefined4 *)(param_2 + (uVar4 + uVar2 * 2) * 4) = *(undefined4 *)(iVar3 + 0xde);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return;
}

