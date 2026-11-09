
void FUN_01019fea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = DAT_0101a564;
  iVar3 = 0;
  uVar1 = *DAT_0101a57c | *(ushort *)(param_1 + 0x14);
  uVar9 = (uint)uVar1;
  uVar8 = 0;
  do {
    iVar4 = DAT_0101a554 + uVar8 * 0xbc;
    uVar5 = uVar8 & 0xff;
    if ((int)(((uVar9 & 3) >> (uVar8 & 0xff)) << 0x1f) < 0) {
      iVar6 = *(int *)(iVar2 + uVar5 * 4);
      uVar7 = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      iVar4 = iVar4 + 0x19c;
LAB_0101a076:
      *(int *)(iVar6 + 0xc) = iVar4;
      if (iVar3 == 0) {
        iVar3 = FUN_0102f3e4(uVar8 & 0xff,uVar7,iVar6,uVar7,param_4);
      }
    }
    else {
      if ((int)((((uVar9 << 0x1a) >> 0x1e) >> (uVar8 & 0xff)) << 0x1f) < 0) {
        iVar6 = *(int *)(iVar2 + uVar5 * 4);
        uVar7 = 1;
        *(undefined4 *)(iVar6 + 8) = 1;
        iVar4 = iVar4 + 0x314;
        goto LAB_0101a076;
      }
      if ((int)((((uVar9 << 0x18) >> 0x1e) >> (uVar8 & 0xff)) << 0x1f) < 0) {
        iVar6 = *(int *)(iVar2 + uVar5 * 4);
        uVar7 = 2;
        *(undefined4 *)(iVar6 + 8) = 2;
        iVar4 = iVar4 + 0x48c;
        goto LAB_0101a076;
      }
      if ((int)(((uVar1 >> 8 & 3) >> (uVar8 & 0xff)) << 0x1f) < 0) {
        iVar6 = *(int *)(iVar2 + uVar5 * 4);
        uVar7 = 3;
        *(undefined4 *)(iVar6 + 8) = 3;
        iVar4 = iVar4 + 0x604;
        goto LAB_0101a076;
      }
    }
    uVar8 = uVar8 + 1;
    if (1 < (int)uVar8) {
      return;
    }
  } while( true );
}

