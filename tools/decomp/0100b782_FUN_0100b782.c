
longlong FUN_0100b782(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_2 & 0xffffc000) != 0x46000000) {
    uVar3 = FUN_0100b76c();
    puVar1 = DAT_0100b7bc;
    *(undefined4 *)uVar3 = (int)((ulonglong)uVar3 >> 0x20);
    *puVar1 = 0x1bd;
    FUN_0100b7c4();
  }
  uVar2 = FUN_0100b8ce(param_2,param_3);
  FUN_0100b5ac(param_1,uVar2);
  return (ulonglong)param_4 << 0x20;
}

