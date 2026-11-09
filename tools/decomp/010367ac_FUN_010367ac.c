
undefined4 FUN_010367ac(void)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r4;
  int iVar7;
  byte bVar8;
  undefined4 local_18;
  
  puVar3 = DAT_0103686c;
  iVar2 = DAT_01036868;
  local_18 = 0;
  puVar1 = (uint *)(*(int *)(DAT_01036864 + 4) + 0x40);
  uVar4 = *puVar1;
  if ((uVar4 & 0x48000000) == 0) {
    return 0;
  }
  iVar7 = *(int *)(DAT_01036868 + 8);
  bVar8 = *(byte *)(iVar7 + 0x10);
  iVar6 = *(int *)(DAT_01036868 + 0xc);
  if (1 < bVar8) {
    bVar8 = *(byte *)(iVar6 + 0x10);
  }
  if (bVar8 < 2) {
    *DAT_0103686c = 1;
  }
  bVar8 = *(byte *)(iVar7 + 0x10);
  if (bVar8 < 2) {
    bVar8 = *(byte *)(iVar6 + 0x10);
  }
  if (1 < bVar8) {
    unaff_r4 = *DAT_01036870;
  }
  if ((uVar4 & 0x40000000) == 0) {
    if ((((uVar4 & 0x8000000) == 0) || (*puVar1 = uVar4 & 0x8000000, *(byte *)(iVar6 + 0x10) < 2))
       || (iVar6 = FUN_010289ba(1), *(int *)(iVar6 + 4) == 0)) goto LAB_01036834;
    uVar5 = 1;
  }
  else {
    *puVar1 = uVar4 & 0x40000000;
    if ((*(byte *)(iVar7 + 0x10) < 2) || (iVar6 = FUN_010289ba(0), *(int *)(iVar6 + 4) == 0))
    goto LAB_01036834;
    uVar5 = 0;
  }
  FUN_01023ebe(unaff_r4,uVar5);
LAB_01036834:
  if (puVar3[1] == '\0') {
    bVar8 = *(byte *)(*(int *)(iVar2 + 8) + 0x10);
    if (1 < bVar8) {
      bVar8 = *(byte *)(*(int *)(iVar2 + 0xc) + 0x10);
    }
    if (bVar8 < 2) {
      local_18 = 0;
      sched_state_op_B(*DAT_01036874,&local_18);
    }
  }
  return local_18;
}

