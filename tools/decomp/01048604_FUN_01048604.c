
undefined8 FUN_01048604(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 unaff_r4;
  byte *pbVar4;
  undefined1 unaff_r6;
  int iVar5;
  undefined1 unaff_r8;
  undefined4 uVar6;
  undefined1 unaff_r11;
  undefined4 uVar7;
  
  uVar3 = (uint)*(byte *)(DAT_01048b40 + param_1);
  iVar5 = DAT_01048b34 + param_1;
  uVar6 = 0;
  if (6 < *(byte *)(iVar5 + 0x14)) goto LAB_010487ce;
  switch(param_1 & 0xff) {
  case 0:
    unaff_r6 = 3;
    unaff_r11 = 3;
    break;
  case 1:
    unaff_r6 = 4;
    unaff_r11 = 6;
    break;
  case 2:
    unaff_r6 = 5;
    unaff_r11 = 4;
    break;
  case 3:
    unaff_r6 = 6;
    unaff_r11 = 7;
  }
  iVar1 = thunk_FUN_01006cb8(param_2,uVar3);
  if (iVar1 == 0) {
    unaff_r8 = 0xc;
    unaff_r4 = 0xd;
  }
  else if (iVar1 == 1) {
    unaff_r8 = 0xe;
    unaff_r4 = 0xf;
  }
  else if (iVar1 == 2) {
    unaff_r8 = 0x10;
    unaff_r4 = 0x11;
  }
  pbVar4 = (byte *)(DAT_01048b30 + uVar3);
  if (param_3 == 0) {
    if (*(char *)(iVar5 + 0x10) != '\0') goto LAB_010487ce;
    *(undefined1 *)(iVar5 + 0x10) = 1;
    if (*(char *)(iVar5 + 0x14) == '\x03') {
      if (pbVar4[2] == 0) {
        uVar6 = 0xe900;
      }
      else if (pbVar4[2] == 2) {
        thunk_FUN_01014498(unaff_r11);
        thunk_FUN_01014498(unaff_r4);
      }
      if (*pbVar4 == 0) {
        if ((pbVar4[0x11] == 0) || (*(char *)(DAT_01048b64 + iVar1) != '\0')) {
          FUN_010487d4();
        }
        else {
          if (*(char *)(DAT_01048b34 + iVar1 + 6) != '\0') {
            FUN_010487d4();
            uVar6 = thunk_FUN_0102dc40(param_1 & 0xff,0,0);
          }
          thunk_FUN_01015c80(unaff_r6,*(undefined2 *)(DAT_01048b3c + 0x782),0,1);
        }
      }
      *(undefined1 *)(iVar5 + 0x14) = 1;
      *(undefined1 *)(iVar5 + 0x10) = 0;
      goto LAB_010487ce;
    }
    if (*(char *)(iVar5 + 0x14) != '\x04') {
      *(undefined1 *)(iVar5 + 0x10) = 0;
      goto LAB_010487ce;
    }
    if (pbVar4[2] < 2) {
      uVar6 = 0xe900;
    }
    if ((*(char *)(iVar5 + 0xb) == '\x01') || (1 < *pbVar4)) goto LAB_010487ce;
    uVar7 = 1;
    FUN_010487dc();
    thunk_FUN_01015c80(unaff_r6,200,0,1,uVar3,uVar7);
    *(undefined1 *)(iVar5 + 0xb) = 1;
    uVar2 = 3;
  }
  else {
    if (iVar1 == 2) {
      if (*(char *)(DAT_01048b54 + 0xd0) == '\0') {
        FUN_01048596(2);
        thunk_FUN_010085e4(2,param_2,uVar3 & 0xff,0);
        thunk_FUN_010143cc(unaff_r8,0);
        thunk_FUN_010143cc(unaff_r4,0);
      }
      goto LAB_010487ce;
    }
    thunk_FUN_01015d08(unaff_r6);
    if (pbVar4[2] == 0) goto LAB_010487ce;
    if ((*(char *)(DAT_01048b60 + iVar1 * 0x60) == '\0') && (*(byte *)(iVar5 + 0x14) < 3)) {
      FUN_01048596(iVar1);
      *(undefined1 *)(iVar5 + 0x14) = 3;
    }
    if ((pbVar4[2] < 2) || (3 < *(byte *)(iVar5 + 0x14))) goto LAB_010487ce;
    if (*(char *)(iVar5 + 0xb) != '\0') {
      FUN_010487dc();
      *(undefined1 *)(iVar5 + 0xb) = 0;
    }
    uVar2 = 4;
  }
  *(undefined1 *)(iVar5 + 0x14) = uVar2;
LAB_010487ce:
  return CONCAT44(uVar3,uVar6);
}

