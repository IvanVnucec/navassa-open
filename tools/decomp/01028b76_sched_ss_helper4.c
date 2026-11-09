
void sched_ss_helper4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_01028cf8;
  uVar2 = 0;
  do {
    if (((int)((*(uint *)(param_1 + 0x60) >> (uVar2 & 0xff)) << 0x1f) < 0) &&
       (iVar3 = *(int *)(iVar1 + uVar2 * 4), *(int *)(iVar3 + 4) == param_1)) {
      *(undefined1 *)(iVar3 + 1) = 0;
      *(undefined4 *)(*(int *)(iVar1 + uVar2 * 4) + 4) = 0;
      *(undefined1 *)(*(int *)(iVar1 + uVar2 * 4) + 0xc) = 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return;
}

