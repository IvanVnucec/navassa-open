
undefined8 FUN_01007754(uint param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  
  if ((param_2 == 0) && (param_1 < DAT_01007f88)) {
    fVar3 = (float)FUN_01014570();
    if (param_3 == 2) {
      fVar1 = DAT_010079b4;
      if (param_4 != 0) {
        fVar1 = DAT_010079b8;
      }
      FUN_010145b8(fVar1 / fVar3);
      uVar2 = FUN_01007880();
    }
    else {
      if (param_4 == 0) {
        FUN_010145f4(DAT_010079bc / fVar3);
      }
      else {
        FUN_010145b8(DAT_010079c0 / fVar3);
      }
      iVar4 = FUN_01007880();
      uVar2 = (ushort)(iVar4 << 1);
    }
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(param_4,(uint)uVar2);
}

