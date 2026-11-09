
undefined8 FUN_0103a348(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 unaff_r5;
  float fVar3;
  
  uVar1 = *DAT_0103a394;
  fVar3 = (float)VectorSignedFixedToFloat(*(undefined4 *)(param_1 + 0x38),0x20,0x13);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_0103a450(fVar3 * DAT_0103a380,24000);
  FUN_01029c0a(0,&stack0xfffffff0);
  return CONCAT44(-iVar2,CONCAT31((int3)((uint)unaff_r5 >> 8),uVar1));
}

