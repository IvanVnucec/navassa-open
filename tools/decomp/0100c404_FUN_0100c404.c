
undefined4
FUN_0100c404(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_3 + 0xc);
  uVar3 = VectorUnsignedToFloat((uint)*(ushort *)(iVar1 + 0x56),(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = FUN_0100c468(param_1,param_2,uVar3,DAT_0100c624);
  *(undefined4 *)(iVar1 + 0x50) = uVar3;
  fVar2 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar1 + 0x54),(byte)(in_fpscr >> 0x15) & 3)
  ;
  *(float *)(iVar1 + 0x4c) = fVar2 / DAT_0100c784;
  uVar3 = FUN_0101edc0();
  uVar3 = FUN_0100c468(uVar3,0xc1a00000);
  *(undefined4 *)(iVar1 + 0x48) = uVar3;
  return param_6;
}

