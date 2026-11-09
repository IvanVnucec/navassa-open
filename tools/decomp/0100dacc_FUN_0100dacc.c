
void FUN_0100dacc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar9 = FUN_0100de44(*(undefined4 *)(param_1 + 0x14),&local_28);
  puVar1 = DAT_0100e014;
  if (iVar9 != 0) {
    cVar8 = *(char *)(DAT_0100e028 + 0x77d);
    if (cVar8 != '\0') {
      cVar8 = '\x01';
    }
    *DAT_0100e010 = cVar8;
    spi_notify_thunk(puVar1 + 0x109,0x90);
    spi_notify_thunk(DAT_0100e020,0x220);
    spi_notify_thunk(DAT_0100e03c,400);
    local_28 = CONCAT31(local_28._1_3_,*DAT_0100e010);
    if (*DAT_0100e010 == '\0') {
      spi_notify_thunk(DAT_0100e048,0x240);
      FUN_0100d7b8(DAT_0100e04c,0x120);
    }
    else {
      spi_notify_thunk(DAT_0100e040,0x3000);
      FUN_0100d7b8(DAT_0100e044,0x1800);
      spi_notify_thunk(DAT_0100e018,0x60);
      *puVar1 = 0;
    }
    iVar6 = DAT_0100e05c;
    iVar5 = DAT_0100e058;
    iVar4 = DAT_0100e054;
    iVar2 = DAT_0100e040;
    iVar9 = DAT_0100e020;
    FUN_0100d7b8(DAT_0100e050,0x400);
    spi_notify_thunk(puVar1 + 1,0x30);
    puVar7 = DAT_0100e060;
    iVar3 = DAT_0100e044;
    iVar13 = 0;
    do {
      iVar12 = iVar9 + iVar13 * 0x110;
      iVar11 = DAT_0100e050 + iVar13 * 0x200;
      if ((char)local_28 == '\0') {
        iVar10 = DAT_0100e048 + iVar13 * 0x30;
        *(int *)(iVar12 + 0x14) = iVar10;
        *(int *)(iVar10 + 0x14) = DAT_0100e04c + iVar13 * 0x18;
      }
      else {
        iVar10 = iVar13 * 0x1800 + iVar2;
        *(int *)(iVar12 + 0x14) = iVar10;
        *(int *)(iVar10 + 0x14) = iVar13 * 0xc00 + iVar3;
        iVar10 = iVar11 + 0x100;
        *(int *)(iVar12 + 0xec) = iVar10;
        *(int *)(iVar6 + iVar13 * 4) = iVar11;
        *(int *)(iVar5 + iVar13 * 4) = iVar10;
        *(int *)(iVar4 + iVar13 * 4) = iVar10;
      }
      *(int *)(iVar12 + 0xe4) = iVar11;
      *(int *)(iVar12 + 0xe8) = iVar11;
      *(undefined1 *)(DAT_0100e064 + iVar13) = 0;
      fVar14 = (float)VectorUnsignedToFloat((uint)*puVar7,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar12 + 0xf8) = 1.0 / fVar14;
      fVar14 = (float)VectorUnsignedToFloat((uint)puVar7[1],(byte)(in_fpscr >> 0x15) & 3);
      iVar13 = iVar13 + 1;
      *(float *)(iVar12 + 0xfc) = 1.0 / fVar14;
    } while (iVar13 < 2);
    *DAT_0100e034 = 0;
  }
  return;
}

