
undefined8
FUN_0102cf26(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  
  FUN_01015c54(7);
  iVar5 = DAT_0102d014;
  uVar1 = *DAT_0102d00c;
  uVar2 = *DAT_0102d010;
  uVar10 = 0;
  puVar9 = (undefined1 *)(DAT_0102d014 + 0x48);
  *param_1 = 0;
  *(undefined1 *)(iVar5 + 0x58) = 0;
  spi_notify_thunk(iVar5,0x58);
  *puVar9 = 0;
  bVar4 = true;
  FUN_0103ab44();
  uVar7 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar7 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  *DAT_0102d018 = *DAT_0102d018 & 0xef;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    enableIRQinterrupts((uVar7 & 1) == 1);
  }
  FUN_0102ceee(uVar7);
  iVar6 = DAT_0102d01c;
  FUN_0103a4e6(1);
  FUN_01015c80(7,*(undefined4 *)(iVar6 + 0x10),0,0);
  FUN_0103ac24();
  do {
    iVar8 = FUN_0103a2f6(iVar5);
    if ((iVar8 == 1) || (*(char *)(iVar5 + 0x58) != '\0')) {
      FUN_0103a296();
      FUN_0103a348(iVar5);
      *param_1 = 1;
LAB_0102cfbc:
      bVar4 = false;
    }
    else if (iVar8 == -1) {
      uVar10 = 0xea04;
      goto LAB_0102cfbc;
    }
    iVar8 = FUN_01015d78(7);
    if (iVar8 != 0) {
      FUN_0103a280();
LAB_0102cfd8:
      *DAT_0102d00c = uVar1;
      *DAT_0102d010 = uVar2;
      FUN_01015d2e(7);
      return CONCAT44(param_4,uVar10);
    }
    if ((*(char *)(iVar6 + 1) != '\x02') || (!bVar4)) goto LAB_0102cfd8;
  } while( true );
}

