
longlong FUN_01033154(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20;
  undefined4 uStack_1c;
  
  local_20 = param_3;
  uStack_1c = param_4;
  FUN_01024e50(param_1,0);
  FUN_01024e36(param_1,1);
  iVar1 = DAT_010335bc;
  iVar3 = DAT_010335bc + (short)param_1 * 0x5c;
  FUN_01024ce6(param_1,*(undefined1 *)(iVar3 + 0x35a));
  FUN_01024dea(param_1,*(undefined1 *)(iVar3 + 0x35b));
  FUN_01024e0c(param_1,*(undefined4 *)(iVar3 + 0x35c));
  FUN_010251b4(param_1,1,&local_20);
  uVar2 = FUN_01024d26(param_1,0);
  FUN_01024d04(param_1,0xf,0);
  FUN_0103443c(param_1,iVar1 + param_1 * 0x1ac + 0xbc);
  FUN_010344a8(param_1);
  FUN_01024d04(param_1,uVar2,0);
  FUN_010251b4(param_1,local_20 & 0xff,0);
  FUN_01024e50(param_1,1);
  return (ulonglong)local_20 << 0x20;
}

