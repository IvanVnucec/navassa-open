
undefined4 FUN_0103967c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  float fVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(DAT_01039790 + param_1 * 4);
  FUN_010027dc(iVar3 + 0x123,0xdf,0xce);
  cVar4 = *(float *)(param_2 + 0x34) < 0.0;
  if (((bool)cVar4 == NAN(*(float *)(param_2 + 0x34))) &&
     (fVar5 = (float)FUN_01039712(), cVar4 != '\0')) {
    uVar2 = FUN_01012c10(DAT_0103978c / fVar5);
    uVar6 = FUN_0102fbe0(uVar2);
    uVar1 = FUN_01020608((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar2 = FUN_01015e2c(uVar1);
    FUN_0103971c(uVar2,0x80,0);
    pin_update(iVar3 + 0x121,0x1c,0x1c);
    pin_update(iVar3 + 0x129,7,7);
    pin_update(iVar3 + 0x128,7,7);
    FUN_010027dc(iVar3 + 0x123,0xc0,0xc0);
    return 0;
  }
  return 0x2d05;
}

