
int FUN_01026854(int param_1,int param_2,int param_3,int param_4,int *param_5,char *param_6)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  int local_94 [25];
  
  iVar7 = 0;
  do {
    *(undefined4 *)(param_3 + iVar7 * 4) = 0;
    *(undefined4 *)(param_4 + iVar7 * 4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x30);
  iVar7 = 1;
  do {
    iVar6 = param_1 + iVar7 * 4;
    *(float *)(param_3 + iVar7 * 4) = -*(float *)(iVar6 + 0x68);
    *(undefined4 *)(param_3 + 0xc0 + iVar7 * -4) = *(undefined4 *)(iVar6 + 0x68);
    *(undefined4 *)(param_4 + iVar7 * 4) = *(undefined4 *)(param_1 + 4 + iVar7 * 4);
    *(undefined4 *)(param_4 + 0xc0 + iVar7 * -4) = *(undefined4 *)(param_1 + 4 + iVar7 * 4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
  iVar7 = 1;
  do {
    cVar1 = *(char *)(param_2 + iVar7);
    bVar11 = cVar1 != '\x01';
    if (bVar11) {
      cVar1 = *(char *)((param_2 + 0x30) - iVar7);
    }
    iVar6 = iVar7;
  } while ((bVar11 && cVar1 != '\x01') && (iVar7 = iVar7 + 1, iVar6 = 0x18, iVar7 < 0x18));
  if (*(char *)(param_2 + 1) == '\0') {
    if (*(char *)(param_2 + 0x2f) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 2;
      goto LAB_0102691e;
    }
  }
  else {
    if (*(char *)(param_2 + 0x2f) != '\0') goto LAB_0102691e;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 0x2f) = 2;
      goto LAB_0102691e;
    }
  }
  *(undefined1 *)(param_2 + 1) = 2;
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4 + iVar6 * 4);
  *(undefined1 *)(param_2 + 0x2f) = 2;
  *(undefined4 *)(param_4 + 0xbc) = *(undefined4 *)(param_1 + 4 + iVar6 * 4);
LAB_0102691e:
  param_5[2] = 5;
  spi_notify_thunk(param_5 + 3,100);
  spi_notify_thunk(param_5 + 0x1c,0x14);
  iVar7 = DAT_01026b9c;
  iVar8 = 0;
  piVar10 = param_5 + 0x21;
  do {
    *param_5 = iVar8;
    while( true ) {
      *piVar10 = 0x3f800000;
      param_5[0x22] = 0x3f800000;
      if (*(char *)(param_2 + iVar8) == '\0') {
        param_5[0x23] = 0x3f800000;
        param_5[0x24] = iVar7;
      }
      else {
        param_5[0x23] = *(int *)(param_4 + iVar8 * 4);
        param_5[0x24] = 0x3f800000;
      }
      param_5[1] = 1;
      FUN_0102727c(param_5);
      do {
        iVar8 = iVar8 + 1;
        if (0x2f < iVar8) {
          uVar9 = (uint)*param_6;
          if (((int)uVar9 < 0) || ((uint)param_5[2] <= uVar9)) {
            FUN_0102742c(param_5 + 3,param_5 + 0x1c);
          }
          else {
            iVar8 = 0;
            for (uVar2 = 0; uVar4 = uVar9, uVar2 < (uint)param_5[2]; uVar2 = uVar2 + 1) {
              for (uVar4 = 0; uVar4 < (uint)param_5[2]; uVar4 = uVar4 + 1) {
                if (uVar2 != uVar9 && uVar4 != uVar9) {
                  local_94[iVar8] = param_5[param_5[2] * uVar2 + uVar4 + 3];
                  iVar8 = iVar8 + 1;
                }
              }
            }
            while( true ) {
              if ((uint)param_5[2] <= uVar4 + 1) break;
              param_5[uVar4 + 0x1c] = param_5[uVar4 + 0x1d];
              uVar4 = uVar4 + 1;
            }
            FUN_0102742c(local_94,param_5 + 0x1c,param_5[2] - 1);
            uVar2 = param_5[2];
            while (uVar9 < uVar2 - 1) {
              param_5[uVar2 + 0x1b] = param_5[uVar2 + 0x1a];
              uVar2 = uVar2 - 1;
            }
            param_5[uVar9 + 0x1c] = 0;
          }
          iVar8 = 0;
          do {
            uVar9 = param_5[1];
            uVar12 = FUN_01027404(param_5 + 0x1c,iVar8,uVar9,param_5[2]);
            iVar5 = iVar8 * 4;
            iVar8 = iVar8 + 1;
            *(undefined4 *)(param_1 + 4 + iVar5) = uVar12;
          } while (iVar8 < 0x19);
          for (iVar8 = 0; uVar3 = (undefined1)uVar9, iVar8 < iVar6; iVar8 = iVar8 + 1) {
            bVar11 = *(char *)(param_2 + iVar8) == '\x02';
            if (bVar11) {
              uVar3 = 0;
            }
            if (bVar11) {
              *(undefined1 *)(param_2 + iVar8) = uVar3;
            }
            uVar9 = (uint)*(byte *)(param_2 + 0x30 + -iVar8);
            bVar11 = uVar9 == 2;
            if (bVar11) {
              uVar9 = 0;
            }
            if (bVar11) {
              *(char *)(param_2 + 0x30 + -iVar8) = (char)uVar9;
            }
          }
          cVar1 = *(char *)(param_2 + 1);
          bVar11 = cVar1 != '\0';
          if (bVar11) {
            cVar1 = *(char *)(param_2 + 0x2f);
          }
          if (!bVar11 || cVar1 == '\0') {
            iVar8 = iVar6;
            while (iVar8 = iVar8 + -1, 0 < iVar8) {
              fVar13 = (float)VectorSignedToFloat(iVar8 / iVar6,(byte)(in_fpscr >> 0x15) & 3);
              fVar13 = fVar13 * *(float *)(param_1 + 0x68 + iVar6 * 4);
              *(undefined1 *)(param_2 + iVar8) = 2;
              *(float *)(param_3 + iVar8 * 4) = -fVar13;
              *(undefined1 *)((param_2 + 0x30) - iVar8) = 2;
              *(float *)(param_3 + 0xc0 + iVar8 * -4) = fVar13;
            }
          }
          param_5[2] = 5;
          spi_notify_thunk(param_5 + 3,100);
          spi_notify_thunk(param_5 + 0x1c,0x14);
          iVar8 = 0;
          do {
            *param_5 = iVar8;
            *piVar10 = DAT_01026bac;
            while( true ) {
              param_5[0x22] = 0x3f800000;
              if (*(char *)(param_2 + iVar8) == '\0') {
                param_5[0x23] = 0;
                param_5[0x24] = iVar7;
              }
              else {
                param_5[0x23] = *(int *)(param_3 + iVar8 * 4);
                param_5[0x24] = 0x3f800000;
              }
              param_5[1] = 1;
              FUN_0102727c(param_5);
              do {
                iVar8 = iVar8 + 1;
                if (0x2f < iVar8) {
                  FUN_0102742c(param_5 + 3,param_5 + 0x1c,param_5[2]);
                  param_5[0x1c] = 0;
                  iVar7 = 0;
                  do {
                    iVar5 = param_5[1];
                    uVar12 = FUN_01027404(param_5 + 0x1c,iVar7,iVar5,param_5[2]);
                    iVar8 = iVar7 * 4;
                    iVar7 = iVar7 + 1;
                    *(undefined4 *)(param_1 + 0x68 + iVar8) = uVar12;
                  } while (iVar7 < 0x19);
                  for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
                    bVar11 = *(char *)(param_2 + iVar7) == '\x02';
                    if (bVar11) {
                      iVar5 = 0;
                    }
                    if (bVar11) {
                      *(char *)(param_2 + iVar7) = (char)iVar5;
                    }
                    bVar11 = *(char *)(param_2 + 0x30 + -iVar7) == '\x02';
                    if (bVar11) {
                      iVar5 = 0;
                    }
                    if (bVar11) {
                      *(char *)(param_2 + 0x30 + -iVar7) = (char)iVar5;
                    }
                  }
                  return param_4;
                }
              } while (iVar8 == 0x18);
              if (iVar8 < 0x18) break;
              *param_5 = 0x30 - iVar8;
              *piVar10 = 0x3f800000;
            }
          } while( true );
        }
      } while (iVar8 == 0x18);
      if (iVar8 < 0x18) break;
      *param_5 = 0x30 - iVar8;
    }
  } while( true );
}

