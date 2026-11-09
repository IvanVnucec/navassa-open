
undefined4 FUN_01004f66(byte param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  char local_28;
  byte local_27;
  
  iVar2 = DAT_010050d0;
  iVar8 = DAT_010050cc;
  if (*(char *)(DAT_010050d0 + 0x77d) == '\x01') {
    uVar7 = 0x1e;
  }
  else if (*(char *)(DAT_010050cc + 0x20) == '\x01') {
    uVar7 = 0x1f;
  }
  else {
    uVar7 = 1;
  }
  local_27 = param_1;
  iVar3 = FUN_010026f0(param_3,(undefined4 *)(DAT_01005500 + 0x6a8),
                       *(undefined4 *)(DAT_01005500 + 0x6a8),*(undefined4 *)(DAT_01005500 + 0x6ac),
                       uVar7);
  FUN_0101026a(local_27,param_2,&local_28);
  iVar10 = (short)(ushort)local_27 * 0xde0 + DAT_010050d8 + iVar3 * 0x6f0;
  iVar9 = iVar3 * 0x1b0 + (short)(ushort)local_27 * 0x3450 + DAT_010050d4;
  iVar3 = DAT_01005448 + (uint)local_27 * 4;
  if (param_2 == 3) {
    iVar8 = *(int *)(iVar3 + 100);
    uVar4 = FUN_01004f4c(local_28);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        pcVar5 = (char *)((uint)local_27 * 3 + DAT_01005504);
        if (local_28 == *pcVar5) {
          iVar6 = 0;
        }
        else if (local_28 == pcVar5[1]) {
          iVar6 = 8;
        }
        else {
          if (local_28 != pcVar5[2]) {
            return 0xc401;
          }
          iVar6 = 0x10;
        }
        cVar1 = *(char *)(iVar2 + 0x77d);
        bVar11 = cVar1 != '\x01';
        if (bVar11) {
          cVar1 = *(char *)(iVar8 + 0x20);
        }
        if (bVar11 && cVar1 != '\x01') {
          unaff_r4 = iVar10 + *(int *)(iVar3 + 0x5c) * 0x250 + iVar6 + 0x238;
        }
        else {
          unaff_r4 = iVar9 + *(int *)(iVar3 + 0x5c) * 0x90 + iVar6 + 0x78;
        }
      }
      goto LAB_010050ac;
    }
    iVar8 = *(int *)(iVar3 + 0x54);
    uVar4 = FUN_01004f4c(local_28);
  }
  if (6 < uVar4) {
    return 0xc401;
  }
  if (*(char *)(iVar2 + 0x77d) == '\x01') {
    unaff_r4 = iVar9 + iVar8 * 0x90 + uVar4 * 8 + 0x40;
  }
  else {
    unaff_r4 = iVar10 + iVar8 * 0x250 + uVar4 * 8 + 0x200;
  }
LAB_010050ac:
  FUN_01010d70(local_27,param_2,unaff_r4,1);
  return 0;
}

