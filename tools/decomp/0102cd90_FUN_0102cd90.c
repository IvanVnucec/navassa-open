
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0102cd90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar3;
  
  FUN_01010218();
  FUN_0100817e(2,7,1);
  if (*(char *)(DAT_0102ce64 + 0x1c6) == '\0') {
    uVar6 = 0x80;
    uVar5 = 0x80;
    uVar4 = 0x123;
    uVar3 = DAT_0102ce68;
  }
  else {
    uVar6 = 0;
    uVar5 = 0xff;
    uVar4 = 0x3a;
    uVar3 = DAT_0102ce6c;
  }
  uVar7 = 100;
  iVar2 = FUN_01022164(uVar3,uVar4,uVar5,uVar6,100,in_r3);
  puVar1 = DAT_0102ce74;
  if (iVar2 == 0xe102) {
    *DAT_0102ce70 = s_monitor_rssi_c_0102ce7b + 1;
    *puVar1 = 0x157;
    boot_msg(1,0xea05,2);
  }
  periph_init_f(1);
  FUN_0102ccba(1,2);
  iVar2 = FUN_0102ccd2();
  if (iVar2 == 0xe101) {
    iVar2 = 0;
  }
  FUN_0100817e(2,9,1);
  if (*(char *)(DAT_0102ce48 + 0x14) == '\x01') {
    FUN_0103a280();
  }
  periph_init_f(1);
  FUN_0102ccba(2,3);
  *_DAT_0102ce78 = 0;
  return CONCAT44(uVar7,iVar2);
}

