
undefined8 FUN_010192d4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  char in_NG;
  char in_ZR;
  char in_OV;
  char cVar6;
  
  iVar5 = param_4;
  FUN_01019268();
  if (in_NG == in_OV) {
    unaff_r4 = 0xe703;
  }
  else {
    FUN_0101927e();
    uVar1 = FUN_01019228();
    if (in_ZR == '\0') {
      pin_update(uVar1,8,0);
      uVar2 = *(ushort *)(param_3 + 0x324) - 1;
      uVar3 = uVar2 >> 8;
      cVar6 = uVar3 == 0;
      *(char *)(unaff_r5 + 0x38) = (char)(uVar2 >> 8);
      FUN_01019220(uVar3,unaff_r5 + 0x39);
    }
    else {
      cVar6 = '\0';
      pin_update(uVar1,8,8);
    }
    FUN_01019270();
    pin_update(unaff_r5 + 0xcd);
    cVar4 = (char)unaff_r5 + -0x34;
    FUN_0101925e(*(undefined2 *)(param_3 + 0x322));
    if (cVar6 == '\0') {
      uVar1 = FUN_01019232();
      *(char *)(iVar5 + 0x1d4) = (char)uVar1 + -1;
      uVar1 = FUN_01019250(uVar1,iVar5 + 0x1d5);
      FUN_010192c0(uVar1,8);
      *(char *)(unaff_r5 + 0x1d4) = (char)*(undefined2 *)(param_3 + 0x318) + -1;
      FUN_01019216();
    }
    else {
      FUN_010192c8(unaff_r5 + 0xb,*(undefined2 *)(param_3 + 0x318));
      *(char *)(unaff_r5 + 0xc) = cVar4;
    }
  }
  return CONCAT44(param_4,unaff_r4);
}

