#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7F50
// Address: 0x2f7f50 - 0x2f8230
void sub_002F7F50_0x2f7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F50_0x2f7f50");
#endif

    switch (ctx->pc) {
        case 0x2f7f50u: goto label_2f7f50;
        case 0x2f7f54u: goto label_2f7f54;
        case 0x2f7f58u: goto label_2f7f58;
        case 0x2f7f5cu: goto label_2f7f5c;
        case 0x2f7f60u: goto label_2f7f60;
        case 0x2f7f64u: goto label_2f7f64;
        case 0x2f7f68u: goto label_2f7f68;
        case 0x2f7f6cu: goto label_2f7f6c;
        case 0x2f7f70u: goto label_2f7f70;
        case 0x2f7f74u: goto label_2f7f74;
        case 0x2f7f78u: goto label_2f7f78;
        case 0x2f7f7cu: goto label_2f7f7c;
        case 0x2f7f80u: goto label_2f7f80;
        case 0x2f7f84u: goto label_2f7f84;
        case 0x2f7f88u: goto label_2f7f88;
        case 0x2f7f8cu: goto label_2f7f8c;
        case 0x2f7f90u: goto label_2f7f90;
        case 0x2f7f94u: goto label_2f7f94;
        case 0x2f7f98u: goto label_2f7f98;
        case 0x2f7f9cu: goto label_2f7f9c;
        case 0x2f7fa0u: goto label_2f7fa0;
        case 0x2f7fa4u: goto label_2f7fa4;
        case 0x2f7fa8u: goto label_2f7fa8;
        case 0x2f7facu: goto label_2f7fac;
        case 0x2f7fb0u: goto label_2f7fb0;
        case 0x2f7fb4u: goto label_2f7fb4;
        case 0x2f7fb8u: goto label_2f7fb8;
        case 0x2f7fbcu: goto label_2f7fbc;
        case 0x2f7fc0u: goto label_2f7fc0;
        case 0x2f7fc4u: goto label_2f7fc4;
        case 0x2f7fc8u: goto label_2f7fc8;
        case 0x2f7fccu: goto label_2f7fcc;
        case 0x2f7fd0u: goto label_2f7fd0;
        case 0x2f7fd4u: goto label_2f7fd4;
        case 0x2f7fd8u: goto label_2f7fd8;
        case 0x2f7fdcu: goto label_2f7fdc;
        case 0x2f7fe0u: goto label_2f7fe0;
        case 0x2f7fe4u: goto label_2f7fe4;
        case 0x2f7fe8u: goto label_2f7fe8;
        case 0x2f7fecu: goto label_2f7fec;
        case 0x2f7ff0u: goto label_2f7ff0;
        case 0x2f7ff4u: goto label_2f7ff4;
        case 0x2f7ff8u: goto label_2f7ff8;
        case 0x2f7ffcu: goto label_2f7ffc;
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8004u: goto label_2f8004;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f800cu: goto label_2f800c;
        case 0x2f8010u: goto label_2f8010;
        case 0x2f8014u: goto label_2f8014;
        case 0x2f8018u: goto label_2f8018;
        case 0x2f801cu: goto label_2f801c;
        case 0x2f8020u: goto label_2f8020;
        case 0x2f8024u: goto label_2f8024;
        case 0x2f8028u: goto label_2f8028;
        case 0x2f802cu: goto label_2f802c;
        case 0x2f8030u: goto label_2f8030;
        case 0x2f8034u: goto label_2f8034;
        case 0x2f8038u: goto label_2f8038;
        case 0x2f803cu: goto label_2f803c;
        case 0x2f8040u: goto label_2f8040;
        case 0x2f8044u: goto label_2f8044;
        case 0x2f8048u: goto label_2f8048;
        case 0x2f804cu: goto label_2f804c;
        case 0x2f8050u: goto label_2f8050;
        case 0x2f8054u: goto label_2f8054;
        case 0x2f8058u: goto label_2f8058;
        case 0x2f805cu: goto label_2f805c;
        case 0x2f8060u: goto label_2f8060;
        case 0x2f8064u: goto label_2f8064;
        case 0x2f8068u: goto label_2f8068;
        case 0x2f806cu: goto label_2f806c;
        case 0x2f8070u: goto label_2f8070;
        case 0x2f8074u: goto label_2f8074;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f807cu: goto label_2f807c;
        case 0x2f8080u: goto label_2f8080;
        case 0x2f8084u: goto label_2f8084;
        case 0x2f8088u: goto label_2f8088;
        case 0x2f808cu: goto label_2f808c;
        case 0x2f8090u: goto label_2f8090;
        case 0x2f8094u: goto label_2f8094;
        case 0x2f8098u: goto label_2f8098;
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80a0u: goto label_2f80a0;
        case 0x2f80a4u: goto label_2f80a4;
        case 0x2f80a8u: goto label_2f80a8;
        case 0x2f80acu: goto label_2f80ac;
        case 0x2f80b0u: goto label_2f80b0;
        case 0x2f80b4u: goto label_2f80b4;
        case 0x2f80b8u: goto label_2f80b8;
        case 0x2f80bcu: goto label_2f80bc;
        case 0x2f80c0u: goto label_2f80c0;
        case 0x2f80c4u: goto label_2f80c4;
        case 0x2f80c8u: goto label_2f80c8;
        case 0x2f80ccu: goto label_2f80cc;
        case 0x2f80d0u: goto label_2f80d0;
        case 0x2f80d4u: goto label_2f80d4;
        case 0x2f80d8u: goto label_2f80d8;
        case 0x2f80dcu: goto label_2f80dc;
        case 0x2f80e0u: goto label_2f80e0;
        case 0x2f80e4u: goto label_2f80e4;
        case 0x2f80e8u: goto label_2f80e8;
        case 0x2f80ecu: goto label_2f80ec;
        case 0x2f80f0u: goto label_2f80f0;
        case 0x2f80f4u: goto label_2f80f4;
        case 0x2f80f8u: goto label_2f80f8;
        case 0x2f80fcu: goto label_2f80fc;
        case 0x2f8100u: goto label_2f8100;
        case 0x2f8104u: goto label_2f8104;
        case 0x2f8108u: goto label_2f8108;
        case 0x2f810cu: goto label_2f810c;
        case 0x2f8110u: goto label_2f8110;
        case 0x2f8114u: goto label_2f8114;
        case 0x2f8118u: goto label_2f8118;
        case 0x2f811cu: goto label_2f811c;
        case 0x2f8120u: goto label_2f8120;
        case 0x2f8124u: goto label_2f8124;
        case 0x2f8128u: goto label_2f8128;
        case 0x2f812cu: goto label_2f812c;
        case 0x2f8130u: goto label_2f8130;
        case 0x2f8134u: goto label_2f8134;
        case 0x2f8138u: goto label_2f8138;
        case 0x2f813cu: goto label_2f813c;
        case 0x2f8140u: goto label_2f8140;
        case 0x2f8144u: goto label_2f8144;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f814cu: goto label_2f814c;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f8154u: goto label_2f8154;
        case 0x2f8158u: goto label_2f8158;
        case 0x2f815cu: goto label_2f815c;
        case 0x2f8160u: goto label_2f8160;
        case 0x2f8164u: goto label_2f8164;
        case 0x2f8168u: goto label_2f8168;
        case 0x2f816cu: goto label_2f816c;
        case 0x2f8170u: goto label_2f8170;
        case 0x2f8174u: goto label_2f8174;
        case 0x2f8178u: goto label_2f8178;
        case 0x2f817cu: goto label_2f817c;
        case 0x2f8180u: goto label_2f8180;
        case 0x2f8184u: goto label_2f8184;
        case 0x2f8188u: goto label_2f8188;
        case 0x2f818cu: goto label_2f818c;
        case 0x2f8190u: goto label_2f8190;
        case 0x2f8194u: goto label_2f8194;
        case 0x2f8198u: goto label_2f8198;
        case 0x2f819cu: goto label_2f819c;
        case 0x2f81a0u: goto label_2f81a0;
        case 0x2f81a4u: goto label_2f81a4;
        case 0x2f81a8u: goto label_2f81a8;
        case 0x2f81acu: goto label_2f81ac;
        case 0x2f81b0u: goto label_2f81b0;
        case 0x2f81b4u: goto label_2f81b4;
        case 0x2f81b8u: goto label_2f81b8;
        case 0x2f81bcu: goto label_2f81bc;
        case 0x2f81c0u: goto label_2f81c0;
        case 0x2f81c4u: goto label_2f81c4;
        case 0x2f81c8u: goto label_2f81c8;
        case 0x2f81ccu: goto label_2f81cc;
        case 0x2f81d0u: goto label_2f81d0;
        case 0x2f81d4u: goto label_2f81d4;
        case 0x2f81d8u: goto label_2f81d8;
        case 0x2f81dcu: goto label_2f81dc;
        case 0x2f81e0u: goto label_2f81e0;
        case 0x2f81e4u: goto label_2f81e4;
        case 0x2f81e8u: goto label_2f81e8;
        case 0x2f81ecu: goto label_2f81ec;
        case 0x2f81f0u: goto label_2f81f0;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f81f8u: goto label_2f81f8;
        case 0x2f81fcu: goto label_2f81fc;
        case 0x2f8200u: goto label_2f8200;
        case 0x2f8204u: goto label_2f8204;
        case 0x2f8208u: goto label_2f8208;
        case 0x2f820cu: goto label_2f820c;
        case 0x2f8210u: goto label_2f8210;
        case 0x2f8214u: goto label_2f8214;
        case 0x2f8218u: goto label_2f8218;
        case 0x2f821cu: goto label_2f821c;
        case 0x2f8220u: goto label_2f8220;
        case 0x2f8224u: goto label_2f8224;
        case 0x2f8228u: goto label_2f8228;
        case 0x2f822cu: goto label_2f822c;
        default: break;
    }

    ctx->pc = 0x2f7f50u;

label_2f7f50:
    // 0x2f7f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f7f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f7f54:
    // 0x2f7f54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f7f58:
    // 0x2f7f58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f7f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f7f5c:
    // 0x2f7f5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f7f60:
    // 0x2f7f60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f7f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f7f64:
    // 0x2f7f64: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f7f64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f68:
    // 0x2f7f68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f7f6c:
    // 0x2f7f6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f7f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f70:
    // 0x2f7f70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f7f74:
    // 0x2f7f74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f7f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f78:
    // 0x2f7f78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f7f7c:
    // 0x2f7f7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f7f80:
    // 0x2f7f80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f7f84:
    // 0x2f7f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f88:
    // 0x2f7f88: 0x8c8300cc  lw          $v1, 0xCC($a0)
    ctx->pc = 0x2f7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_2f7f8c:
    // 0x2f7f8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2f7f90:
    if (ctx->pc == 0x2F7F90u) {
        ctx->pc = 0x2F7F90u;
            // 0x2f7f90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F7F94u;
        goto label_2f7f94;
    }
    ctx->pc = 0x2F7F8Cu;
    {
        const bool branch_taken_0x2f7f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F7F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F8Cu;
            // 0x2f7f90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f8c) {
            ctx->pc = 0x2F7F9Cu;
            goto label_2f7f9c;
        }
    }
    ctx->pc = 0x2F7F94u;
label_2f7f94:
    // 0x2f7f94: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2f7f98:
    if (ctx->pc == 0x2F7F98u) {
        ctx->pc = 0x2F7F98u;
            // 0x2f7f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F9Cu;
        goto label_2f7f9c;
    }
    ctx->pc = 0x2F7F94u;
    {
        const bool branch_taken_0x2f7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F94u;
            // 0x2f7f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f94) {
            ctx->pc = 0x2F8208u;
            goto label_2f8208;
        }
    }
    ctx->pc = 0x2F7F9Cu;
label_2f7f9c:
    // 0x2f7f9c: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7fa0:
    // 0x2f7fa0: 0x12a0002d  beqz        $s5, . + 4 + (0x2D << 2)
label_2f7fa4:
    if (ctx->pc == 0x2F7FA4u) {
        ctx->pc = 0x2F7FA4u;
            // 0x2f7fa4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x2F7FA8u;
        goto label_2f7fa8;
    }
    ctx->pc = 0x2F7FA0u;
    {
        const bool branch_taken_0x2f7fa0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FA0u;
            // 0x2f7fa4: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fa0) {
            ctx->pc = 0x2F8058u;
            goto label_2f8058;
        }
    }
    ctx->pc = 0x2F7FA8u;
label_2f7fa8:
    // 0x2f7fa8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f7fac:
    // 0x2f7fac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2f7fb0:
    if (ctx->pc == 0x2F7FB0u) {
        ctx->pc = 0x2F7FB0u;
            // 0x2f7fb0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x2F7FB4u;
        goto label_2f7fb4;
    }
    ctx->pc = 0x2F7FACu;
    {
        const bool branch_taken_0x2f7fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fac) {
            ctx->pc = 0x2F7FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FACu;
            // 0x2f7fb0: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FBCu;
            goto label_2f7fbc;
        }
    }
    ctx->pc = 0x2F7FB4u;
label_2f7fb4:
    // 0x2f7fb4: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2f7fb8:
    if (ctx->pc == 0x2F7FB8u) {
        ctx->pc = 0x2F7FBCu;
        goto label_2f7fbc;
    }
    ctx->pc = 0x2F7FB4u;
    {
        const bool branch_taken_0x2f7fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fb4) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F7FBCu;
label_2f7fbc:
    // 0x2f7fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7fc0:
    // 0x2f7fc0: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x2f7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_2f7fc4:
    // 0x2f7fc4: 0xc102768  jal         func_409DA0
label_2f7fc8:
    if (ctx->pc == 0x2F7FC8u) {
        ctx->pc = 0x2F7FC8u;
            // 0x2f7fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FCCu;
        goto label_2f7fcc;
    }
    ctx->pc = 0x2F7FC4u;
    SET_GPR_U32(ctx, 31, 0x2F7FCCu);
    ctx->pc = 0x2F7FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FC4u;
            // 0x2f7fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409DA0u;
    if (runtime->hasFunction(0x409DA0u)) {
        auto targetFn = runtime->lookupFunction(0x409DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FCCu; }
        if (ctx->pc != 0x2F7FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409DA0_0x409da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FCCu; }
        if (ctx->pc != 0x2F7FCCu) { return; }
    }
    ctx->pc = 0x2F7FCCu;
label_2f7fcc:
    // 0x2f7fcc: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2f7fd0:
    // 0x2f7fd0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f7fd4:
    if (ctx->pc == 0x2F7FD4u) {
        ctx->pc = 0x2F7FD8u;
        goto label_2f7fd8;
    }
    ctx->pc = 0x2F7FD0u;
    {
        const bool branch_taken_0x2f7fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fd0) {
            ctx->pc = 0x2F8010u;
            goto label_2f8010;
        }
    }
    ctx->pc = 0x2F7FD8u;
label_2f7fd8:
    // 0x2f7fd8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7fdc:
    // 0x2f7fdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f7fe0:
    if (ctx->pc == 0x2F7FE0u) {
        ctx->pc = 0x2F7FE4u;
        goto label_2f7fe4;
    }
    ctx->pc = 0x2F7FDCu;
    {
        const bool branch_taken_0x2f7fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fdc) {
            ctx->pc = 0x2F8010u;
            goto label_2f8010;
        }
    }
    ctx->pc = 0x2F7FE4u;
label_2f7fe4:
    // 0x2f7fe4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f7fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7fe8:
    // 0x2f7fe8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f7fec:
    // 0x2f7fec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7ff0:
    // 0x2f7ff0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7ff4:
    // 0x2f7ff4: 0x320f809  jalr        $t9
label_2f7ff8:
    if (ctx->pc == 0x2F7FF8u) {
        ctx->pc = 0x2F7FFCu;
        goto label_2f7ffc;
    }
    ctx->pc = 0x2F7FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7FFCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7FFCu; }
            if (ctx->pc != 0x2F7FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F7FFCu;
label_2f7ffc:
    // 0x2f7ffc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f8000:
    // 0x2f8000: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f8000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f8004:
    // 0x2f8004: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f8008:
    if (ctx->pc == 0x2F8008u) {
        ctx->pc = 0x2F8008u;
            // 0x2f8008: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2F800Cu;
        goto label_2f800c;
    }
    ctx->pc = 0x2F8004u;
    {
        const bool branch_taken_0x2f8004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8004) {
            ctx->pc = 0x2F8008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8004u;
            // 0x2f8008: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7fec;
        }
    }
    ctx->pc = 0x2F800Cu;
label_2f800c:
    // 0x2f800c: 0x0  nop
    ctx->pc = 0x2f800cu;
    // NOP
label_2f8010:
    // 0x2f8010: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2f8010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f8014:
    // 0x2f8014: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8018:
    // 0x2f8018: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f8018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f801c:
    // 0x2f801c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8020:
    // 0x2f8020: 0xc102eb0  jal         func_40BAC0
label_2f8024:
    if (ctx->pc == 0x2F8024u) {
        ctx->pc = 0x2F8024u;
            // 0x2f8024: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x2F8028u;
        goto label_2f8028;
    }
    ctx->pc = 0x2F8020u;
    SET_GPR_U32(ctx, 31, 0x2F8028u);
    ctx->pc = 0x2F8024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8020u;
            // 0x2f8024: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40BAC0u;
    if (runtime->hasFunction(0x40BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x40BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8028u; }
        if (ctx->pc != 0x2F8028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040BAC0_0x40bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8028u; }
        if (ctx->pc != 0x2F8028u) { return; }
    }
    ctx->pc = 0x2F8028u;
label_2f8028:
    // 0x2f8028: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f802c:
    if (ctx->pc == 0x2F802Cu) {
        ctx->pc = 0x2F802Cu;
            // 0x2f802c: 0x15282b  sltu        $a1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->pc = 0x2F8030u;
        goto label_2f8030;
    }
    ctx->pc = 0x2F8028u;
    {
        const bool branch_taken_0x2f8028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8028) {
            ctx->pc = 0x2F802Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8028u;
            // 0x2f802c: 0x15282b  sltu        $a1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8048u;
            goto label_2f8048;
        }
    }
    ctx->pc = 0x2F8030u;
label_2f8030:
    // 0x2f8030: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f8034:
    // 0x2f8034: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_2f8038:
    if (ctx->pc == 0x2F8038u) {
        ctx->pc = 0x2F803Cu;
        goto label_2f803c;
    }
    ctx->pc = 0x2F8034u;
    {
        const bool branch_taken_0x2f8034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f8034) {
            ctx->pc = 0x2F8044u;
            goto label_2f8044;
        }
    }
    ctx->pc = 0x2F803Cu;
label_2f803c:
    // 0x2f803c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8040:
    // 0x2f8040: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x2f8040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_2f8044:
    // 0x2f8044: 0x15282b  sltu        $a1, $zero, $s5
    ctx->pc = 0x2f8044u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2f8048:
    // 0x2f8048: 0xc0bd7b8  jal         func_2F5EE0
label_2f804c:
    if (ctx->pc == 0x2F804Cu) {
        ctx->pc = 0x2F804Cu;
            // 0x2f804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8050u;
        goto label_2f8050;
    }
    ctx->pc = 0x2F8048u;
    SET_GPR_U32(ctx, 31, 0x2F8050u);
    ctx->pc = 0x2F804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8048u;
            // 0x2f804c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EE0u;
    if (runtime->hasFunction(0x2F5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8050u; }
        if (ctx->pc != 0x2F8050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5EE0_0x2f5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8050u; }
        if (ctx->pc != 0x2F8050u) { return; }
    }
    ctx->pc = 0x2F8050u;
label_2f8050:
    // 0x2f8050: 0x10000065  b           . + 4 + (0x65 << 2)
label_2f8054:
    if (ctx->pc == 0x2F8054u) {
        ctx->pc = 0x2F8058u;
        goto label_2f8058;
    }
    ctx->pc = 0x2F8050u;
    {
        const bool branch_taken_0x2f8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8050) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F8058u;
label_2f8058:
    // 0x2f8058: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f805c:
    // 0x2f805c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8060:
    // 0x2f8060: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_2f8064:
    if (ctx->pc == 0x2F8064u) {
        ctx->pc = 0x2F8064u;
            // 0x2f8064: 0x15282b  sltu        $a1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->pc = 0x2F8068u;
        goto label_2f8068;
    }
    ctx->pc = 0x2F8060u;
    {
        const bool branch_taken_0x2f8060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8060) {
            ctx->pc = 0x2F8064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8060u;
            // 0x2f8064: 0x15282b  sltu        $a1, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F808Cu;
            goto label_2f808c;
        }
    }
    ctx->pc = 0x2F8068u;
label_2f8068:
    // 0x2f8068: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f8068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f806c:
    // 0x2f806c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2f8070:
    if (ctx->pc == 0x2F8070u) {
        ctx->pc = 0x2F8074u;
        goto label_2f8074;
    }
    ctx->pc = 0x2F806Cu;
    {
        const bool branch_taken_0x2f806c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f806c) {
            ctx->pc = 0x2F8088u;
            goto label_2f8088;
        }
    }
    ctx->pc = 0x2F8074u;
label_2f8074:
    // 0x2f8074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8078:
    // 0x2f8078: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f807c:
    if (ctx->pc == 0x2F807Cu) {
        ctx->pc = 0x2F8080u;
        goto label_2f8080;
    }
    ctx->pc = 0x2F8078u;
    {
        const bool branch_taken_0x2f8078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8078) {
            ctx->pc = 0x2F8088u;
            goto label_2f8088;
        }
    }
    ctx->pc = 0x2F8080u;
label_2f8080:
    // 0x2f8080: 0x10000059  b           . + 4 + (0x59 << 2)
label_2f8084:
    if (ctx->pc == 0x2F8084u) {
        ctx->pc = 0x2F8088u;
        goto label_2f8088;
    }
    ctx->pc = 0x2F8080u;
    {
        const bool branch_taken_0x2f8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8080) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F8088u;
label_2f8088:
    // 0x2f8088: 0x15282b  sltu        $a1, $zero, $s5
    ctx->pc = 0x2f8088u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2f808c:
    // 0x2f808c: 0xc0bd7b8  jal         func_2F5EE0
label_2f8090:
    if (ctx->pc == 0x2F8090u) {
        ctx->pc = 0x2F8090u;
            // 0x2f8090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8094u;
        goto label_2f8094;
    }
    ctx->pc = 0x2F808Cu;
    SET_GPR_U32(ctx, 31, 0x2F8094u);
    ctx->pc = 0x2F8090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F808Cu;
            // 0x2f8090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EE0u;
    if (runtime->hasFunction(0x2F5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8094u; }
        if (ctx->pc != 0x2F8094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5EE0_0x2f5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8094u; }
        if (ctx->pc != 0x2F8094u) { return; }
    }
    ctx->pc = 0x2F8094u;
label_2f8094:
    // 0x2f8094: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x2f8094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2f8098:
    // 0x2f8098: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2f809c:
    if (ctx->pc == 0x2F809Cu) {
        ctx->pc = 0x2F809Cu;
            // 0x2f809c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2F80A0u;
        goto label_2f80a0;
    }
    ctx->pc = 0x2F8098u;
    {
        const bool branch_taken_0x2f8098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8098) {
            ctx->pc = 0x2F809Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8098u;
            // 0x2f809c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F80C0u;
            goto label_2f80c0;
        }
    }
    ctx->pc = 0x2F80A0u;
label_2f80a0:
    // 0x2f80a0: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2f80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f80a4:
    // 0x2f80a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f80a8:
    // 0x2f80a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f80ac:
    if (ctx->pc == 0x2F80ACu) {
        ctx->pc = 0x2F80B0u;
        goto label_2f80b0;
    }
    ctx->pc = 0x2F80A8u;
    {
        const bool branch_taken_0x2f80a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f80a8) {
            ctx->pc = 0x2F80BCu;
            goto label_2f80bc;
        }
    }
    ctx->pc = 0x2F80B0u;
label_2f80b0:
    // 0x2f80b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f80b4:
    // 0x2f80b4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2f80b8:
    if (ctx->pc == 0x2F80B8u) {
        ctx->pc = 0x2F80BCu;
        goto label_2f80bc;
    }
    ctx->pc = 0x2F80B4u;
    {
        const bool branch_taken_0x2f80b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f80b4) {
            ctx->pc = 0x2F80F0u;
            goto label_2f80f0;
        }
    }
    ctx->pc = 0x2F80BCu;
label_2f80bc:
    // 0x2f80bc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2f80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f80c0:
    // 0x2f80c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f80c4:
    if (ctx->pc == 0x2F80C4u) {
        ctx->pc = 0x2F80C8u;
        goto label_2f80c8;
    }
    ctx->pc = 0x2F80C0u;
    {
        const bool branch_taken_0x2f80c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80c0) {
            ctx->pc = 0x2F80F0u;
            goto label_2f80f0;
        }
    }
    ctx->pc = 0x2F80C8u;
label_2f80c8:
    // 0x2f80c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f80c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f80cc:
    // 0x2f80cc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2f80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f80d0:
    // 0x2f80d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f80d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f80d4:
    // 0x2f80d4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f80d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f80d8:
    // 0x2f80d8: 0x320f809  jalr        $t9
label_2f80dc:
    if (ctx->pc == 0x2F80DCu) {
        ctx->pc = 0x2F80E0u;
        goto label_2f80e0;
    }
    ctx->pc = 0x2F80D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F80E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F80E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F80E0u; }
            if (ctx->pc != 0x2F80E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F80E0u;
label_2f80e0:
    // 0x2f80e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f80e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f80e4:
    // 0x2f80e4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f80e8:
    // 0x2f80e8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f80ec:
    if (ctx->pc == 0x2F80ECu) {
        ctx->pc = 0x2F80ECu;
            // 0x2f80ec: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2F80F0u;
        goto label_2f80f0;
    }
    ctx->pc = 0x2F80E8u;
    {
        const bool branch_taken_0x2f80e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f80e8) {
            ctx->pc = 0x2F80ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F80E8u;
            // 0x2f80ec: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F80D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f80d0;
        }
    }
    ctx->pc = 0x2F80F0u;
label_2f80f0:
    // 0x2f80f0: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2f80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_2f80f4:
    // 0x2f80f4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f80f8:
    // 0x2f80f8: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_2f80fc:
    if (ctx->pc == 0x2F80FCu) {
        ctx->pc = 0x2F80FCu;
            // 0x2f80fc: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2F8100u;
        goto label_2f8100;
    }
    ctx->pc = 0x2F80F8u;
    {
        const bool branch_taken_0x2f80f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f80f8) {
            ctx->pc = 0x2F80FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F80F8u;
            // 0x2f80fc: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F814Cu;
            goto label_2f814c;
        }
    }
    ctx->pc = 0x2F8100u;
label_2f8100:
    // 0x2f8100: 0x920200dd  lbu         $v0, 0xDD($s0)
    ctx->pc = 0x2f8100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
label_2f8104:
    // 0x2f8104: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f8108:
    if (ctx->pc == 0x2F8108u) {
        ctx->pc = 0x2F8108u;
            // 0x2f8108: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2F810Cu;
        goto label_2f810c;
    }
    ctx->pc = 0x2F8104u;
    {
        const bool branch_taken_0x2f8104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8104) {
            ctx->pc = 0x2F8108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8104u;
            // 0x2f8108: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8124u;
            goto label_2f8124;
        }
    }
    ctx->pc = 0x2F810Cu;
label_2f810c:
    // 0x2f810c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f810cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f8110:
    // 0x2f8110: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f8110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f8114:
    // 0x2f8114: 0xc102e7c  jal         func_40B9F0
label_2f8118:
    if (ctx->pc == 0x2F8118u) {
        ctx->pc = 0x2F8118u;
            // 0x2f8118: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2F811Cu;
        goto label_2f811c;
    }
    ctx->pc = 0x2F8114u;
    SET_GPR_U32(ctx, 31, 0x2F811Cu);
    ctx->pc = 0x2F8118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8114u;
            // 0x2f8118: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40B9F0u;
    if (runtime->hasFunction(0x40B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x40B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F811Cu; }
        if (ctx->pc != 0x2F811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040B9F0_0x40b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F811Cu; }
        if (ctx->pc != 0x2F811Cu) { return; }
    }
    ctx->pc = 0x2F811Cu;
label_2f811c:
    // 0x2f811c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f8120:
    if (ctx->pc == 0x2F8120u) {
        ctx->pc = 0x2F8124u;
        goto label_2f8124;
    }
    ctx->pc = 0x2F811Cu;
    {
        const bool branch_taken_0x2f811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f811c) {
            ctx->pc = 0x2F812Cu;
            goto label_2f812c;
        }
    }
    ctx->pc = 0x2F8124u;
label_2f8124:
    // 0x2f8124: 0xc102e70  jal         func_40B9C0
label_2f8128:
    if (ctx->pc == 0x2F8128u) {
        ctx->pc = 0x2F812Cu;
        goto label_2f812c;
    }
    ctx->pc = 0x2F8124u;
    SET_GPR_U32(ctx, 31, 0x2F812Cu);
    ctx->pc = 0x40B9C0u;
    if (runtime->hasFunction(0x40B9C0u)) {
        auto targetFn = runtime->lookupFunction(0x40B9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F812Cu; }
        if (ctx->pc != 0x2F812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040B9C0_0x40b9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F812Cu; }
        if (ctx->pc != 0x2F812Cu) { return; }
    }
    ctx->pc = 0x2F812Cu;
label_2f812c:
    // 0x2f812c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_2f8130:
    if (ctx->pc == 0x2F8130u) {
        ctx->pc = 0x2F8134u;
        goto label_2f8134;
    }
    ctx->pc = 0x2F812Cu;
    {
        const bool branch_taken_0x2f812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f812c) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F8134u;
label_2f8134:
    // 0x2f8134: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f8138:
    // 0x2f8138: 0x1052002b  beq         $v0, $s2, . + 4 + (0x2B << 2)
label_2f813c:
    if (ctx->pc == 0x2F813Cu) {
        ctx->pc = 0x2F8140u;
        goto label_2f8140;
    }
    ctx->pc = 0x2F8138u;
    {
        const bool branch_taken_0x2f8138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2f8138) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F8140u;
label_2f8140:
    // 0x2f8140: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f8144:
    // 0x2f8144: 0x10000028  b           . + 4 + (0x28 << 2)
label_2f8148:
    if (ctx->pc == 0x2F8148u) {
        ctx->pc = 0x2F8148u;
            // 0x2f8148: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x2F814Cu;
        goto label_2f814c;
    }
    ctx->pc = 0x2F8144u;
    {
        const bool branch_taken_0x2f8144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8144u;
            // 0x2f8148: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8144) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F814Cu;
label_2f814c:
    // 0x2f814c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f8150:
    // 0x2f8150: 0x8c710550  lw          $s1, 0x550($v1)
    ctx->pc = 0x2f8150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
label_2f8154:
    // 0x2f8154: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f8154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f8158:
    // 0x2f8158: 0x8223010d  lb          $v1, 0x10D($s1)
    ctx->pc = 0x2f8158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_2f815c:
    // 0x2f815c: 0xa223010e  sb          $v1, 0x10E($s1)
    ctx->pc = 0x2f815cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 270), (uint8_t)GPR_U32(ctx, 3));
label_2f8160:
    // 0x2f8160: 0xa220010d  sb          $zero, 0x10D($s1)
    ctx->pc = 0x2f8160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 0));
label_2f8164:
    // 0x2f8164: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x2f8164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2f8168:
    // 0x2f8168: 0x8c630d6c  lw          $v1, 0xD6C($v1)
    ctx->pc = 0x2f8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_2f816c:
    // 0x2f816c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2f816cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2f8170:
    // 0x2f8170: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2f8174:
    if (ctx->pc == 0x2F8174u) {
        ctx->pc = 0x2F8174u;
            // 0x2f8174: 0x8223010c  lb          $v1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x2F8178u;
        goto label_2f8178;
    }
    ctx->pc = 0x2F8170u;
    {
        const bool branch_taken_0x2f8170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8170) {
            ctx->pc = 0x2F8174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8170u;
            // 0x2f8174: 0x8223010c  lb          $v1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8188u;
            goto label_2f8188;
        }
    }
    ctx->pc = 0x2F8178u;
label_2f8178:
    // 0x2f8178: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f817c:
    // 0x2f817c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_2f8180:
    if (ctx->pc == 0x2F8180u) {
        ctx->pc = 0x2F8184u;
        goto label_2f8184;
    }
    ctx->pc = 0x2F817Cu;
    {
        const bool branch_taken_0x2f817c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f817c) {
            ctx->pc = 0x2F81E8u;
            goto label_2f81e8;
        }
    }
    ctx->pc = 0x2F8184u;
label_2f8184:
    // 0x2f8184: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x2f8184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_2f8188:
    // 0x2f8188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f818c:
    // 0x2f818c: 0x13363c  dsll32      $a2, $s3, 24
    ctx->pc = 0x2f818cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 24));
label_2f8190:
    // 0x2f8190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f8190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8194:
    // 0x2f8194: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2f8194u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_2f8198:
    // 0x2f8198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f819c:
    // 0x2f819c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f81a0:
    // 0x2f81a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2f81a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f81a4:
    // 0x2f81a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2f81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f81a8:
    // 0x2f81a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f81ac:
    // 0x2f81ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2f81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2f81b0:
    // 0x2f81b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f81b4:
    // 0x2f81b4: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2f81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2f81b8:
    // 0x2f81b8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x2f81b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2f81bc:
    // 0x2f81bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f81bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f81c0:
    // 0x2f81c0: 0x8225010e  lb          $a1, 0x10E($s1)
    ctx->pc = 0x2f81c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 270)));
label_2f81c4:
    // 0x2f81c4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2f81c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2f81c8:
    // 0x2f81c8: 0x320f809  jalr        $t9
label_2f81cc:
    if (ctx->pc == 0x2F81CCu) {
        ctx->pc = 0x2F81CCu;
            // 0x2f81cc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2F81D0u;
        goto label_2f81d0;
    }
    ctx->pc = 0x2F81C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F81D0u);
        ctx->pc = 0x2F81CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81C8u;
            // 0x2f81cc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F81D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F81D0u; }
            if (ctx->pc != 0x2F81D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F81D0u;
label_2f81d0:
    // 0x2f81d0: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x2f81d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2f81d4:
    // 0x2f81d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f81d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f81d8:
    // 0x2f81d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f81dc:
    // 0x2f81dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f81dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f81e0:
    // 0x2f81e0: 0x320f809  jalr        $t9
label_2f81e4:
    if (ctx->pc == 0x2F81E4u) {
        ctx->pc = 0x2F81E4u;
            // 0x2f81e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F81E8u;
        goto label_2f81e8;
    }
    ctx->pc = 0x2F81E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F81E8u);
        ctx->pc = 0x2F81E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81E0u;
            // 0x2f81e4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F81E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F81E8u; }
            if (ctx->pc != 0x2F81E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F81E8u;
label_2f81e8:
    // 0x2f81e8: 0x6820007  bltzl       $s4, . + 4 + (0x7 << 2)
label_2f81ec:
    if (ctx->pc == 0x2F81ECu) {
        ctx->pc = 0x2F81ECu;
            // 0x2f81ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F81F0u;
        goto label_2f81f0;
    }
    ctx->pc = 0x2F81E8u;
    {
        const bool branch_taken_0x2f81e8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2f81e8) {
            ctx->pc = 0x2F81ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81E8u;
            // 0x2f81ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8208u;
            goto label_2f8208;
        }
    }
    ctx->pc = 0x2F81F0u;
label_2f81f0:
    // 0x2f81f0: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x2f81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2f81f4:
    // 0x2f81f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f81f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f81f8:
    // 0x2f81f8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2f81f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2f81fc:
    // 0x2f81fc: 0x320f809  jalr        $t9
label_2f8200:
    if (ctx->pc == 0x2F8200u) {
        ctx->pc = 0x2F8200u;
            // 0x2f8200: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8204u;
        goto label_2f8204;
    }
    ctx->pc = 0x2F81FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8204u);
        ctx->pc = 0x2F8200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F81FCu;
            // 0x2f8200: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8204u; }
            if (ctx->pc != 0x2F8204u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8204u;
label_2f8204:
    // 0x2f8204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8208:
    // 0x2f8208: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f8208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f820c:
    // 0x2f820c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f8210:
    // 0x2f8210: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f8210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f8214:
    // 0x2f8214: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f8214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8218:
    // 0x2f8218: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f8218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f821c:
    // 0x2f821c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f821cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f8220:
    // 0x2f8220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f8220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f8224:
    // 0x2f8224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f8224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8228:
    // 0x2f8228: 0x3e00008  jr          $ra
label_2f822c:
    if (ctx->pc == 0x2F822Cu) {
        ctx->pc = 0x2F822Cu;
            // 0x2f822c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F8230u;
        goto label_fallthrough_0x2f8228;
    }
    ctx->pc = 0x2F8228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8228u;
            // 0x2f822c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8228:
    ctx->pc = 0x2F8230u;
}
