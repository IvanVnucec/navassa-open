
undefined8
FUN_010368cc(float param_1,char *param_2,byte *param_3,undefined1 *param_4,undefined4 param_5)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  uint uVar6;
  
  uVar4 = in_fpscr & 0xfffffff | (uint)(param_1 == 0.0) << 0x1e | (uint)(0.0 <= param_1) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  *param_4 = 1;
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
    fVar5 = (float)FUN_0103c0a0();
    fVar5 = (float)FUN_010145b8(-fVar5);
    if ((0.0 <= fVar5) && (fVar5 < DAT_01036c4c != (NAN(fVar5) || NAN(DAT_01036c4c)))) {
      uVar6 = (uint)fVar5;
      cVar3 = (char)uVar6;
      fVar5 = (float)VectorUnsignedToFloat
                               (1 << (uVar6 & 0xff),(byte)((uVar4 & 0xfffffff) >> 0x15) & 3);
      if (0.0 < fVar5 * param_1) {
        fVar5 = (float)FUN_0101ee64(fVar5 * param_1 * DAT_01036c50);
        *param_3 = (byte)(int)fVar5;
        if (*param_3 == 0) {
          if ((uVar6 & 0xff) != 0x1f) {
            cVar3 = cVar3 + '\x01';
          }
          *param_4 = 0;
        }
        if (0x3f < *param_3) {
          *param_3 = 0x3f;
          *param_4 = 0;
        }
        *param_2 = cVar3;
        uVar2 = 0;
        goto LAB_0103696e;
      }
    }
  }
  uVar2 = 0xcc02;
LAB_0103696e:
  return CONCAT44(param_5,uVar2);
}

