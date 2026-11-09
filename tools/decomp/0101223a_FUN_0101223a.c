
undefined8 FUN_0101223a(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined4 **)(param_1 + 0x4f0) = param_2 + 0x1d;
  FUN_010119b8(param_1 + 0x1c0,0,0);
  uVar1 = FUN_010232b8();
  *param_2 = 0;
  param_2[1] = 0;
  FUN_01012224(param_2);
  restore_priority(uVar1);
  FUN_01012236(param_2);
  FUN_010123aa(param_1,param_2,*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_010232b8();
  param_2[3] = param_2[3] + 1;
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 6) /
          (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x16);
  if (99 < uVar2) {
    uVar2 = 99;
  }
  param_2[1] = uVar2;
  if ((*(int *)(param_1 + 0x20) == 0) && (*(byte *)(param_1 + 0x25) != 5)) {
    uVar2 = *(uint *)(param_1 + 0x14);
    bVar5 = uVar2 != 0;
    if (bVar5) {
      uVar2 = (uint)*(byte *)(param_1 + 0x2b);
    }
    if ((bVar5 && uVar2 != 0) && (*(char *)(param_1 + 0x2c) != '\0')) {
      param_2[2] = *(undefined4 *)(param_1 + 0x30);
      FUN_010121c0(param_2 + 5,*(undefined4 *)(param_1 + 0x30));
      FUN_010121c0(param_2 + 0xb,*(undefined4 *)(param_1 + 0x30));
      FUN_010121c0(param_2 + 0x11,*(undefined4 *)(param_1 + 0x30));
      FUN_010121c0(param_2 + 0x17,*(undefined4 *)(param_1 + 0x30));
      mailbox_xfer(*(char *)(param_1 + 5) + '3',param_2[2]);
      if (*(char *)(param_1 + 0x2c) == '\x02') {
        FUN_010121d6(param_2 + 5);
        FUN_010121d6(param_2 + 0xb);
        FUN_010121d6(param_2 + 0x11);
        FUN_010121d6(param_2 + 0x17);
      }
    }
  }
  else {
    FUN_010121ac(param_2 + 0x17);
    FUN_010121ac(param_2 + 0x11,*(undefined4 *)(param_1 + 0x20));
    FUN_010121ac(param_2 + 0xb,*(undefined4 *)(param_1 + 0x20));
    FUN_010121ac(param_2 + 5,*(undefined4 *)(param_1 + 0x20));
    uVar2 = *(uint *)(param_1 + 0x20);
    if ((int)(uVar2 << 0x1b) < 0) {
      uVar3 = 3;
    }
    else if ((int)(uVar2 << 0x1e) < 0) {
      uVar3 = 1;
    }
    else {
      if (-1 < (int)(uVar2 << 0x1f)) {
        bVar5 = (uVar2 & 0xc) == 0;
        if (bVar5) {
          uVar2 = (uint)*(byte *)(param_1 + 0x25);
        }
        if (bVar5 && uVar2 == 5) {
          *param_2 = 0;
        }
        goto LAB_0101236c;
      }
      uVar3 = 2;
    }
    *param_2 = uVar3;
  }
LAB_0101236c:
  iVar4 = param_2[5];
  bVar5 = iVar4 != -1;
  if (bVar5) {
    iVar4 = iVar4 + 1;
  }
  if (bVar5) {
    param_2[5] = iVar4;
  }
  iVar4 = param_2[0xb];
  bVar5 = iVar4 != -1;
  if (bVar5) {
    iVar4 = iVar4 + 1;
  }
  if (bVar5) {
    param_2[0xb] = iVar4;
  }
  iVar4 = param_2[0x11];
  bVar5 = iVar4 != -1;
  if (bVar5) {
    iVar4 = iVar4 + 1;
  }
  if (bVar5) {
    param_2[0x11] = iVar4;
  }
  iVar4 = param_2[0x17];
  bVar5 = iVar4 != -1;
  if (bVar5) {
    iVar4 = iVar4 + 1;
  }
  if (bVar5) {
    param_2[0x17] = iVar4;
  }
  param_2[1] = 100;
  restore_priority(uVar1);
  return CONCAT44(param_4,*param_2);
}

