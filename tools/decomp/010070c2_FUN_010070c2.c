
undefined8 FUN_010070c2(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r5;
  uint uVar7;
  int iVar8;
  uint unaff_r9;
  bool bVar9;
  
  cVar1 = *(char *)(DAT_010071b0 + param_1 + 2);
  iVar8 = 0;
  if (cVar1 == '\0') {
    uVar6 = 0;
    uVar7 = 1;
    unaff_r9 = param_2;
  }
  else if (param_1 < 2) {
    uVar6 = 1;
    unaff_r9 = 1;
    uVar7 = param_2;
    if ((cVar1 != '\x01') && (uVar7 = unaff_r5, cVar1 == '\x02')) {
      uVar7 = 1;
    }
  }
  else {
    iVar8 = 0xca03;
    uVar6 = param_3;
    uVar7 = unaff_r5;
  }
  bVar9 = true;
  iVar2 = 0x40;
  uVar5 = uVar7 & 0xff;
  if (uVar5 == 0) {
    uVar5 = (uint)*(ushort *)(DAT_010071b0 + param_1 * 2 + 0x10);
    bVar9 = uVar5 != 1;
    if (bVar9) {
      iVar2 = 0;
    }
  }
  if (iVar8 == 0) {
    if (param_3 == 0) {
      uVar3 = DAT_010078f4;
      if ((param_1 == 0) || (uVar3 = DAT_0100735c, param_1 == 1)) {
        pin_update(uVar3,1,uVar6 & 0xff);
      }
      FUN_01007054(param_1,uVar7 & 0xff);
      FUN_01006e2e(param_1,unaff_r9 & 0xff);
    }
    else {
      uVar6 = iVar2 + uVar6 + unaff_r9 * 6;
      if (param_1 == 0) {
        uVar3 = FUN_0100719e(iVar2,uVar5,uVar6 & 0xff,0x47);
        uVar4 = FUN_010071a2(uVar3,DAT_01007bcc,bVar9,1);
        uVar3 = DAT_010077bc;
      }
      else {
        uVar3 = FUN_010071a2(iVar2,DAT_0100735c,uVar6 & 0xff,0x47);
        uVar4 = FUN_010071a2(uVar3,DAT_01007bd0,bVar9,1);
        uVar3 = DAT_01007b48;
      }
      FUN_010071a2(uVar4,uVar3,(uVar7 & 0xf) << 4,0x10);
    }
  }
  return CONCAT44(param_4,iVar8);
}

