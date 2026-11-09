
void FUN_01010b3e(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = DAT_01010e50;
  if (param_1 != 0) {
    iVar4 = DAT_01010e54;
  }
  iVar5 = *(int *)(DAT_01010e3c + param_1 * 4) + 0x18a;
  puVar6 = (undefined4 *)(param_2 + param_3 * 8);
  if (param_6 == 0) {
    pin_update(iVar5,2,2);
    for (; (int)param_3 <= param_4; param_3 = param_5 + param_3 & 0xff) {
      iVar2 = iVar4 + param_3 * 8;
      puVar1 = puVar6 + 1;
      *(undefined4 *)(iVar2 + 0x400) = *puVar6;
      puVar6 = puVar6 + 2;
      *(undefined4 *)(iVar2 + 0x404) = *puVar1;
    }
    uVar3 = 2;
  }
  else {
    FUN_01010cba();
    for (; (int)param_3 <= param_4; param_3 = param_5 + param_3 & 0xff) {
      puVar1 = (undefined4 *)(iVar4 + param_3 * 8);
      puVar7 = puVar6 + 1;
      *puVar1 = *puVar6;
      puVar6 = puVar6 + 2;
      puVar1[1] = *puVar7;
    }
    uVar3 = 1;
  }
  pin_update(iVar5,uVar3,0,param_4);
  return;
}

