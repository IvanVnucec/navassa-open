
undefined8 FUN_0103ab8a(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 uVar3;
  
  iVar1 = DAT_0103ac18;
  spi_notify_thunk(DAT_0103ac18,0x58);
  *(undefined1 *)(iVar1 + 0x48) = 1;
  FUN_0103a4e6(1);
  FUN_01015c54(0);
  FUN_01015c80(0,DAT_0103ac1c,0,0);
  FUN_0103ac24();
  while( true ) {
    iVar2 = FUN_0103a2f6(iVar1);
    if (iVar2 == 1) {
      uVar3 = FUN_0103a524();
      *DAT_0103ac08 = uVar3;
      uVar3 = 0;
      goto LAB_0103abd6;
    }
    if (iVar2 == -1) break;
    iVar2 = FUN_01015d78(0);
    if (iVar2 != 0) {
      uVar3 = 0xe102;
LAB_0103abd6:
      FUN_01015d2e(0);
      pin_update(DAT_0103ac20,0x10,0);
      FUN_0103a4be(0,0);
      return CONCAT44(in_r3,uVar3);
    }
  }
  uVar3 = 0x3500;
  goto LAB_0103abd6;
}

