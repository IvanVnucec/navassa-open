
int FUN_0100a038(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  iVar2 = DAT_0100a1a0;
  uVar8 = *(byte *)(DAT_0100a1a0 + 0x22) & 0xf;
  uVar5 = 0;
  uStack_28 = param_4;
  do {
    if ((int)((uVar8 >> (uVar5 & 0xff)) << 0x1f) < 0) {
      FUN_01017c44(uVar5 & 0xff,0);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  FUN_010184a8();
  FUN_0101424e();
  FUN_01009b62();
  iVar3 = FUN_0101825c(iVar2);
  iVar4 = DAT_0100a1cc;
  FUN_0100b074(0,*(undefined4 *)(DAT_0100a1cc + 0x28));
  if (iVar3 == 0) {
    uVar5 = 0;
    iVar3 = 0;
    do {
      if (((((int)((uVar8 >> (uVar5 & 0xff)) << 0x1f) < 0) && (param_1 == 1)) &&
          (uVar7 = (int)uVar5 % 2, iVar3 == 0)) &&
         (iVar3 = FUN_01018360(uVar7 & 0xff,0), iVar3 == 0)) {
        iVar3 = FUN_01018f6c(uVar7 & 0xff,iVar2 + 0x228 + (uVar7 & 0xff) * 0xbc,
                             (short)(uVar7 & 0xff) * 0x54 + iVar4 + 0xdc,0);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 2);
    if ((iVar3 == 0) && (iVar3 = FUN_010181f6(1,1), iVar3 == 0)) {
      FUN_010198e0(6);
      FUN_0101852c();
      FUN_0100b074(1,*(undefined4 *)(iVar4 + 0x10));
      iVar3 = FUN_01019c40((char)*(undefined2 *)(iVar2 + 0x22),auStack_40);
      if (iVar3 == 0) {
        iVar3 = FUN_01018424(auStack_40);
      }
      if (iVar3 == 0) {
        uVar5 = 0;
        iVar3 = 0;
        do {
          if ((int)((uVar8 >> (uVar5 & 0xff)) << 0x1f) < 0) {
            iVar4 = uVar5 - ((int)uVar5 >> 0x1f);
            if ((int)uVar5 < 2) {
              FUN_0100a1ec(iVar4);
              uVar1 = *(undefined1 *)(iVar2 + 0x228 + extraout_r1);
            }
            else {
              FUN_0100a1ec(iVar4);
              uVar1 = *(undefined1 *)(extraout_r1_00 + iVar2 + 0xb0);
            }
            iVar3 = FUN_01017c44(uVar5 & 0xff,uVar1);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 4);
      }
    }
  }
  FUN_010198e0(6);
  if (iVar3 == 0) {
    bVar6 = 0;
    iVar3 = 0;
    do {
      if ((int)((uVar8 >> (uint)(byte)(bVar6 + 2)) << 0x1f) < 0) {
        iVar4 = iVar2 + (uint)bVar6 * 0xbc;
        iVar3 = FUN_0101a8a8(bVar6 + 2,iVar4 + 0x78);
        if ((iVar3 == 0) &&
           ((*(char *)(iVar4 + 0x3c) == '\x02' || (iVar3 = FUN_0101aa38(bVar6), iVar3 == 0)))) {
          iVar3 = FUN_0101ac18(bVar6);
        }
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < 2);
  }
  return iVar3;
}

