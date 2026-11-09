
int FUN_0100d95c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar3 = DAT_0100e01c;
  iVar2 = DAT_0100e014;
  iVar8 = 0;
  bVar10 = 0;
  do {
    uVar11 = (uint)bVar10;
    if (*(char *)(param_3 + uVar11) != '\0') {
      pbVar9 = (byte *)(DAT_0100e020 + (short)(ushort)bVar10 * 0x110);
      *pbVar9 = bVar10;
      iVar8 = (short)(ushort)bVar10 * 0x48;
      *(int *)(pbVar9 + 0x10) = iVar3 + iVar8;
      pcVar1 = DAT_0100e010;
      *(undefined4 *)(pbVar9 + 0x68) = *(undefined4 *)(param_2 + 0x28);
      if (*pcVar1 == '\0') {
        pbVar9[0x6d] = (byte)*(undefined4 *)(param_2 + 0x10);
      }
      else {
        bVar4 = FUN_010034e2(bVar10,param_2,*(undefined4 *)(param_2 + 0x30),
                             *(undefined4 *)(param_2 + 0x34));
        pbVar9[0x6d] = bVar4;
      }
      iVar5 = DAT_0100e024;
      *(undefined4 *)(pbVar9 + 0x60) = param_4;
      iVar12 = *(int *)(iVar5 + uVar11 * 4);
      FUN_0102298e(bVar10,0xc,1,1,1,1,iVar8,param_1);
      iVar13 = iVar12 + 0x80;
      pin_update(iVar13,3,0);
      iVar5 = 500;
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_0102298e(bVar10,0xc,2,2,2,2,iVar8,param_1);
      pin_update(iVar13,3,1);
      iVar5 = uVar11 * 0xbc + DAT_0100e028;
      if (*(char *)(iVar5 + 0x3c) == '\x01') {
        FUN_0101f13a(bVar10,1);
      }
      uVar6 = FUN_0100bc88(bVar10);
      FUN_0100c256(*pbVar9,*(undefined4 *)(pbVar9 + 0xc));
      FUN_0100d7b8(iVar3 + (short)(ushort)*pbVar9 * 0x48,0x48);
      iVar13 = iVar8 + iVar2 + 0x424;
      FUN_0100a84c(iVar13);
      *(undefined1 *)(iVar12 + 0xff) = 0;
      if (bVar10 == 0) {
        uVar7 = 1;
LAB_0100da76:
        pin_update(DAT_0100e02c,uVar7,0);
      }
      else if (bVar10 == 1) {
        uVar7 = 0x10;
        goto LAB_0100da76;
      }
      *(undefined4 *)(*(int *)(pbVar9 + 0xc) + 0xb8) = DAT_0100e030;
      iVar8 = FUN_0100bcf0(bVar10,pbVar9,*(undefined4 *)(param_2 + 0x10));
      FUN_0100a854(iVar13,iVar8);
      if (*(char *)(iVar5 + 0x3c) == '\x01') {
        FUN_0101f13a(bVar10,0);
      }
      FUN_0100bc76(bVar10,uVar6);
    }
    bVar10 = bVar10 + 1;
    if ((1 < bVar10) || (iVar8 != 0)) {
      return iVar8;
    }
  } while( true );
}

