
undefined8
FUN_01041e68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float local_24;
  
  local_28 = 0.0;
  local_24 = 0.0;
  uVar4 = *(undefined4 *)(DAT_01041ef4 + param_1 * 0x54 + 0xe8);
  FUN_0103cda8(0xfe,param_2,param_3,uVar4);
  iVar3 = FUN_0103cf2c(param_1,4,uVar4,&local_28,0,0);
  fVar7 = DAT_01041ef0;
  if (iVar3 == 0) {
    fVar6 = local_28 + local_24;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < 0.0) << 0x1f | (uint)(fVar6 == 0.0) << 0x1e;
    uVar5 = uVar1 | (uint)NAN(fVar6) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      fVar7 = (float)FUN_0101edc0();
      fVar6 = (float)VectorSignedToFloat(param_2,(byte)(uVar5 >> 0x15) & 3);
      fVar7 = fVar7 * 10.0 - fVar6 * 6.0;
    }
  }
  *param_5 = fVar7;
  return CONCAT44(param_4,iVar3);
}

