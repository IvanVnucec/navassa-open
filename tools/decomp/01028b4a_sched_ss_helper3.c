
void sched_ss_helper3(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_01028cf8;
  uVar2 = 0;
  do {
    if ((int)((*(uint *)(param_1 + 0x60) >> (uVar2 & 0xff)) << 0x1f) < 0) {
      *(undefined1 *)(*(int *)(iVar1 + uVar2 * 4) + 1) = 3;
      *(int *)(*(int *)(iVar1 + uVar2 * 4) + 4) = param_1;
      *(undefined1 *)(*(int *)(iVar1 + uVar2 * 4) + 0xc) = 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return;
}

