
undefined8 FUN_01008d14(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_r3;
  uint uVar5;
  int iVar6;
  uint local_20;
  
  local_20 = in_r3;
  FUN_010086a6(0);
  FUN_010086a6(1);
  FUN_010086a6(2);
  uVar3 = DAT_01009360;
  iVar4 = DAT_0100935c;
  iVar2 = DAT_010091f8;
  iVar1 = DAT_010091f0;
  spi_notify_thunk(DAT_010092cc,0x60);
  FUN_0100b15c();
  FUN_01015f50();
  pin_update(DAT_010099e8,0xf,*(undefined1 *)(iVar4 + 0x12));
  FUN_01007244(*(undefined1 *)(iVar4 + 0x12));
  FUN_010072e8();
  iVar4 = FUN_01006a26();
  uVar5 = 0;
  do {
    FUN_01013b90(uVar5 * 2 + 0xc & 0xff,&local_20);
    if ((iVar4 == 0) && ((local_20 & 0xff) != 0)) {
      FUN_01008de0(uVar3,uVar5);
      FUN_01008f0c(uVar5,0,0);
      iVar4 = *(int *)(iVar2 + uVar5 * 4);
      iVar6 = iVar4 + 0x27;
      pin_update(iVar6,0x3f,0);
      pin_update(iVar6,0x40,0);
      FUN_01009094(uVar5,0);
      iVar4 = FUN_01008850(iVar4,2);
      FUN_01009094(uVar5,1);
      *(undefined1 *)(uVar5 * 0x60 + iVar1 + 0x11) = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  FUN_01015fcc();
  return CONCAT44(local_20,iVar4);
}

