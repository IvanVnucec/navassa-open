
undefined8 FUN_01042e44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = DAT_01043068;
  local_18 = DAT_01043084;
  uVar3 = (*DAT_01043060 + 1) *
          (uint)*(byte *)((int)&local_18 + (((uint)*DAT_0104305c << 0x1a) >> 0x1e));
  uStack_14 = param_4;
  if (uVar3 == 0) {
    *DAT_01043064 = s_spimaster_c_01043088;
    *puVar1 = 0x161;
    boot_msg(1,0xff00,3);
  }
  iVar2 = DAT_01043070;
  fVar5 = (float)VectorUnsignedToFloat
                           (*(uint *)(DAT_0104306c + 0x24) / uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned((fVar5 * fVar4) / DAT_01043034,3);
  *(char *)(DAT_01043070 + 4) = (char)((uint)uVar6 >> 0x18);
  *(char *)(iVar2 + 3) = (char)((uint)uVar6 >> 0x10);
  *(char *)(iVar2 + 2) = (char)((uint)uVar6 >> 8);
  *(char *)(iVar2 + 1) = (char)uVar6;
  pin_update(iVar2,1,1);
  return CONCAT44(uStack_14,local_18);
}

