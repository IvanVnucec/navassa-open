
void prvAddCurrentTaskToDelayedList(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_0101ba48;
  iVar1 = DAT_0101ba44;
  uVar5 = *(uint *)(DAT_0101ba44 + 0x4c);
  iVar3 = vListRemove(*(int *)(DAT_0101ba48 + 0x78) + 4);
  if (iVar3 == 0) {
    *(uint *)(iVar2 + 0x7c) =
         *(uint *)(iVar2 + 0x7c) & ~(1 << (*(uint *)(*(int *)(iVar2 + 0x78) + 0x2c) & 0xff));
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    vListInsert(iVar1 + 0x34,*(int *)(iVar2 + 0x78) + 4);
    return;
  }
  uVar4 = param_1 + uVar5;
  *(uint *)(*(int *)(iVar2 + 0x78) + 4) = uVar4;
  if (uVar4 < uVar5) {
    vListInsertGeneric(*(undefined4 *)(iVar1 + 0x2c),*(int *)(iVar2 + 0x78) + 4);
    return;
  }
  vListInsertGeneric(*(undefined4 *)(iVar1 + 0x28),*(int *)(iVar2 + 0x78) + 4);
  if (uVar4 < *(uint *)(iVar1 + 100)) {
    *(uint *)(iVar1 + 100) = uVar4;
  }
  return;
}

