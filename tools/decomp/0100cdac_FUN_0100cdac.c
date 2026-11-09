
int FUN_0100cdac(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_38 [12];
  undefined1 local_2c;
  undefined4 uStack_28;
  
  iVar10 = DAT_0100d2a4;
  iVar4 = DAT_0100cf5c;
  bVar1 = *DAT_0100d2b8;
  uVar5 = param_2[100];
  iVar11 = *(int *)(param_2 + 0x68);
  bVar2 = param_2[0x6d];
  iVar6 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0x20) = 0x2000;
  *(undefined4 *)(param_2 + 0x24) = 0x39000000;
  sVar3 = (short)param_1;
  *(undefined1 *)(iVar6 + 0xc) = 1;
  iVar10 = sVar3 * 0xbc + iVar10;
  bVar12 = *(char *)(iVar10 + 0x48) == '\x01';
  if (bVar12) {
    iVar10 = 2;
  }
  uVar9 = (undefined1)iVar10;
  if (bVar12) {
    uVar8 = 3;
  }
  else {
    uVar9 = 1;
    uVar8 = 2;
  }
  *(undefined1 *)(iVar6 + 9) = uVar9;
  if (*(char *)(iVar4 + 0xc) == '\0') {
    iVar10 = iVar4 + (short)(ushort)bVar1 * 0x60 + sVar3 * 0x30;
    iVar6 = iVar10 + 0x1ae0;
    *(int *)(iVar10 + 0x1af4) = iVar4 + (short)(ushort)bVar1 * 0x30 + sVar3 * 0x18 + 0x182c;
  }
  else {
    iVar10 = (short)(ushort)bVar2 * 0x30 + iVar11 * 0xc00 + sVar3 * 0x1800 + DAT_0100cf58;
    iVar6 = iVar10 + 0x220;
    *(uint *)(iVar10 + 0x234) = iVar4 + sVar3 * 0xc00 + iVar11 * 0x600 + (uint)bVar2 * 0x100 + 0x24;
    if (*DAT_0100d2b4 == '\0') {
      uVar7 = *(undefined4 *)(param_2 + 0xec);
      goto LAB_0100ce80;
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0xe8);
LAB_0100ce80:
  *(undefined4 *)(param_2 + 0xe4) = uVar7;
  *(int *)(param_2 + 0x14) = iVar6;
  uStack_28 = param_4;
  iVar10 = FUN_0100c7cc(bVar1,param_2,uVar8,uVar5);
  if (iVar10 == 0) {
    FUN_0101d9de(param_1,iVar4);
    FUN_0101dad0(*param_2,*(undefined1 *)(iVar4 + 0x10),DAT_0100d2bc);
    FUN_0100b9fa(param_1,uVar5);
    iVar10 = FUN_0101ddf6(param_1,auStack_38);
    uVar5 = FUN_0100c474(param_2,local_2c);
    *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x10) = uVar5;
    if (param_1 == 0) {
      *DAT_0100d2c4 = 0;
    }
    else if (param_1 == 1) {
      *DAT_0100d2c0 = 0;
    }
    if (iVar10 == 0) {
      *(undefined2 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(iVar4 + 0xd) = 1;
      iVar10 = FUN_0100c066(param_2);
    }
  }
  FUN_0100bc98(param_1);
  FUN_0100ba30(param_1,0,*(undefined1 *)(iVar4 + 0x10));
  if (iVar10 == 0x2117) {
    iVar10 = 0;
  }
  return iVar10;
}

