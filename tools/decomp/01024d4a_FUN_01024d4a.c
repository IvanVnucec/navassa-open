
void FUN_01024d4a(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int iStack_18;
  
  uVar3 = 0;
  iStack_18 = param_4;
  do {
    *(undefined2 *)(&local_28 + uVar3) = *(undefined2 *)(param_4 + uVar3 * 4);
    iVar5 = uVar3 * 4;
    iVar1 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(undefined2 *)((int)&local_28 + iVar1 + 2) = *(undefined2 *)(param_4 + iVar5 + 2);
  } while (uVar3 < 4);
  FUN_01024de2();
  uVar4 = set_priority(1);
  iVar5 = *(int *)(DAT_01025444 + param_2 * 4);
  puVar6 = (uint *)(iVar5 + 4);
  uVar3 = (param_1 & 0x3ff | (param_3 & 0xf) << 9) << 2;
  *puVar6 = uVar3;
  *(undefined4 *)(iVar5 + 8) = local_28;
  *(undefined4 *)(iVar5 + 0xc) = local_24;
  *(undefined4 *)(iVar5 + 0x10) = local_20;
  *(undefined4 *)(iVar5 + 0x14) = local_1c;
  *puVar6 = uVar3 | 2;
  *puVar6 = uVar3;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar4);
  }
  uVar7 = FUN_01024dcc(0x32);
  FUN_01024de4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
  return;
}

