
void sched_ss_helper2(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  bVar5 = iVar1 << 0x1f < 0;
  if (iVar1 << 0x1e < 0) {
    bVar5 = bVar5 | 2;
  }
  if (iVar1 << 0x1d < 0) {
    bVar5 = bVar5 | 4;
  }
  if (iVar1 << 0x1c < 0) {
    bVar5 = bVar5 | 8;
  }
  if (bVar5 == 0) {
    nmi_signal_helper(0);
  }
  iVar1 = DAT_01028cf8;
  uVar2 = 0;
  do {
    if ((int)((*(uint *)(param_1 + 0x60) >> (uVar2 & 0xff)) << 0x1f) < 0) {
      iVar4 = param_2;
      if (param_2 != 0) {
        iVar4 = 1;
      }
      uVar3 = (undefined1)iVar4;
      if (param_2 == 0) {
        uVar3 = 2;
      }
      *(undefined1 *)(*(int *)(iVar1 + uVar2 * 4) + 1) = uVar3;
      *(int *)(*(int *)(iVar1 + uVar2 * 4) + 4) = param_1;
      *(undefined1 *)(*(int *)(iVar1 + uVar2 * 4) + 0xc) = 0;
      *(byte *)(*(int *)(iVar1 + uVar2 * 4) + 0xd) = bVar5;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return;
}

