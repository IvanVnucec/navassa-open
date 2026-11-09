
undefined8 FUN_01031274(float param_1,float param_2,float param_3,char param_4)

{
  byte bVar1;
  undefined4 unaff_r7;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1 / DAT_010313bc;
  fVar4 = DAT_010313d4;
  if (param_2 == DAT_010313d0) {
    if (fVar3 < 5.0 == NAN(fVar3)) {
      fVar4 = -(*DAT_0103140c + DAT_0103140c[1] * fVar3 + DAT_0103140c[2] * fVar3 * fVar3 +
               DAT_0103140c[3] * fVar3 * fVar3 * fVar3);
    }
    fVar3 = DAT_010313d8;
    if ((param_4 != '\x01') && (fVar3 = DAT_010313d4, param_4 == '\x02')) {
      fVar3 = DAT_010313dc;
    }
  }
  else {
    fVar3 = DAT_010313d4;
    if (((param_2 == DAT_010313b8) && (fVar3 = DAT_010313e0, param_4 != '\x01')) &&
       (fVar3 = DAT_010313d4, param_4 == '\x02')) {
      fVar3 = DAT_010313e4;
    }
  }
  fVar2 = (param_1 / param_2) * (param_1 / param_2);
  fVar2 = (float)FUN_0101edc0(fVar2 * fVar2 + 1.0);
  bVar1 = FUN_01031348((param_3 + fVar2 * 10.0 + fVar4 + fVar3) / DAT_010313e8);
  return CONCAT44(unaff_r7,(uint)bVar1);
}

