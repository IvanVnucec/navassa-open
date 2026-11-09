
int FUN_0100d40e(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_50;
  undefined1 uStack_4c;
  undefined1 auStack_4b [3];
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [20];
  
  bVar3 = *(byte *)((int)param_1 + 5);
  uVar8 = (uint)bVar3;
  iVar9 = 0;
  if (*(char *)*param_1 == '\x01') {
    *(char *)((int)param_1 + 6) = ((char *)*param_1)[1];
    FUN_010206da(uVar8);
  }
  else {
    FUN_010102be(uVar8,(int)param_1 + 7);
    FUN_01020fb8(uVar8);
    local_42 = 1;
    local_43 = 1;
    local_44 = 0;
    local_48 = 10;
    local_41 = 0;
    local_3c = 0;
    local_40 = 0x3f800000;
    FUN_0102077c(uVar8,auStack_38);
    FUN_01020862(uVar8,&local_48);
    FUN_01010434(uVar8,3);
    uVar2 = DAT_0100d7a0;
    iVar9 = *(int *)(DAT_0100d798 + uVar8 * 4);
    pin_update(iVar9 + 0x54,3,0);
    pbVar1 = (byte *)(iVar9 + 0x55);
    *pbVar1 = 1;
    FUN_010104ae(uVar8,0,0xeb,*(undefined4 *)(param_1[7] + 0x10));
    FUN_010104ae(uVar8,0,0xff,*(undefined4 *)(param_1[7] + 0x10));
    FUN_010206da(uVar8,0);
    FUN_0102075a(uVar8,auStack_4b);
    FUN_0101026a(uVar8,0,&uStack_4c);
    FUN_010206e8(uVar8,(char)param_1[1]);
    iVar9 = DAT_0100d7a8 + uVar8 * 8;
    uVar6 = *(uint *)(iVar9 + 0x90);
    iVar9 = *(int *)(iVar9 + 0x94);
    uVar7 = *(uint *)((short)(ushort)bVar3 * 0xbc + DAT_0100d7a4 + 0x19c) / 5;
    if ((iVar9 == 0) && (uVar6 < uVar2)) {
      uVar2 = (uint)CARRY4(uVar6,uVar7);
    }
    else {
      bVar11 = uVar6 < uVar7;
      uVar7 = -uVar7;
      uVar2 = -(uint)bVar11;
    }
    FUN_01009518(2,0,uVar8);
    FUN_01009ae4(0,uVar8,0,0);
    local_50 = uVar8;
    FUN_010096fc(uVar6 + uVar7,iVar9 + uVar2,2,0);
    iVar9 = FUN_0100d6ec(5);
    if (iVar9 == 0) {
      FUN_010206c2(uVar8);
      iVar4 = DAT_0100d7ac;
      iVar10 = DAT_0100d7ac + uVar8 * 8;
      uVar7 = 0;
      do {
        iVar9 = FUN_0100d6ec(3);
        if (iVar9 == 0) {
          iVar9 = FUN_0100d5dc(uVar8,*param_1 + 2,*(undefined4 *)(param_1[7] + 0x10));
        }
        if (iVar9 == 0) {
          uVar5 = FUN_010206c2(uVar8);
          *(undefined2 *)(iVar10 + uVar7 * 2) = uVar5;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 < 3) && (iVar9 == 0));
      if ((iVar9 == 0) && (iVar9 = FUN_0100d704(iVar10), iVar9 == 0)) {
        *(char *)((int)param_1 + 6) = (char)*(undefined2 *)(iVar4 + 6 + uVar8 * 8);
        if ((char)param_1[6] != '\0') {
          FUN_010206da(uVar8,*(undefined1 *)((int)param_1 + 6));
        }
        FUN_0102075a(uVar8,&local_50);
      }
    }
    FUN_0100974e(2,0,uVar8);
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_01010366(uVar8,(int)param_1 + 7,*(undefined4 *)(param_1[7] + 0x10));
    FUN_010207e8(uVar8,auStack_38);
    FUN_0102074a(uVar8);
  }
  return iVar9;
}

