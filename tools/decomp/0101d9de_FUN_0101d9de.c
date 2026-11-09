
void FUN_0101d9de(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = *param_2;
  uVar4 = *(ushort *)(param_2 + 1);
  bVar1 = *(byte *)((int)param_2 + 7);
  uVar2 = *(undefined1 *)(param_2 + 2);
  cVar3 = *(char *)((int)param_2 + 6);
  iVar6 = *(int *)(DAT_0101dac8 + param_1 * 4);
  *(char *)(iVar6 + 0x7c) = (char)uVar7;
  if (cVar3 == '\0') {
    uVar5 = 4;
  }
  else {
    uVar5 = 0;
  }
  *(char *)(iVar6 + 0x7b) = (char)((uint)uVar7 >> 8);
  *(char *)(iVar6 + 0x7a) = (char)((uint)uVar7 >> 0x10);
  *(char *)(iVar6 + 0x79) = (char)((uint)uVar7 >> 0x18);
  *(char *)(iVar6 + 0x7f) = (char)uVar4;
  pin_update(iVar6 + 0x7e,1,uVar4 >> 8);
  *(undefined1 *)(iVar6 + 0x7d) = uVar2;
  pin_update(iVar6 + 0x6e,8,((uint)bVar1 << 0x1b) >> 0x18);
  pin_update(iVar6 + 0x6e,4,uVar5,param_4);
  return;
}

