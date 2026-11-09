
int FUN_0103b2e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                float *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  
  local_20 = 0.0;
  local_1c = 0.0;
  FUN_0103cda8(0x20,param_2);
  iVar3 = FUN_0103cf2c(param_1,0x80,param_4,&local_20,0,0);
  fVar6 = DAT_0103b4b4;
  if (iVar3 == 0) {
    fVar5 = local_20 + local_1c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < 0.0) << 0x1f | (uint)(fVar5 == 0.0) << 0x1e;
    uVar4 = uVar1 | (uint)NAN(fVar5) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
      fVar6 = (float)FUN_0101edc0();
      fVar5 = (float)VectorSignedToFloat(param_2,(byte)(uVar4 >> 0x15) & 3);
      fVar6 = fVar6 * 10.0 - fVar5 * 6.0;
    }
  }
  *param_5 = fVar6;
  return iVar3;
}

