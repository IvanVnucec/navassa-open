
undefined8
FUN_01036dd0(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_48 [4];
  byte local_44;
  byte local_43;
  char local_42;
  short local_3a;
  byte local_37;
  byte local_34;
  byte local_33;
  char local_32;
  short local_2a;
  byte local_27;
  
  uVar1 = *DAT_01036f18;
  iVar2 = FUN_01036f1c(uVar1,param_1,0,&local_34,&local_44,local_48);
  if ((iVar2 == 0) ||
     (iVar2 = FUN_01036f1c(uVar1,param_1,2,&local_34,&local_44,local_48), iVar2 == 0)) {
    if (local_32 == local_42) {
      fVar4 = (float)VectorSignedToFloat((uint)local_44 - (uint)local_34,
                                         (byte)(in_fpscr >> 0x15) & 3);
      if (local_42 == '\0') {
        fVar5 = (float)VectorUnsignedToFloat((uint)local_43,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = fVar5 * DAT_01036f08;
        fVar6 = (float)VectorUnsignedToFloat((uint)local_33,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = fVar6 * DAT_01036f08;
      }
      else {
        fVar5 = (float)VectorUnsignedToFloat((uint)local_37,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = (float)VectorSignedToFloat((int)local_3a,(byte)(in_fpscr >> 0x15) & 3);
        fVar5 = fVar5 / fVar6;
        fVar6 = (float)VectorUnsignedToFloat((uint)local_27,(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat((int)local_2a,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = fVar6 / fVar7;
      }
      fVar5 = (fVar4 + fVar6) - fVar5;
      in_fpscr = in_fpscr & 0xfffffff;
      if (0.0 <= fVar5) {
        iVar3 = FUN_01036f98(local_48[0],param_1);
        if (iVar3 == -1) {
          iVar2 = 0xff1a;
        }
        else if (iVar3 == -2) {
          iVar2 = 0xff1c;
        }
        else {
          fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
          fVar5 = (DAT_01036f0c / fVar4) * fVar5;
          if (fVar5 < DAT_01036f10 == (NAN(fVar5) || NAN(DAT_01036f10))) {
            iVar2 = 0xff1b;
          }
          else {
            *param_2 = (short)(int)fVar5;
          }
        }
      }
      else {
        iVar2 = 0xff19;
      }
    }
    else {
      iVar2 = 0xff18;
    }
  }
  return CONCAT44(param_4,iVar2);
}

