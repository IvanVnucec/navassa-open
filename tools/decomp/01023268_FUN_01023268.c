
uint FUN_01023268(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  int aiStack_30 [6];
  
  puVar1 = DAT_01023da8;
  FUN_0101206c(aiStack_30,&DAT_010232a0,0x18);
  uVar2 = 1 << (aiStack_30[param_1] + param_2 & 0xffU) & (uint)*puVar1;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  return uVar2 & 0xff;
}

