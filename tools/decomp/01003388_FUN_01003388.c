
longlong FUN_01003388(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  
  FUN_0100d75a(param_1,*DAT_01003568);
  puVar2 = DAT_01003570;
  if (*(char *)(DAT_0100356c + param_1) == '\0') goto LAB_01003414;
  FUN_0100d7b8(DAT_01003570 + (short)param_1 * 0x48 + 4,0x48);
  iVar3 = DAT_01003574 + param_1 * 0x54;
  sVar1 = *DAT_01003578;
  iVar4 = DAT_01003560 + (short)param_1 * 0x110;
  if (sVar1 == 0x20) {
    uVar5 = *(undefined4 *)(iVar3 + 0x54);
LAB_010033ea:
    fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar4 + 0x108) = DAT_0100355c / fVar6;
  }
  else {
    if (sVar1 == 0x40) {
      uVar5 = *(undefined4 *)(iVar3 + 0x6c);
      goto LAB_010033ea;
    }
    if (sVar1 == 0x80) {
      uVar5 = *(undefined4 *)(iVar3 + 0x68);
      goto LAB_010033ea;
    }
  }
  *(undefined1 *)(iVar4 + 0x10e) = 0;
  *DAT_0100357c = 1;
  *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xb8) = DAT_01003580;
  *puVar2 = 1;
  FUN_0100d7c0(param_1);
LAB_01003414:
  return (ulonglong)param_4 << 0x20;
}

