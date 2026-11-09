
undefined8 FUN_01019012(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  ushort *puVar4;
  char in_NG;
  char in_ZR;
  char in_OV;
  char cVar5;
  
  FUN_01019268();
  if (in_NG == in_OV) {
    unaff_r4 = 0xe703;
  }
  else {
    FUN_0101927e();
    puVar4 = (ushort *)(param_3 + 0x120);
    FUN_01019228();
    if (in_ZR == '\0') {
      FUN_01019472();
      uVar1 = *(ushort *)(param_3 + 300) - 1;
      uVar2 = uVar1 >> 8;
      cVar5 = uVar2 == 0;
      *(char *)(unaff_r5 + 0x32) = (char)(uVar1 >> 8);
      FUN_01019220(uVar2,unaff_r5 + 0x33);
    }
    else {
      cVar5 = '\0';
      pin_update();
    }
    FUN_01019270();
    pin_update(unaff_r5 + 199);
    FUN_0101925e(*(undefined2 *)(param_3 + 0x12a),extraout_r1,unaff_r5 + 0xc6);
    if (cVar5 == '\0') {
      iVar3 = *(int *)(DAT_01019580 + unaff_r6 * 4);
      *(char *)(iVar3 + 0x1ce) = (char)*(undefined2 *)(param_3 + 0x126) + -1;
      *(char *)(iVar3 + 0x1cf) = (char)(*(ushort *)(param_3 + 0x126) - 1 >> 8);
      cVar5 = *(char *)(param_3 + 0x123);
      if (cVar5 != '\0') {
        cVar5 = '\x01';
      }
      pin_update(iVar3 + 0x1d6,1,cVar5);
      *(char *)(unaff_r5 + 0x11) = (char)*puVar4 + -1;
      *(char *)(unaff_r5 + 0x12) = (char)(*puVar4 - 1 >> 8);
    }
    else {
      *(char *)(unaff_r5 + 5) = (char)*puVar4;
      *(char *)(unaff_r5 + 6) = (char)(*puVar4 >> 8);
    }
  }
  return CONCAT44(param_4,unaff_r4);
}

