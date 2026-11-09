
void FUN_01010aa8(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(DAT_01010e3c + param_1 * 4);
  iVar5 = DAT_01010e50;
  if (param_1 != 0) {
    iVar5 = DAT_01010e54;
  }
  if (param_6 == 0) {
    FUN_01010b38(iVar1,2,2);
    for (; (int)param_3 <= param_4; param_3 = param_5 + param_3 & 0xff) {
      iVar3 = iVar5 + param_3 * 8;
      *param_2 = *(uint *)(iVar3 + 0x400) & 0x1fffff;
      FUN_01010b2c(iVar3 + 0x404);
      param_2 = param_2 + 1;
    }
    uVar4 = 2;
  }
  else {
    FUN_01010c68();
    for (; (int)param_3 <= param_4; param_3 = param_5 + param_3 & 0xff) {
      puVar2 = (uint *)(iVar5 + param_3 * 8);
      *param_2 = *puVar2 & 0x1fffff;
      FUN_01010b2c(puVar2 + 1);
      param_2 = param_2 + 1;
    }
    uVar4 = 1;
  }
  pin_update(iVar1 + 0x18a,uVar4,0,param_4);
  return;
}

