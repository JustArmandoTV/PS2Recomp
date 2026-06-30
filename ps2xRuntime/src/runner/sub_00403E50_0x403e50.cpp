#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00403E50
// Address: 0x403e50 - 0x404190
void sub_00403E50_0x403e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403E50_0x403e50");
#endif

    switch (ctx->pc) {
        case 0x403e50u: goto label_403e50;
        case 0x403e54u: goto label_403e54;
        case 0x403e58u: goto label_403e58;
        case 0x403e5cu: goto label_403e5c;
        case 0x403e60u: goto label_403e60;
        case 0x403e64u: goto label_403e64;
        case 0x403e68u: goto label_403e68;
        case 0x403e6cu: goto label_403e6c;
        case 0x403e70u: goto label_403e70;
        case 0x403e74u: goto label_403e74;
        case 0x403e78u: goto label_403e78;
        case 0x403e7cu: goto label_403e7c;
        case 0x403e80u: goto label_403e80;
        case 0x403e84u: goto label_403e84;
        case 0x403e88u: goto label_403e88;
        case 0x403e8cu: goto label_403e8c;
        case 0x403e90u: goto label_403e90;
        case 0x403e94u: goto label_403e94;
        case 0x403e98u: goto label_403e98;
        case 0x403e9cu: goto label_403e9c;
        case 0x403ea0u: goto label_403ea0;
        case 0x403ea4u: goto label_403ea4;
        case 0x403ea8u: goto label_403ea8;
        case 0x403eacu: goto label_403eac;
        case 0x403eb0u: goto label_403eb0;
        case 0x403eb4u: goto label_403eb4;
        case 0x403eb8u: goto label_403eb8;
        case 0x403ebcu: goto label_403ebc;
        case 0x403ec0u: goto label_403ec0;
        case 0x403ec4u: goto label_403ec4;
        case 0x403ec8u: goto label_403ec8;
        case 0x403eccu: goto label_403ecc;
        case 0x403ed0u: goto label_403ed0;
        case 0x403ed4u: goto label_403ed4;
        case 0x403ed8u: goto label_403ed8;
        case 0x403edcu: goto label_403edc;
        case 0x403ee0u: goto label_403ee0;
        case 0x403ee4u: goto label_403ee4;
        case 0x403ee8u: goto label_403ee8;
        case 0x403eecu: goto label_403eec;
        case 0x403ef0u: goto label_403ef0;
        case 0x403ef4u: goto label_403ef4;
        case 0x403ef8u: goto label_403ef8;
        case 0x403efcu: goto label_403efc;
        case 0x403f00u: goto label_403f00;
        case 0x403f04u: goto label_403f04;
        case 0x403f08u: goto label_403f08;
        case 0x403f0cu: goto label_403f0c;
        case 0x403f10u: goto label_403f10;
        case 0x403f14u: goto label_403f14;
        case 0x403f18u: goto label_403f18;
        case 0x403f1cu: goto label_403f1c;
        case 0x403f20u: goto label_403f20;
        case 0x403f24u: goto label_403f24;
        case 0x403f28u: goto label_403f28;
        case 0x403f2cu: goto label_403f2c;
        case 0x403f30u: goto label_403f30;
        case 0x403f34u: goto label_403f34;
        case 0x403f38u: goto label_403f38;
        case 0x403f3cu: goto label_403f3c;
        case 0x403f40u: goto label_403f40;
        case 0x403f44u: goto label_403f44;
        case 0x403f48u: goto label_403f48;
        case 0x403f4cu: goto label_403f4c;
        case 0x403f50u: goto label_403f50;
        case 0x403f54u: goto label_403f54;
        case 0x403f58u: goto label_403f58;
        case 0x403f5cu: goto label_403f5c;
        case 0x403f60u: goto label_403f60;
        case 0x403f64u: goto label_403f64;
        case 0x403f68u: goto label_403f68;
        case 0x403f6cu: goto label_403f6c;
        case 0x403f70u: goto label_403f70;
        case 0x403f74u: goto label_403f74;
        case 0x403f78u: goto label_403f78;
        case 0x403f7cu: goto label_403f7c;
        case 0x403f80u: goto label_403f80;
        case 0x403f84u: goto label_403f84;
        case 0x403f88u: goto label_403f88;
        case 0x403f8cu: goto label_403f8c;
        case 0x403f90u: goto label_403f90;
        case 0x403f94u: goto label_403f94;
        case 0x403f98u: goto label_403f98;
        case 0x403f9cu: goto label_403f9c;
        case 0x403fa0u: goto label_403fa0;
        case 0x403fa4u: goto label_403fa4;
        case 0x403fa8u: goto label_403fa8;
        case 0x403facu: goto label_403fac;
        case 0x403fb0u: goto label_403fb0;
        case 0x403fb4u: goto label_403fb4;
        case 0x403fb8u: goto label_403fb8;
        case 0x403fbcu: goto label_403fbc;
        case 0x403fc0u: goto label_403fc0;
        case 0x403fc4u: goto label_403fc4;
        case 0x403fc8u: goto label_403fc8;
        case 0x403fccu: goto label_403fcc;
        case 0x403fd0u: goto label_403fd0;
        case 0x403fd4u: goto label_403fd4;
        case 0x403fd8u: goto label_403fd8;
        case 0x403fdcu: goto label_403fdc;
        case 0x403fe0u: goto label_403fe0;
        case 0x403fe4u: goto label_403fe4;
        case 0x403fe8u: goto label_403fe8;
        case 0x403fecu: goto label_403fec;
        case 0x403ff0u: goto label_403ff0;
        case 0x403ff4u: goto label_403ff4;
        case 0x403ff8u: goto label_403ff8;
        case 0x403ffcu: goto label_403ffc;
        case 0x404000u: goto label_404000;
        case 0x404004u: goto label_404004;
        case 0x404008u: goto label_404008;
        case 0x40400cu: goto label_40400c;
        case 0x404010u: goto label_404010;
        case 0x404014u: goto label_404014;
        case 0x404018u: goto label_404018;
        case 0x40401cu: goto label_40401c;
        case 0x404020u: goto label_404020;
        case 0x404024u: goto label_404024;
        case 0x404028u: goto label_404028;
        case 0x40402cu: goto label_40402c;
        case 0x404030u: goto label_404030;
        case 0x404034u: goto label_404034;
        case 0x404038u: goto label_404038;
        case 0x40403cu: goto label_40403c;
        case 0x404040u: goto label_404040;
        case 0x404044u: goto label_404044;
        case 0x404048u: goto label_404048;
        case 0x40404cu: goto label_40404c;
        case 0x404050u: goto label_404050;
        case 0x404054u: goto label_404054;
        case 0x404058u: goto label_404058;
        case 0x40405cu: goto label_40405c;
        case 0x404060u: goto label_404060;
        case 0x404064u: goto label_404064;
        case 0x404068u: goto label_404068;
        case 0x40406cu: goto label_40406c;
        case 0x404070u: goto label_404070;
        case 0x404074u: goto label_404074;
        case 0x404078u: goto label_404078;
        case 0x40407cu: goto label_40407c;
        case 0x404080u: goto label_404080;
        case 0x404084u: goto label_404084;
        case 0x404088u: goto label_404088;
        case 0x40408cu: goto label_40408c;
        case 0x404090u: goto label_404090;
        case 0x404094u: goto label_404094;
        case 0x404098u: goto label_404098;
        case 0x40409cu: goto label_40409c;
        case 0x4040a0u: goto label_4040a0;
        case 0x4040a4u: goto label_4040a4;
        case 0x4040a8u: goto label_4040a8;
        case 0x4040acu: goto label_4040ac;
        case 0x4040b0u: goto label_4040b0;
        case 0x4040b4u: goto label_4040b4;
        case 0x4040b8u: goto label_4040b8;
        case 0x4040bcu: goto label_4040bc;
        case 0x4040c0u: goto label_4040c0;
        case 0x4040c4u: goto label_4040c4;
        case 0x4040c8u: goto label_4040c8;
        case 0x4040ccu: goto label_4040cc;
        case 0x4040d0u: goto label_4040d0;
        case 0x4040d4u: goto label_4040d4;
        case 0x4040d8u: goto label_4040d8;
        case 0x4040dcu: goto label_4040dc;
        case 0x4040e0u: goto label_4040e0;
        case 0x4040e4u: goto label_4040e4;
        case 0x4040e8u: goto label_4040e8;
        case 0x4040ecu: goto label_4040ec;
        case 0x4040f0u: goto label_4040f0;
        case 0x4040f4u: goto label_4040f4;
        case 0x4040f8u: goto label_4040f8;
        case 0x4040fcu: goto label_4040fc;
        case 0x404100u: goto label_404100;
        case 0x404104u: goto label_404104;
        case 0x404108u: goto label_404108;
        case 0x40410cu: goto label_40410c;
        case 0x404110u: goto label_404110;
        case 0x404114u: goto label_404114;
        case 0x404118u: goto label_404118;
        case 0x40411cu: goto label_40411c;
        case 0x404120u: goto label_404120;
        case 0x404124u: goto label_404124;
        case 0x404128u: goto label_404128;
        case 0x40412cu: goto label_40412c;
        case 0x404130u: goto label_404130;
        case 0x404134u: goto label_404134;
        case 0x404138u: goto label_404138;
        case 0x40413cu: goto label_40413c;
        case 0x404140u: goto label_404140;
        case 0x404144u: goto label_404144;
        case 0x404148u: goto label_404148;
        case 0x40414cu: goto label_40414c;
        case 0x404150u: goto label_404150;
        case 0x404154u: goto label_404154;
        case 0x404158u: goto label_404158;
        case 0x40415cu: goto label_40415c;
        case 0x404160u: goto label_404160;
        case 0x404164u: goto label_404164;
        case 0x404168u: goto label_404168;
        case 0x40416cu: goto label_40416c;
        case 0x404170u: goto label_404170;
        case 0x404174u: goto label_404174;
        case 0x404178u: goto label_404178;
        case 0x40417cu: goto label_40417c;
        case 0x404180u: goto label_404180;
        case 0x404184u: goto label_404184;
        case 0x404188u: goto label_404188;
        case 0x40418cu: goto label_40418c;
        default: break;
    }

    ctx->pc = 0x403e50u;

label_403e50:
    // 0x403e50: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x403e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_403e54:
    // 0x403e54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x403e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403e58:
    // 0x403e58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x403e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_403e5c:
    // 0x403e5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x403e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_403e60:
    // 0x403e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x403e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_403e64:
    // 0x403e64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x403e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_403e68:
    // 0x403e68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x403e68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403e6c:
    // 0x403e6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x403e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_403e70:
    // 0x403e70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x403e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403e74:
    // 0x403e74: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x403e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_403e78:
    // 0x403e78: 0x106800bd  beq         $v1, $t0, . + 4 + (0xBD << 2)
label_403e7c:
    if (ctx->pc == 0x403E7Cu) {
        ctx->pc = 0x403E7Cu;
            // 0x403e7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403E80u;
        goto label_403e80;
    }
    ctx->pc = 0x403E78u;
    {
        const bool branch_taken_0x403e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x403E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403E78u;
            // 0x403e7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e78) {
            ctx->pc = 0x404170u;
            goto label_404170;
        }
    }
    ctx->pc = 0x403E80u;
label_403e80:
    // 0x403e80: 0xc661020c  lwc1        $f1, 0x20C($s3)
    ctx->pc = 0x403e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403e84:
    // 0x403e84: 0xc6600204  lwc1        $f0, 0x204($s3)
    ctx->pc = 0x403e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403e88:
    // 0x403e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x403e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_403e8c:
    // 0x403e8c: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
label_403e90:
    if (ctx->pc == 0x403E90u) {
        ctx->pc = 0x403E90u;
            // 0x403e90: 0x8e6501e0  lw          $a1, 0x1E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
        ctx->pc = 0x403E94u;
        goto label_403e94;
    }
    ctx->pc = 0x403E8Cu;
    {
        const bool branch_taken_0x403e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x403e8c) {
            ctx->pc = 0x403E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403E8Cu;
            // 0x403e90: 0x8e6501e0  lw          $a1, 0x1E0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403F90u;
            goto label_403f90;
        }
    }
    ctx->pc = 0x403E94u;
label_403e94:
    // 0x403e94: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x403e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
label_403e98:
    // 0x403e98: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x403e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_403e9c:
    // 0x403e9c: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x403e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_403ea0:
    // 0x403ea0: 0x1467003a  bne         $v1, $a3, . + 4 + (0x3A << 2)
label_403ea4:
    if (ctx->pc == 0x403EA4u) {
        ctx->pc = 0x403EA8u;
        goto label_403ea8;
    }
    ctx->pc = 0x403EA0u;
    {
        const bool branch_taken_0x403ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x403ea0) {
            ctx->pc = 0x403F8Cu;
            goto label_403f8c;
        }
    }
    ctx->pc = 0x403EA8u;
label_403ea8:
    // 0x403ea8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x403ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_403eac:
    // 0x403eac: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x403eacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
label_403eb0:
    // 0x403eb0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x403eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_403eb4:
    // 0x403eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x403eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403eb8:
    // 0x403eb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x403eb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403ebc:
    // 0x403ebc: 0x25290e80  addiu       $t1, $t1, 0xE80
    ctx->pc = 0x403ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3712));
label_403ec0:
    // 0x403ec0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x403ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_403ec4:
    // 0x403ec4: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x403ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_403ec8:
    // 0x403ec8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x403ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_403ecc:
    // 0x403ecc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x403eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_403ed0:
    // 0x403ed0: 0x8c650d74  lw          $a1, 0xD74($v1)
    ctx->pc = 0x403ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_403ed4:
    // 0x403ed4: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x403ed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_403ed8:
    // 0x403ed8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x403ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_403edc:
    // 0x403edc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x403edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_403ee0:
    // 0x403ee0: 0x24650280  addiu       $a1, $v1, 0x280
    ctx->pc = 0x403ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_403ee4:
    // 0x403ee4: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x403ee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_403ee8:
    // 0x403ee8: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
label_403eec:
    if (ctx->pc == 0x403EECu) {
        ctx->pc = 0x403EF0u;
        goto label_403ef0;
    }
    ctx->pc = 0x403EE8u;
    {
        const bool branch_taken_0x403ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x403ee8) {
            ctx->pc = 0x403EF8u;
            goto label_403ef8;
        }
    }
    ctx->pc = 0x403EF0u;
label_403ef0:
    // 0x403ef0: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
label_403ef4:
    if (ctx->pc == 0x403EF4u) {
        ctx->pc = 0x403EF4u;
            // 0x403ef4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->pc = 0x403EF8u;
        goto label_403ef8;
    }
    ctx->pc = 0x403EF0u;
    {
        const bool branch_taken_0x403ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x403ef0) {
            ctx->pc = 0x403EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403EF0u;
            // 0x403ef4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403F10u;
            goto label_403f10;
        }
    }
    ctx->pc = 0x403EF8u;
label_403ef8:
    // 0x403ef8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x403ef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_403efc:
    // 0x403efc: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
label_403f00:
    if (ctx->pc == 0x403F00u) {
        ctx->pc = 0x403F04u;
        goto label_403f04;
    }
    ctx->pc = 0x403EFCu;
    {
        const bool branch_taken_0x403efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x403efc) {
            ctx->pc = 0x403F0Cu;
            goto label_403f0c;
        }
    }
    ctx->pc = 0x403F04u;
label_403f04:
    // 0x403f04: 0x10000006  b           . + 4 + (0x6 << 2)
label_403f08:
    if (ctx->pc == 0x403F08u) {
        ctx->pc = 0x403F08u;
            // 0x403f08: 0x310a00ff  andi        $t2, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x403F0Cu;
        goto label_403f0c;
    }
    ctx->pc = 0x403F04u;
    {
        const bool branch_taken_0x403f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403F04u;
            // 0x403f08: 0x310a00ff  andi        $t2, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f04) {
            ctx->pc = 0x403F20u;
            goto label_403f20;
        }
    }
    ctx->pc = 0x403F0Cu;
label_403f0c:
    // 0x403f0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x403f0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_403f10:
    // 0x403f10: 0xcb082b  sltu        $at, $a2, $t3
    ctx->pc = 0x403f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_403f14:
    // 0x403f14: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
label_403f18:
    if (ctx->pc == 0x403F18u) {
        ctx->pc = 0x403F18u;
            // 0x403f18: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x403F1Cu;
        goto label_403f1c;
    }
    ctx->pc = 0x403F14u;
    {
        const bool branch_taken_0x403f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403F14u;
            // 0x403f18: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f14) {
            ctx->pc = 0x403ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_403ecc;
        }
    }
    ctx->pc = 0x403F1Cu;
label_403f1c:
    // 0x403f1c: 0x0  nop
    ctx->pc = 0x403f1cu;
    // NOP
label_403f20:
    // 0x403f20: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
label_403f24:
    if (ctx->pc == 0x403F24u) {
        ctx->pc = 0x403F28u;
        goto label_403f28;
    }
    ctx->pc = 0x403F20u;
    {
        const bool branch_taken_0x403f20 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x403f20) {
            ctx->pc = 0x403F8Cu;
            goto label_403f8c;
        }
    }
    ctx->pc = 0x403F28u;
label_403f28:
    // 0x403f28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x403f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_403f2c:
    // 0x403f2c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x403f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_403f30:
    // 0x403f30: 0x320f809  jalr        $t9
label_403f34:
    if (ctx->pc == 0x403F34u) {
        ctx->pc = 0x403F34u;
            // 0x403f34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403F38u;
        goto label_403f38;
    }
    ctx->pc = 0x403F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403F38u);
        ctx->pc = 0x403F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403F30u;
            // 0x403f34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x403F38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403F38u; }
            if (ctx->pc != 0x403F38u) { return; }
        }
        }
    }
    ctx->pc = 0x403F38u;
label_403f38:
    // 0x403f38: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x403f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_403f3c:
    // 0x403f3c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x403f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_403f40:
    // 0x403f40: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x403f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403f44:
    // 0x403f44: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x403f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_403f48:
    // 0x403f48: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x403f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403f4c:
    // 0x403f4c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x403f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_403f50:
    // 0x403f50: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x403f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_403f54:
    // 0x403f54: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x403f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_403f58:
    // 0x403f58: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x403f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_403f5c:
    // 0x403f5c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x403f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_403f60:
    // 0x403f60: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x403f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_403f64:
    // 0x403f64: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x403f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_403f68:
    // 0x403f68: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x403f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403f6c:
    // 0x403f6c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x403f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403f70:
    // 0x403f70: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x403f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_403f74:
    // 0x403f74: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x403f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_403f78:
    // 0x403f78: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x403f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_403f7c:
    // 0x403f7c: 0xc0892b0  jal         func_224AC0
label_403f80:
    if (ctx->pc == 0x403F80u) {
        ctx->pc = 0x403F80u;
            // 0x403f80: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x403F84u;
        goto label_403f84;
    }
    ctx->pc = 0x403F7Cu;
    SET_GPR_U32(ctx, 31, 0x403F84u);
    ctx->pc = 0x403F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403F7Cu;
            // 0x403f80: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403F84u; }
        if (ctx->pc != 0x403F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403F84u; }
        if (ctx->pc != 0x403F84u) { return; }
    }
    ctx->pc = 0x403F84u;
label_403f84:
    // 0x403f84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x403f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_403f88:
    // 0x403f88: 0xae6300e0  sw          $v1, 0xE0($s3)
    ctx->pc = 0x403f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 3));
label_403f8c:
    // 0x403f8c: 0x8e6501e0  lw          $a1, 0x1E0($s3)
    ctx->pc = 0x403f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
label_403f90:
    // 0x403f90: 0x92630250  lbu         $v1, 0x250($s3)
    ctx->pc = 0x403f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 592)));
label_403f94:
    // 0x403f94: 0x966401f2  lhu         $a0, 0x1F2($s3)
    ctx->pc = 0x403f94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 498)));
label_403f98:
    // 0x403f98: 0x94a5001c  lhu         $a1, 0x1C($a1)
    ctx->pc = 0x403f98u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
label_403f9c:
    // 0x403f9c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_403fa0:
    if (ctx->pc == 0x403FA0u) {
        ctx->pc = 0x403FA0u;
            // 0x403fa0: 0xc66101e4  lwc1        $f1, 0x1E4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x403FA4u;
        goto label_403fa4;
    }
    ctx->pc = 0x403F9Cu;
    {
        const bool branch_taken_0x403f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403F9Cu;
            // 0x403fa0: 0xc66101e4  lwc1        $f1, 0x1E4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f9c) {
            ctx->pc = 0x403FF4u;
            goto label_403ff4;
        }
    }
    ctx->pc = 0x403FA4u;
label_403fa4:
    // 0x403fa4: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x403fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403fa8:
    // 0x403fa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x403fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_403fac:
    // 0x403fac: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_403fb0:
    if (ctx->pc == 0x403FB0u) {
        ctx->pc = 0x403FB4u;
        goto label_403fb4;
    }
    ctx->pc = 0x403FACu;
    {
        const bool branch_taken_0x403fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x403fac) {
            ctx->pc = 0x403FF4u;
            goto label_403ff4;
        }
    }
    ctx->pc = 0x403FB4u;
label_403fb4:
    // 0x403fb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403fb8:
    // 0x403fb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x403fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_403fbc:
    // 0x403fbc: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x403fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_403fc0:
    // 0x403fc0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x403fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_403fc4:
    // 0x403fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_403fc8:
    // 0x403fc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x403fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_403fcc:
    // 0x403fcc: 0xc0ff760  jal         func_3FDD80
label_403fd0:
    if (ctx->pc == 0x403FD0u) {
        ctx->pc = 0x403FD0u;
            // 0x403fd0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x403FD4u;
        goto label_403fd4;
    }
    ctx->pc = 0x403FCCu;
    SET_GPR_U32(ctx, 31, 0x403FD4u);
    ctx->pc = 0x403FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403FCCu;
            // 0x403fd0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (runtime->hasFunction(0x3FDD80u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403FD4u; }
        if (ctx->pc != 0x403FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD80_0x3fdd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403FD4u; }
        if (ctx->pc != 0x403FD4u) { return; }
    }
    ctx->pc = 0x403FD4u;
label_403fd4:
    // 0x403fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x403fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403fd8:
    // 0x403fd8: 0xa2650250  sb          $a1, 0x250($s3)
    ctx->pc = 0x403fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 592), (uint8_t)GPR_U32(ctx, 5));
label_403fdc:
    // 0x403fdc: 0xae700254  sw          $s0, 0x254($s3)
    ctx->pc = 0x403fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 596), GPR_U32(ctx, 16));
label_403fe0:
    // 0x403fe0: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x403fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
label_403fe4:
    // 0x403fe4: 0xc122d2c  jal         func_48B4B0
label_403fe8:
    if (ctx->pc == 0x403FE8u) {
        ctx->pc = 0x403FE8u;
            // 0x403fe8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x403FECu;
        goto label_403fec;
    }
    ctx->pc = 0x403FE4u;
    SET_GPR_U32(ctx, 31, 0x403FECu);
    ctx->pc = 0x403FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403FE4u;
            // 0x403fe8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403FECu; }
        if (ctx->pc != 0x403FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403FECu; }
        if (ctx->pc != 0x403FECu) { return; }
    }
    ctx->pc = 0x403FECu;
label_403fec:
    // 0x403fec: 0x10000015  b           . + 4 + (0x15 << 2)
label_403ff0:
    if (ctx->pc == 0x403FF0u) {
        ctx->pc = 0x403FF0u;
            // 0x403ff0: 0x92630250  lbu         $v1, 0x250($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 592)));
        ctx->pc = 0x403FF4u;
        goto label_403ff4;
    }
    ctx->pc = 0x403FECu;
    {
        const bool branch_taken_0x403fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403FECu;
            // 0x403ff0: 0x92630250  lbu         $v1, 0x250($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fec) {
            ctx->pc = 0x404044u;
            goto label_404044;
        }
    }
    ctx->pc = 0x403FF4u;
label_403ff4:
    // 0x403ff4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_403ff8:
    if (ctx->pc == 0x403FF8u) {
        ctx->pc = 0x403FFCu;
        goto label_403ffc;
    }
    ctx->pc = 0x403FF4u;
    {
        const bool branch_taken_0x403ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x403ff4) {
            ctx->pc = 0x404040u;
            goto label_404040;
        }
    }
    ctx->pc = 0x403FFCu;
label_403ffc:
    // 0x403ffc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x403ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_404000:
    // 0x404000: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x404000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_404004:
    // 0x404004: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x404004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_404008:
    // 0x404008: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_40400c:
    if (ctx->pc == 0x40400Cu) {
        ctx->pc = 0x404010u;
        goto label_404010;
    }
    ctx->pc = 0x404008u;
    {
        const bool branch_taken_0x404008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x404008) {
            ctx->pc = 0x404040u;
            goto label_404040;
        }
    }
    ctx->pc = 0x404010u;
label_404010:
    // 0x404010: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x404010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_404014:
    // 0x404014: 0x8e630254  lw          $v1, 0x254($s3)
    ctx->pc = 0x404014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
label_404018:
    // 0x404018: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x404018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_40401c:
    // 0x40401c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_404020:
    // 0x404020: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x404020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_404024:
    // 0x404024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x404024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_404028:
    // 0x404028: 0xc0ff744  jal         func_3FDD10
label_40402c:
    if (ctx->pc == 0x40402Cu) {
        ctx->pc = 0x40402Cu;
            // 0x40402c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x404030u;
        goto label_404030;
    }
    ctx->pc = 0x404028u;
    SET_GPR_U32(ctx, 31, 0x404030u);
    ctx->pc = 0x40402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404028u;
            // 0x40402c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD10u;
    if (runtime->hasFunction(0x3FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404030u; }
        if (ctx->pc != 0x404030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD10_0x3fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404030u; }
        if (ctx->pc != 0x404030u) { return; }
    }
    ctx->pc = 0x404030u;
label_404030:
    // 0x404030: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x404030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
label_404034:
    // 0x404034: 0xc122c5c  jal         func_48B170
label_404038:
    if (ctx->pc == 0x404038u) {
        ctx->pc = 0x404038u;
            // 0x404038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40403Cu;
        goto label_40403c;
    }
    ctx->pc = 0x404034u;
    SET_GPR_U32(ctx, 31, 0x40403Cu);
    ctx->pc = 0x404038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404034u;
            // 0x404038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40403Cu; }
        if (ctx->pc != 0x40403Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40403Cu; }
        if (ctx->pc != 0x40403Cu) { return; }
    }
    ctx->pc = 0x40403Cu;
label_40403c:
    // 0x40403c: 0xa2600250  sb          $zero, 0x250($s3)
    ctx->pc = 0x40403cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 592), (uint8_t)GPR_U32(ctx, 0));
label_404040:
    // 0x404040: 0x92630250  lbu         $v1, 0x250($s3)
    ctx->pc = 0x404040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 592)));
label_404044:
    // 0x404044: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_404048:
    if (ctx->pc == 0x404048u) {
        ctx->pc = 0x40404Cu;
        goto label_40404c;
    }
    ctx->pc = 0x404044u;
    {
        const bool branch_taken_0x404044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x404044) {
            ctx->pc = 0x404170u;
            goto label_404170;
        }
    }
    ctx->pc = 0x40404Cu;
label_40404c:
    // 0x40404c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_404050:
    // 0x404050: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x404050u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_404054:
    // 0x404054: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x404054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_404058:
    // 0x404058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x404058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40405c:
    // 0x40405c: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x40405cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_404060:
    // 0x404060: 0x8050007a  lb          $s0, 0x7A($v0)
    ctx->pc = 0x404060u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_404064:
    // 0x404064: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x404064u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_404068:
    // 0x404068: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x404068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_40406c:
    // 0x40406c: 0xc04f278  jal         func_13C9E0
label_404070:
    if (ctx->pc == 0x404070u) {
        ctx->pc = 0x404070u;
            // 0x404070: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x404074u;
        goto label_404074;
    }
    ctx->pc = 0x40406Cu;
    SET_GPR_U32(ctx, 31, 0x404074u);
    ctx->pc = 0x404070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40406Cu;
            // 0x404070: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404074u; }
        if (ctx->pc != 0x404074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404074u; }
        if (ctx->pc != 0x404074u) { return; }
    }
    ctx->pc = 0x404074u;
label_404074:
    // 0x404074: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x404074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_404078:
    // 0x404078: 0xc04ce80  jal         func_133A00
label_40407c:
    if (ctx->pc == 0x40407Cu) {
        ctx->pc = 0x40407Cu;
            // 0x40407c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x404080u;
        goto label_404080;
    }
    ctx->pc = 0x404078u;
    SET_GPR_U32(ctx, 31, 0x404080u);
    ctx->pc = 0x40407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404078u;
            // 0x40407c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404080u; }
        if (ctx->pc != 0x404080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404080u; }
        if (ctx->pc != 0x404080u) { return; }
    }
    ctx->pc = 0x404080u;
label_404080:
    // 0x404080: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x404080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_404084:
    // 0x404084: 0xc04ccf4  jal         func_1333D0
label_404088:
    if (ctx->pc == 0x404088u) {
        ctx->pc = 0x404088u;
            // 0x404088: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x40408Cu;
        goto label_40408c;
    }
    ctx->pc = 0x404084u;
    SET_GPR_U32(ctx, 31, 0x40408Cu);
    ctx->pc = 0x404088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404084u;
            // 0x404088: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40408Cu; }
        if (ctx->pc != 0x40408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40408Cu; }
        if (ctx->pc != 0x40408Cu) { return; }
    }
    ctx->pc = 0x40408Cu;
label_40408c:
    // 0x40408c: 0xc68002c0  lwc1        $f0, 0x2C0($s4)
    ctx->pc = 0x40408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_404090:
    // 0x404090: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x404090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_404094:
    // 0x404094: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x404094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_404098:
    // 0x404098: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x404098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40409c:
    // 0x40409c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x40409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4040a0:
    // 0x4040a0: 0xc68002c4  lwc1        $f0, 0x2C4($s4)
    ctx->pc = 0x4040a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040a4:
    // 0x4040a4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x4040a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4040a8:
    // 0x4040a8: 0xc68002c8  lwc1        $f0, 0x2C8($s4)
    ctx->pc = 0x4040a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040ac:
    // 0x4040ac: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4040acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_4040b0:
    // 0x4040b0: 0xc68002cc  lwc1        $f0, 0x2CC($s4)
    ctx->pc = 0x4040b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040b4:
    // 0x4040b4: 0xc04cca0  jal         func_133280
label_4040b8:
    if (ctx->pc == 0x4040B8u) {
        ctx->pc = 0x4040B8u;
            // 0x4040b8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x4040BCu;
        goto label_4040bc;
    }
    ctx->pc = 0x4040B4u;
    SET_GPR_U32(ctx, 31, 0x4040BCu);
    ctx->pc = 0x4040B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4040B4u;
            // 0x4040b8: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4040BCu; }
        if (ctx->pc != 0x4040BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4040BCu; }
        if (ctx->pc != 0x4040BCu) { return; }
    }
    ctx->pc = 0x4040BCu;
label_4040bc:
    // 0x4040bc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x4040bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4040c0:
    // 0x4040c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4040c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4040c4:
    // 0x4040c4: 0x0  nop
    ctx->pc = 0x4040c4u;
    // NOP
label_4040c8:
    // 0x4040c8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4040c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4040cc:
    // 0x4040cc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_4040d0:
    if (ctx->pc == 0x4040D0u) {
        ctx->pc = 0x4040D4u;
        goto label_4040d4;
    }
    ctx->pc = 0x4040CCu;
    {
        const bool branch_taken_0x4040cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4040cc) {
            ctx->pc = 0x4040F8u;
            goto label_4040f8;
        }
    }
    ctx->pc = 0x4040D4u;
label_4040d4:
    // 0x4040d4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x4040d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040d8:
    // 0x4040d8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x4040d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_4040dc:
    // 0x4040dc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x4040dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040e0:
    // 0x4040e0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x4040e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_4040e4:
    // 0x4040e4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x4040e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040e8:
    // 0x4040e8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x4040e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4040ec:
    // 0x4040ec: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x4040ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4040f0:
    // 0x4040f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_4040f4:
    if (ctx->pc == 0x4040F4u) {
        ctx->pc = 0x4040F4u;
            // 0x4040f4: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x4040F8u;
        goto label_4040f8;
    }
    ctx->pc = 0x4040F0u;
    {
        const bool branch_taken_0x4040f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4040F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4040F0u;
            // 0x4040f4: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4040f0) {
            ctx->pc = 0x404150u;
            goto label_404150;
        }
    }
    ctx->pc = 0x4040F8u;
label_4040f8:
    // 0x4040f8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x4040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_4040fc:
    // 0x4040fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4040fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_404100:
    // 0x404100: 0x0  nop
    ctx->pc = 0x404100u;
    // NOP
label_404104:
    // 0x404104: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x404104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_404108:
    // 0x404108: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_40410c:
    if (ctx->pc == 0x40410Cu) {
        ctx->pc = 0x404110u;
        goto label_404110;
    }
    ctx->pc = 0x404108u;
    {
        const bool branch_taken_0x404108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x404108) {
            ctx->pc = 0x404138u;
            goto label_404138;
        }
    }
    ctx->pc = 0x404110u;
label_404110:
    // 0x404110: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x404110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_404114:
    // 0x404114: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x404114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_404118:
    // 0x404118: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x404118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_40411c:
    // 0x40411c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x40411cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_404120:
    // 0x404120: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x404120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_404124:
    // 0x404124: 0xc04cca0  jal         func_133280
label_404128:
    if (ctx->pc == 0x404128u) {
        ctx->pc = 0x404128u;
            // 0x404128: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->pc = 0x40412Cu;
        goto label_40412c;
    }
    ctx->pc = 0x404124u;
    SET_GPR_U32(ctx, 31, 0x40412Cu);
    ctx->pc = 0x404128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404124u;
            // 0x404128: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40412Cu; }
        if (ctx->pc != 0x40412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40412Cu; }
        if (ctx->pc != 0x40412Cu) { return; }
    }
    ctx->pc = 0x40412Cu;
label_40412c:
    // 0x40412c: 0x10000008  b           . + 4 + (0x8 << 2)
label_404130:
    if (ctx->pc == 0x404130u) {
        ctx->pc = 0x404134u;
        goto label_404134;
    }
    ctx->pc = 0x40412Cu;
    {
        const bool branch_taken_0x40412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40412c) {
            ctx->pc = 0x404150u;
            goto label_404150;
        }
    }
    ctx->pc = 0x404134u;
label_404134:
    // 0x404134: 0x0  nop
    ctx->pc = 0x404134u;
    // NOP
label_404138:
    // 0x404138: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x404138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40413c:
    // 0x40413c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x40413cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_404140:
    // 0x404140: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x404140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_404144:
    // 0x404144: 0xc04cca0  jal         func_133280
label_404148:
    if (ctx->pc == 0x404148u) {
        ctx->pc = 0x404148u;
            // 0x404148: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x40414Cu;
        goto label_40414c;
    }
    ctx->pc = 0x404144u;
    SET_GPR_U32(ctx, 31, 0x40414Cu);
    ctx->pc = 0x404148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404144u;
            // 0x404148: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40414Cu; }
        if (ctx->pc != 0x40414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40414Cu; }
        if (ctx->pc != 0x40414Cu) { return; }
    }
    ctx->pc = 0x40414Cu;
label_40414c:
    // 0x40414c: 0x0  nop
    ctx->pc = 0x40414cu;
    // NOP
label_404150:
    // 0x404150: 0x8e640260  lw          $a0, 0x260($s3)
    ctx->pc = 0x404150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
label_404154:
    // 0x404154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x404154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_404158:
    // 0x404158: 0xc122ce4  jal         func_48B390
label_40415c:
    if (ctx->pc == 0x40415Cu) {
        ctx->pc = 0x40415Cu;
            // 0x40415c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x404160u;
        goto label_404160;
    }
    ctx->pc = 0x404158u;
    SET_GPR_U32(ctx, 31, 0x404160u);
    ctx->pc = 0x40415Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x404158u;
            // 0x40415c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B390u;
    if (runtime->hasFunction(0x48B390u)) {
        auto targetFn = runtime->lookupFunction(0x48B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404160u; }
        if (ctx->pc != 0x404160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B390_0x48b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x404160u; }
        if (ctx->pc != 0x404160u) { return; }
    }
    ctx->pc = 0x404160u;
label_404160:
    // 0x404160: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x404160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_404164:
    // 0x404164: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x404164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_404168:
    // 0x404168: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
label_40416c:
    if (ctx->pc == 0x40416Cu) {
        ctx->pc = 0x40416Cu;
            // 0x40416c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x404170u;
        goto label_404170;
    }
    ctx->pc = 0x404168u;
    {
        const bool branch_taken_0x404168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404168u;
            // 0x40416c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404168) {
            ctx->pc = 0x404064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_404064;
        }
    }
    ctx->pc = 0x404170u;
label_404170:
    // 0x404170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x404170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_404174:
    // 0x404174: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x404174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_404178:
    // 0x404178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x404178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40417c:
    // 0x40417c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40417cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_404180:
    // 0x404180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x404180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_404184:
    // 0x404184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x404184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_404188:
    // 0x404188: 0x3e00008  jr          $ra
label_40418c:
    if (ctx->pc == 0x40418Cu) {
        ctx->pc = 0x40418Cu;
            // 0x40418c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x404190u;
        goto label_fallthrough_0x404188;
    }
    ctx->pc = 0x404188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x404188u;
            // 0x40418c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x404188:
    ctx->pc = 0x404190u;
}
