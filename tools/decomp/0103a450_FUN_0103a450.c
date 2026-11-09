
void FUN_0103a450(float param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float extraout_s0;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = *DAT_0103a694;
  uVar2 = FUN_010145b8(param_1 / fVar6);
  uVar5 = VectorFloatToUnsignedFixed(param_1 / fVar6 - extraout_s0,0x20,0x20);
  FUN_0103a4aa(uVar5,uVar2,DAT_0103a698);
  pin_update(DAT_0103a69c,2,2);
  uVar2 = heap_block_probe();
  do {
    bVar1 = *(byte *)(iVar4 + 0x2c);
    uVar3 = xPortGetFreeHeapSize(uVar2);
    if (1 < uVar3) {
      return;
    }
  } while ((int)((uint)bVar1 << 0x1d) < 0);
  return;
}

