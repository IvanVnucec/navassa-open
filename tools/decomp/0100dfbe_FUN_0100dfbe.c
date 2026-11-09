
undefined8 FUN_0100dfbe(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  byte *pbVar2;
  short *psVar3;
  
  psVar3 = DAT_0100e0a8;
  pbVar2 = DAT_0100e0a0;
  FUN_0100a5ca();
  sVar1 = *psVar3;
  FUN_0100a5ca(param_1,param_2,(uint)*pbVar2,DAT_0100e0b8 + (uint)*pbVar2 * 2);
  return CONCAT44(4,(int)sVar1);
}

