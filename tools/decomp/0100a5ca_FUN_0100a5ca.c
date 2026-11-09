
void FUN_0100a5ca(int param_1,int param_2,int param_3,int param_4,short param_5,uint param_6)

{
  ushort uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ushort *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = DAT_0100a78c;
  iVar8 = *(int *)(DAT_0100a794 + param_1 * 4);
  uVar4 = FUN_0100a4f4();
  *puVar3 = uVar4;
  if (1 < param_6) {
    FUN_0100a506(param_1,0);
  }
  if (param_2 == 0) {
    puVar6 = (undefined *)0x100a7c0;
  }
  else {
    puVar6 = &DAT_0100a7a4;
  }
  uVar1 = *(ushort *)(puVar6 + param_6 * 4 + 2);
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  puVar5 = (ushort *)((uint)*(ushort *)(puVar6 + param_6 * 4) + iVar8 + param_3 * 2);
  for (iVar9 = 0; iVar9 < param_5; iVar9 = iVar9 + 1) {
    *puVar5 = *(ushort *)(param_4 + iVar9 * 2) & uVar1;
    puVar5 = puVar5 + 1;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    enableIRQinterrupts((uVar7 & 1) == 1);
  }
  if (param_6 < 2) {
    return;
  }
  FUN_0100a506(param_1,*puVar3,uVar1,uVar7);
  return;
}

