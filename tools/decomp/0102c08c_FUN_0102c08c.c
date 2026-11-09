
void FUN_0102c08c(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_r1;
  
  FUN_0102e682();
  iVar1 = DAT_0102c730;
  FUN_0102c194(DAT_0102c730 + 0xc0,extraout_r1,&DAT_0102c7a8);
  FUN_0100f100();
  FUN_0100f100(0x10e,0x46000000,&DAT_0102c7ec,0x10e,iVar1 + 0xe4);
  FUN_0100f100(0xd,0x46000000,&DAT_0102ca08,0xd,iVar1 + 500);
  FUN_0100f100(0x12,0x46000000,&DAT_0102ca24,0x12,iVar1 + 0x204);
  iVar5 = iVar1 + 0x218;
  FUN_0100f100(0x13,0x46000000,&DAT_0102ca48,0x13);
  pbVar2 = DAT_0102c734;
  FUN_0100f232(0x24,&LAB_0102ca70,0x24,iVar1 + 0x22c);
  FUN_01038d2e();
  FUN_0102556e();
  FUN_010101f4();
  FUN_01004676();
  if ((int)((uint)*pbVar2 << 0x1d) < 0) {
    FUN_0101e106(0);
  }
  if ((int)((uint)*pbVar2 << 0x1c) < 0) {
    FUN_0101e106(1);
  }
  puVar3 = DAT_0102c73c;
  if (*(char *)(DAT_0102c738 + 1) == '\0') {
    FUN_0102c178(*DAT_0102c73c);
  }
  piVar4 = DAT_0102c740;
  pin_update(*DAT_0102c740 + 499,0x20,0x20);
  FUN_0102c178(puVar3[1]);
  pin_update(piVar4[1] + 499,0x20,0x20,iVar5);
  return;
}

