
undefined4 FUN_01018076(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar4 = DAT_010181d0;
  iVar3 = DAT_010181cc;
  iVar2 = DAT_01018188;
  uVar7 = 0;
  do {
    if ((*(short *)(iVar4 + 0x22) != 0) && (1 << (uVar7 & 0xff) != 0)) {
      cVar1 = *(char *)(iVar4 + (uint)*(byte *)(iVar3 + uVar7) * 0xbc + 0x228);
      iVar8 = *(int *)(iVar2 + uVar7 * 4);
      if (cVar1 == '\x02') {
        iVar8 = iVar8 + 0x10;
        uVar9 = FUN_0101796c(2,1,param_1);
        FUN_010180dc((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(param_1 & 0x7f) << 1);
        uVar5 = 4;
        uVar6 = (param_1 & 0x3f) << 2;
      }
      else {
        if (cVar1 != '\x01') goto LAB_010180d2;
        uVar5 = 1;
        iVar8 = iVar8 + 1;
        uVar6 = param_1;
      }
      pin_update(iVar8,uVar5,uVar6);
    }
LAB_010180d2:
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      return param_4;
    }
  } while( true );
}

