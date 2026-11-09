
void FUN_01038c6a(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = 0;
  uVar7 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar7 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  for (uVar5 = 0; uVar5 < param_3; uVar5 = uVar5 + 1) {
    bVar2 = *(byte *)(param_1 + uVar5 * 8 + 4);
    for (uVar6 = 0; uVar6 < bVar2; uVar6 = uVar6 + 1) {
      puVar1 = (undefined1 *)(param_4 + iVar4);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(*(int *)(param_1 + uVar5 * 8) + param_2 + uVar6) = *puVar1;
    }
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    enableIRQinterrupts((uVar7 & 1) == 1);
  }
  return;
}

