
void sched_dep_compare(int param_1,int param_2,undefined1 *param_3,undefined4 param_4,byte *param_5)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  
  uVar1 = *(uint *)(param_2 + 0x60) & *(uint *)(param_1 + 0x60);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  *param_3 = (char)uVar1;
  bVar3 = *(char *)(param_1 + 100) != *(char *)(param_2 + 100);
  *(byte *)param_4 = bVar3;
  bVar2 = (*(uint *)(param_1 + 0x14) & 3) != 0;
  if (bVar2) {
    bVar3 = *(byte *)(param_2 + 0x14);
  }
  if (!bVar2 || (bVar3 & 3) == 0) {
    if ((*(uint *)(param_1 + 0x14) & 0xc) == 0) {
      bVar3 = 0;
      goto LAB_01028d60;
    }
    bVar3 = *(byte *)(param_2 + 0x14) & 0xc;
    if ((*(byte *)(param_2 + 0x14) & 0xc) == 0) goto LAB_01028d60;
  }
  bVar3 = 1;
LAB_01028d60:
  *param_5 = bVar3;
  return;
}

