
void FUN_01024f34(undefined4 param_1,int param_2,int *param_3,int *param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = FUN_01024cb4();
  FUN_01024ca2(param_1,1);
  iVar2 = FUN_01024f96();
  puVar3 = (uint *)(iVar2 + param_2 * 4);
  *param_3 = (int)*puVar3 >> 0xe;
  param_3[1] = (int)puVar3[0x1000] >> 0xe;
  *param_4 = (int)puVar3[0x2000] >> 0xe;
  param_4[1] = (int)puVar3[0x3000] >> 0xe;
  *param_5 = *puVar3 & 1;
  FUN_01024ca2(param_1,uVar1,param_4);
  return;
}

