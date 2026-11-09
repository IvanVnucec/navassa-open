
int FUN_0102778c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  float extraout_s0;
  undefined8 uVar6;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  float fVar7;
  float extraout_s4;
  float fVar8;
  float extraout_s5;
  float extraout_s5_00;
  float extraout_s5_01;
  float extraout_s6;
  float extraout_s6_00;
  float extraout_s6_01;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = 1;
  fVar7 = DAT_0102782c;
  fVar8 = DAT_0102782c;
  do {
    uVar6 = FUN_01027830(fVar7,fVar8);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),extraout_s5 + extraout_s6 + (float)uVar6);
    while( true ) {
      uVar6 = FUN_01027830((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      iVar2 = (int)((ulonglong)uVar6 >> 0x20);
      iVar1 = (int)uVar6;
      if ((int)((*(uint *)(iVar2 + 0x19c) >> (uVar4 & 0xff)) << 0x1f) < 0) {
        fVar7 = extraout_s5_01 + extraout_s6_01 + extraout_s3;
        fVar8 = extraout_s4;
      }
      else {
        fVar8 = extraout_s5_01 + extraout_s6_01 + extraout_s4;
        fVar7 = extraout_s3;
      }
      uVar4 = uVar4 + 1;
      if (0x17 < (int)uVar4) {
        iVar3 = (uint)(extraout_s1 + extraout_s2 < extraout_s0) << 0x1f;
        if ((int)((uint)(fVar8 < fVar7) << 0x1f) < 0) {
          if (-1 < iVar3) {
            iVar2 = 1;
          }
          if (iVar3 < 0) {
            iVar2 = 4;
          }
        }
        else {
          cVar5 = -(char)(iVar3 >> 0x1f);
          if (cVar5 == '\0') {
            iVar1 = FUN_01027de6(extraout_s1 + extraout_s0);
            if (cVar5 == '\0') {
              iVar2 = 0;
            }
            else {
              iVar2 = 3;
            }
          }
          else {
            iVar2 = 2;
          }
        }
        **(int **)(iVar1 + 0xc) = iVar2;
        return iVar2;
      }
      fVar7 = extraout_s0;
      fVar8 = extraout_s1;
      if ((int)uVar4 < 3) break;
      uVar6 = FUN_01027830();
      if ((int)uVar4 <= iVar3) {
        uVar6 = CONCAT44(extraout_s5_00 + extraout_s6_00 + (float)((ulonglong)uVar6 >> 0x20),
                         (int)uVar6);
      }
    }
  } while( true );
}

