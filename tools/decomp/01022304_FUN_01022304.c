
void FUN_01022304(uint param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 unaff_r7;
  
  pbVar4 = DAT_010223a4;
  if (param_1 != 0) {
    pbVar4 = DAT_010223a8;
  }
  if ((int)(((((uint)*(ushort *)(DAT_010223a0 + 0x22) << 0x1c) >> 0x1e) >> (param_1 & 0xff)) << 0x1f
           ) < 0) {
    FUN_010240e8(param_1);
    FUN_0102410c(param_1);
    FUN_01022360(param_1,0xffff);
    *(undefined1 *)(DAT_010223ac + param_1 * 0x24c + 0x248) = 0xff;
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    *pbVar4 = *pbVar4 | 0x80;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      enableIRQinterrupts((uVar3 & 1) == 1);
    }
  }
  puVar2 = DAT_0103685c;
  if (param_1 == 0) {
    uVar3 = 0x40000000;
  }
  else {
    uVar3 = 0x8000000;
  }
  DAT_0103685c[0xc] = uVar3;
  *puVar2 = *puVar2 | uVar3;
  puVar2[0xf] = puVar2[0xf] | uVar3;
  puVar2[0x10] = puVar2[0x10] & ~uVar3;
  FUN_01002880(0x35);
  FUN_010028fc(0x35,6);
  FUN_010028ac(0x35,unaff_r7);
  return;
}

