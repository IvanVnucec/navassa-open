
undefined4 FUN_01039846(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  for (uVar7 = 0; uVar7 < 4; uVar7 = uVar7 + 1) {
    if ((int)((param_1 >> (uVar7 >> 1 & 0xff)) << 0x1f) < 0) {
      iVar1 = param_2 + uVar7 * 8;
      uVar4 = *(undefined4 *)(iVar1 + 0x3c);
      iVar5 = param_2 + uVar7 * 8;
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar5 + 0x5c) = uVar4;
      for (uVar6 = 0; (uVar6 & 0xff) < 0x10; uVar6 = (uVar6 & 0xff) + 1) {
        iVar1 = param_2 + uVar7 * 8;
        uVar2 = FUN_0101bb08(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
                             (uVar6 & 0xff) << 2);
        uVar3 = FUN_01035f68(*(undefined4 *)(DAT_0103a204 + 0x10),
                             *(undefined4 *)(DAT_0103a204 + 0x14),(uVar6 & 0xff) << 2);
        uVar3 = uVar3 & 0xf;
        if ((int)(uVar3 << 0x1c) < 0) {
          uVar3 = uVar3 | 0xfffffff0;
        }
        iVar1 = uVar3 + ((uVar2 & 0xf) - 4);
        if (4 < iVar1) {
          iVar1 = 4;
        }
        if (iVar1 < -4) {
          iVar1 = -4;
        }
        FUN_0103a02c(uVar7,uVar6 & 0xff,iVar1,param_2 + uVar7 * 8 + 0x38);
      }
    }
  }
  return param_4;
}

