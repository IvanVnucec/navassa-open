
int FUN_010403ea(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_0103ae90(param_1,2);
  iVar1 = DAT_01040f5c;
  uVar6 = *(undefined4 *)(DAT_01040f58 + 0x34 + (uint)*(byte *)(param_1 + 1) * 4);
  FUN_01008334(*(undefined1 *)(param_1 + 2),
               (short)(ushort)*(byte *)(param_1 + 1) * 0xbc + DAT_01040f5c + 0xc4);
  FUN_0102dd0e(*(undefined1 *)(param_1 + 1));
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = 0x6f;
    }
    else {
      uVar3 = 0x73;
    }
    FUN_010403cc(uVar3,5);
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    FUN_01002880(0x79);
    FUN_010028fc(0x79,6);
    FUN_01002896(0x79);
    FUN_01002880(0x7a);
    FUN_010028fc(0x7a,6);
    uVar3 = 0x7a;
  }
  else {
    FUN_01002880(0x7d);
    FUN_010028fc(0x7d,6);
    FUN_01002896(0x7d);
    FUN_01002880(0x7e);
    FUN_010028fc(0x7e,6);
    uVar3 = 0x7e;
  }
  FUN_01002896(uVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_0104059c();
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        FUN_01006c2c(1,*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 1),1);
        iVar2 = FUN_0104059c();
        FUN_01006c2c(1,*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 1),0);
        goto LAB_010404bc;
      }
    }
    else {
LAB_010404bc:
      if (iVar2 != 0) goto LAB_01040504;
    }
    iVar4 = iVar1 + (short)(ushort)*(byte *)(param_1 + 1) * 0xbc;
    if (*(char *)(iVar4 + 0x3c) == '\x02') {
      iVar4 = FUN_01009c16(uVar6);
    }
    uVar6 = FUN_01040596(iVar4,5,*(undefined1 *)(param_1 + 1),0);
    uVar6 = FUN_01040596(uVar6,1,*(undefined1 *)(param_1 + 1),0);
    uVar6 = FUN_01040596(uVar6,2,*(undefined1 *)(param_1 + 1),0);
    FUN_01040596(uVar6,3,*(undefined1 *)(param_1 + 1),0);
    FUN_0102dc18(*(undefined1 *)(param_1 + 2));
  }
LAB_01040504:
  if (((uint)*(ushort *)(iVar1 + 0x22) & 1 << (uint)*(byte *)(*(int *)(param_1 + 0x44) + 1)) == 0) {
    FUN_0102dc18(*(undefined1 *)(*(int *)(param_1 + 0x44) + 2));
  }
  if (iVar2 == 0) {
    FUN_0100a880(*(undefined1 *)(param_1 + 1),2);
    FUN_0100a880(*(undefined1 *)(param_1 + 1),3);
    FUN_0100a880(*(undefined1 *)(param_1 + 1),1);
    if (*(char *)(param_1 + 2) == '\x02') {
      if (*(char *)(param_1 + 0x2d) == '\0') {
        FUN_010412b0();
        FUN_010412d0();
      }
    }
    else {
      if (*(char *)(param_1 + 2) != '\x03') {
        iVar2 = 0xe702;
        goto LAB_01040568;
      }
      if (*(char *)(param_1 + 0x2d) == '\0') {
        FUN_010412f0();
        FUN_01041310();
      }
    }
    iVar2 = FUN_01003388(*(undefined1 *)(param_1 + 1));
    if (iVar2 == 0) {
      FUN_0101e07c(*(undefined1 *)(param_1 + 1));
      iVar2 = FUN_010360da(DAT_010411b4 + (uint)*(byte *)(param_1 + 1) * 0x1c);
    }
  }
LAB_01040568:
  uVar5 = *(uint *)(param_1 + 0x34) & 0x933f;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  *(char *)(param_1 + 0x31) = (char)uVar5;
  return iVar2;
}

