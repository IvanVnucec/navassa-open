
undefined8 FUN_01042dba(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  pbVar1 = DAT_01043050;
  uVar2 = FUN_01042e3a();
  uVar2 = FUN_01042e3e(uVar2,2,0);
  uVar2 = FUN_01042e3e(uVar2,4,4);
  uVar2 = FUN_01042e3e(uVar2,8,0);
  uVar2 = FUN_01042e3e(uVar2,0x40,0);
  iVar3 = DAT_01043054;
  uVar2 = FUN_01042db4(uVar2,0x1f,param_1 & 0x1f);
  *(char *)(iVar3 + 1) = (char)param_2;
  *(char *)(iVar3 + 2) = (char)((uint)param_2 >> 8);
  FUN_01042e3e(uVar2,8,8);
  FUN_01015c54(0xb);
  FUN_01042e2e();
  do {
    if (-1 < (int)((uint)*pbVar1 << 0x1c)) {
      uVar2 = 0;
      goto LAB_01042e20;
    }
    iVar3 = FUN_01015d78(0xb);
  } while (iVar3 == 0);
  uVar2 = 0xb605;
LAB_01042e20:
  FUN_01015d2e(0xb);
  return CONCAT44(param_4,uVar2);
}

