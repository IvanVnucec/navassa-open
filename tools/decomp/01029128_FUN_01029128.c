
undefined8 FUN_01029128(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_r3;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = DAT_010291d0;
  local_28 = DAT_01029254;
  uStack_24 = DAT_01029258;
  iVar6 = 0;
  uStack_20 = in_r3;
  do {
    uVar1 = *(undefined1 *)((int)&local_28 + iVar6);
    if (iVar6 == 0) {
      uVar3 = FUN_01029204();
      iVar5 = iVar2;
LAB_01029156:
      uVar7 = 0;
      uVar3 = uVar3 >> 9;
LAB_0102918c:
      if (((uVar3 & 1) != 0) &&
         (((iVar4 = FUN_01011616(uVar1), iVar4 == 0 ||
           (iVar5 = FUN_01011648(iVar4,iVar5 + 8,0), iVar5 == 0)) ||
          (iVar5 = FUN_01011690(uVar1,2,uVar7), iVar5 == 0)))) {
        uVar7 = 0x4904;
        goto LAB_010291bc;
      }
    }
    else {
      if (iVar6 == 1) {
        uVar3 = FUN_01029204();
        iVar5 = iVar2 + 0x600;
        goto LAB_01029156;
      }
      if (iVar6 == 2) {
        uVar3 = FUN_01029204();
        iVar5 = iVar2 + 0xc00;
LAB_01029176:
        uVar7 = 1;
        uVar3 = uVar3 >> 0xc;
        goto LAB_0102918c;
      }
      if (iVar6 == 3) {
        uVar3 = FUN_01029204();
        iVar5 = iVar2 + 0x1200;
        goto LAB_01029176;
      }
      if (iVar6 == 4) {
        uVar3 = FUN_01029204();
        iVar5 = iVar2 + 0x1800;
        uVar7 = 3;
        uVar3 = uVar3 >> 0xf;
        goto LAB_0102918c;
      }
    }
    iVar6 = iVar6 + 1;
    if (5 < iVar6) {
      uVar7 = 0;
LAB_010291bc:
      return CONCAT44(local_28,uVar7);
    }
  } while( true );
}

