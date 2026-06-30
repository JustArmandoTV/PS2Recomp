#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003309A0
// Address: 0x3309a0 - 0x330b20
void sub_003309A0_0x3309a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003309A0_0x3309a0");
#endif

    switch (ctx->pc) {
        case 0x3309a0u: goto label_3309a0;
        case 0x3309a4u: goto label_3309a4;
        case 0x3309a8u: goto label_3309a8;
        case 0x3309acu: goto label_3309ac;
        case 0x3309b0u: goto label_3309b0;
        case 0x3309b4u: goto label_3309b4;
        case 0x3309b8u: goto label_3309b8;
        case 0x3309bcu: goto label_3309bc;
        case 0x3309c0u: goto label_3309c0;
        case 0x3309c4u: goto label_3309c4;
        case 0x3309c8u: goto label_3309c8;
        case 0x3309ccu: goto label_3309cc;
        case 0x3309d0u: goto label_3309d0;
        case 0x3309d4u: goto label_3309d4;
        case 0x3309d8u: goto label_3309d8;
        case 0x3309dcu: goto label_3309dc;
        case 0x3309e0u: goto label_3309e0;
        case 0x3309e4u: goto label_3309e4;
        case 0x3309e8u: goto label_3309e8;
        case 0x3309ecu: goto label_3309ec;
        case 0x3309f0u: goto label_3309f0;
        case 0x3309f4u: goto label_3309f4;
        case 0x3309f8u: goto label_3309f8;
        case 0x3309fcu: goto label_3309fc;
        case 0x330a00u: goto label_330a00;
        case 0x330a04u: goto label_330a04;
        case 0x330a08u: goto label_330a08;
        case 0x330a0cu: goto label_330a0c;
        case 0x330a10u: goto label_330a10;
        case 0x330a14u: goto label_330a14;
        case 0x330a18u: goto label_330a18;
        case 0x330a1cu: goto label_330a1c;
        case 0x330a20u: goto label_330a20;
        case 0x330a24u: goto label_330a24;
        case 0x330a28u: goto label_330a28;
        case 0x330a2cu: goto label_330a2c;
        case 0x330a30u: goto label_330a30;
        case 0x330a34u: goto label_330a34;
        case 0x330a38u: goto label_330a38;
        case 0x330a3cu: goto label_330a3c;
        case 0x330a40u: goto label_330a40;
        case 0x330a44u: goto label_330a44;
        case 0x330a48u: goto label_330a48;
        case 0x330a4cu: goto label_330a4c;
        case 0x330a50u: goto label_330a50;
        case 0x330a54u: goto label_330a54;
        case 0x330a58u: goto label_330a58;
        case 0x330a5cu: goto label_330a5c;
        case 0x330a60u: goto label_330a60;
        case 0x330a64u: goto label_330a64;
        case 0x330a68u: goto label_330a68;
        case 0x330a6cu: goto label_330a6c;
        case 0x330a70u: goto label_330a70;
        case 0x330a74u: goto label_330a74;
        case 0x330a78u: goto label_330a78;
        case 0x330a7cu: goto label_330a7c;
        case 0x330a80u: goto label_330a80;
        case 0x330a84u: goto label_330a84;
        case 0x330a88u: goto label_330a88;
        case 0x330a8cu: goto label_330a8c;
        case 0x330a90u: goto label_330a90;
        case 0x330a94u: goto label_330a94;
        case 0x330a98u: goto label_330a98;
        case 0x330a9cu: goto label_330a9c;
        case 0x330aa0u: goto label_330aa0;
        case 0x330aa4u: goto label_330aa4;
        case 0x330aa8u: goto label_330aa8;
        case 0x330aacu: goto label_330aac;
        case 0x330ab0u: goto label_330ab0;
        case 0x330ab4u: goto label_330ab4;
        case 0x330ab8u: goto label_330ab8;
        case 0x330abcu: goto label_330abc;
        case 0x330ac0u: goto label_330ac0;
        case 0x330ac4u: goto label_330ac4;
        case 0x330ac8u: goto label_330ac8;
        case 0x330accu: goto label_330acc;
        case 0x330ad0u: goto label_330ad0;
        case 0x330ad4u: goto label_330ad4;
        case 0x330ad8u: goto label_330ad8;
        case 0x330adcu: goto label_330adc;
        case 0x330ae0u: goto label_330ae0;
        case 0x330ae4u: goto label_330ae4;
        case 0x330ae8u: goto label_330ae8;
        case 0x330aecu: goto label_330aec;
        case 0x330af0u: goto label_330af0;
        case 0x330af4u: goto label_330af4;
        case 0x330af8u: goto label_330af8;
        case 0x330afcu: goto label_330afc;
        case 0x330b00u: goto label_330b00;
        case 0x330b04u: goto label_330b04;
        case 0x330b08u: goto label_330b08;
        case 0x330b0cu: goto label_330b0c;
        case 0x330b10u: goto label_330b10;
        case 0x330b14u: goto label_330b14;
        case 0x330b18u: goto label_330b18;
        case 0x330b1cu: goto label_330b1c;
        default: break;
    }

    ctx->pc = 0x3309a0u;

label_3309a0:
    // 0x3309a0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3309a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_3309a4:
    // 0x3309a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3309a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3309a8:
    // 0x3309a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3309a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3309ac:
    // 0x3309ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3309acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3309b0:
    // 0x3309b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3309b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3309b4:
    // 0x3309b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3309b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3309b8:
    // 0x3309b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3309b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3309bc:
    // 0x3309bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3309bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3309c0:
    // 0x3309c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3309c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3309c4:
    // 0x3309c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3309c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3309c8:
    // 0x3309c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3309c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3309cc:
    // 0x3309cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3309ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3309d0:
    // 0x3309d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3309d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3309d4:
    // 0x3309d4: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x3309d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_3309d8:
    // 0x3309d8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3309d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3309dc:
    // 0x3309dc: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
label_3309e0:
    if (ctx->pc == 0x3309E0u) {
        ctx->pc = 0x3309E0u;
            // 0x3309e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3309E4u;
        goto label_3309e4;
    }
    ctx->pc = 0x3309DCu;
    {
        const bool branch_taken_0x3309dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3309E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3309DCu;
            // 0x3309e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309dc) {
            ctx->pc = 0x330AF4u;
            goto label_330af4;
        }
    }
    ctx->pc = 0x3309E4u;
label_3309e4:
    // 0x3309e4: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3309e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3309e8:
    // 0x3309e8: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x3309e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3309ec:
    // 0x3309ec: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x3309ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3309f0:
    // 0x3309f0: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x3309f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3309f4:
    // 0x3309f4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3309f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3309f8:
    // 0x3309f8: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x3309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_3309fc:
    // 0x3309fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3309fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_330a00:
    // 0x330a00: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_330a04:
    if (ctx->pc == 0x330A04u) {
        ctx->pc = 0x330A08u;
        goto label_330a08;
    }
    ctx->pc = 0x330A00u;
    {
        const bool branch_taken_0x330a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a00) {
            ctx->pc = 0x330A58u;
            goto label_330a58;
        }
    }
    ctx->pc = 0x330A08u;
label_330a08:
    // 0x330a08: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x330a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_330a0c:
    // 0x330a0c: 0x8ea2078c  lw          $v0, 0x78C($s5)
    ctx->pc = 0x330a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1932)));
label_330a10:
    // 0x330a10: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x330a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_330a14:
    // 0x330a14: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x330a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_330a18:
    // 0x330a18: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_330a1c:
    if (ctx->pc == 0x330A1Cu) {
        ctx->pc = 0x330A20u;
        goto label_330a20;
    }
    ctx->pc = 0x330A18u;
    {
        const bool branch_taken_0x330a18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x330a18) {
            ctx->pc = 0x330A58u;
            goto label_330a58;
        }
    }
    ctx->pc = 0x330A20u;
label_330a20:
    // 0x330a20: 0xa6540000  sh          $s4, 0x0($s2)
    ctx->pc = 0x330a20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 20));
label_330a24:
    // 0x330a24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_330a28:
    // 0x330a28: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x330a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_330a2c:
    // 0x330a2c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x330a2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_330a30:
    // 0x330a30: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x330a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_330a34:
    // 0x330a34: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x330a34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_330a38:
    // 0x330a38: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x330a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_330a3c:
    // 0x330a3c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x330a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330a40:
    // 0x330a40: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x330a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_330a44:
    // 0x330a44: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x330a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_330a48:
    // 0x330a48: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x330a48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_330a4c:
    // 0x330a4c: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x330a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_330a50:
    // 0x330a50: 0x1000001b  b           . + 4 + (0x1B << 2)
label_330a54:
    if (ctx->pc == 0x330A54u) {
        ctx->pc = 0x330A54u;
            // 0x330a54: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x330A58u;
        goto label_330a58;
    }
    ctx->pc = 0x330A50u;
    {
        const bool branch_taken_0x330a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330A50u;
            // 0x330a54: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a50) {
            ctx->pc = 0x330AC0u;
            goto label_330ac0;
        }
    }
    ctx->pc = 0x330A58u;
label_330a58:
    // 0x330a58: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x330a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_330a5c:
    // 0x330a5c: 0xc0ca680  jal         func_329A00
label_330a60:
    if (ctx->pc == 0x330A60u) {
        ctx->pc = 0x330A60u;
            // 0x330a60: 0x27a5019c  addiu       $a1, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->pc = 0x330A64u;
        goto label_330a64;
    }
    ctx->pc = 0x330A5Cu;
    SET_GPR_U32(ctx, 31, 0x330A64u);
    ctx->pc = 0x330A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330A5Cu;
            // 0x330a60: 0x27a5019c  addiu       $a1, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330A64u; }
        if (ctx->pc != 0x330A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330A64u; }
        if (ctx->pc != 0x330A64u) { return; }
    }
    ctx->pc = 0x330A64u;
label_330a64:
    // 0x330a64: 0xa6340000  sh          $s4, 0x0($s1)
    ctx->pc = 0x330a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 20));
label_330a68:
    // 0x330a68: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x330a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_330a6c:
    // 0x330a6c: 0x82040e3f  lb          $a0, 0xE3F($s0)
    ctx->pc = 0x330a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_330a70:
    // 0x330a70: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x330a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_330a74:
    // 0x330a74: 0x93a5019d  lbu         $a1, 0x19D($sp)
    ctx->pc = 0x330a74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 413)));
label_330a78:
    // 0x330a78: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x330a78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_330a7c:
    // 0x330a7c: 0x97a6019e  lhu         $a2, 0x19E($sp)
    ctx->pc = 0x330a7cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 414)));
label_330a80:
    // 0x330a80: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x330a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_330a84:
    // 0x330a84: 0x93a3019c  lbu         $v1, 0x19C($sp)
    ctx->pc = 0x330a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 412)));
label_330a88:
    // 0x330a88: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x330a88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
label_330a8c:
    // 0x330a8c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x330a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_330a90:
    // 0x330a90: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x330a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_330a94:
    // 0x330a94: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x330a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_330a98:
    // 0x330a98: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x330a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_330a9c:
    // 0x330a9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_330aa0:
    // 0x330aa0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x330aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_330aa4:
    // 0x330aa4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x330aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_330aa8:
    // 0x330aa8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_330aac:
    // 0x330aac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x330aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_330ab0:
    // 0x330ab0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x330ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_330ab4:
    // 0x330ab4: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x330ab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_330ab8:
    // 0x330ab8: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x330ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_330abc:
    // 0x330abc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x330abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_330ac0:
    // 0x330ac0: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x330ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_330ac4:
    // 0x330ac4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330ac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_330ac8:
    // 0x330ac8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x330ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_330acc:
    // 0x330acc: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_330ad0:
    if (ctx->pc == 0x330AD0u) {
        ctx->pc = 0x330AD0u;
            // 0x330ad0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x330AD4u;
        goto label_330ad4;
    }
    ctx->pc = 0x330ACCu;
    {
        const bool branch_taken_0x330acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330ACCu;
            // 0x330ad0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330acc) {
            ctx->pc = 0x3309F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3309f4;
        }
    }
    ctx->pc = 0x330AD4u;
label_330ad4:
    // 0x330ad4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x330ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_330ad8:
    // 0x330ad8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x330ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_330adc:
    // 0x330adc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x330adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_330ae0:
    // 0x330ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x330ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_330ae4:
    // 0x330ae4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x330ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_330ae8:
    // 0x330ae8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x330ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_330aec:
    // 0x330aec: 0x320f809  jalr        $t9
label_330af0:
    if (ctx->pc == 0x330AF0u) {
        ctx->pc = 0x330AF0u;
            // 0x330af0: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x330AF4u;
        goto label_330af4;
    }
    ctx->pc = 0x330AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330AF4u);
        ctx->pc = 0x330AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330AECu;
            // 0x330af0: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x330AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330AF4u; }
            if (ctx->pc != 0x330AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x330AF4u;
label_330af4:
    // 0x330af4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x330af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_330af8:
    // 0x330af8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x330af8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_330afc:
    // 0x330afc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x330afcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_330b00:
    // 0x330b00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x330b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_330b04:
    // 0x330b04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x330b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_330b08:
    // 0x330b08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x330b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_330b0c:
    // 0x330b0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_330b10:
    // 0x330b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_330b14:
    // 0x330b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_330b18:
    // 0x330b18: 0x3e00008  jr          $ra
label_330b1c:
    if (ctx->pc == 0x330B1Cu) {
        ctx->pc = 0x330B1Cu;
            // 0x330b1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x330B20u;
        goto label_fallthrough_0x330b18;
    }
    ctx->pc = 0x330B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330B18u;
            // 0x330b1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x330b18:
    ctx->pc = 0x330B20u;
}
