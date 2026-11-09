
void FUN_0100ac14(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar5 = DAT_0100acb4;
  uVar6 = getMainStackPointer();
  *(undefined4 *)(DAT_0100acb4 + 4) = uVar6;
  uVar6 = getProcessStackPointer();
  *(undefined4 *)(iVar5 + 8) = uVar6;
  uVar7 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar4 = getCurrentExceptionNumber();
    uVar7 = uVar7 | uVar4 & 0x1f;
  }
  *(uint *)(iVar5 + 0xc) = uVar7;
  uVar7 = 0;
  do {
    puVar2 = &DAT_0100acd0 + uVar7;
    iVar1 = uVar7 * 4;
    uVar7 = uVar7 + 1;
    *(undefined4 *)(iVar5 + iVar1 + 0x10) = *(undefined4 *)*puVar2;
  } while (uVar7 < 0x19);
  return;
}

