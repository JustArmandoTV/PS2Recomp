#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00489F60
// Address: 0x489f60 - 0x48a1f0
void sub_00489F60_0x489f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489F60_0x489f60");
#endif

    switch (ctx->pc) {
        case 0x489f60u: goto label_489f60;
        case 0x489f64u: goto label_489f64;
        case 0x489f68u: goto label_489f68;
        case 0x489f6cu: goto label_489f6c;
        case 0x489f70u: goto label_489f70;
        case 0x489f74u: goto label_489f74;
        case 0x489f78u: goto label_489f78;
        case 0x489f7cu: goto label_489f7c;
        case 0x489f80u: goto label_489f80;
        case 0x489f84u: goto label_489f84;
        case 0x489f88u: goto label_489f88;
        case 0x489f8cu: goto label_489f8c;
        case 0x489f90u: goto label_489f90;
        case 0x489f94u: goto label_489f94;
        case 0x489f98u: goto label_489f98;
        case 0x489f9cu: goto label_489f9c;
        case 0x489fa0u: goto label_489fa0;
        case 0x489fa4u: goto label_489fa4;
        case 0x489fa8u: goto label_489fa8;
        case 0x489facu: goto label_489fac;
        case 0x489fb0u: goto label_489fb0;
        case 0x489fb4u: goto label_489fb4;
        case 0x489fb8u: goto label_489fb8;
        case 0x489fbcu: goto label_489fbc;
        case 0x489fc0u: goto label_489fc0;
        case 0x489fc4u: goto label_489fc4;
        case 0x489fc8u: goto label_489fc8;
        case 0x489fccu: goto label_489fcc;
        case 0x489fd0u: goto label_489fd0;
        case 0x489fd4u: goto label_489fd4;
        case 0x489fd8u: goto label_489fd8;
        case 0x489fdcu: goto label_489fdc;
        case 0x489fe0u: goto label_489fe0;
        case 0x489fe4u: goto label_489fe4;
        case 0x489fe8u: goto label_489fe8;
        case 0x489fecu: goto label_489fec;
        case 0x489ff0u: goto label_489ff0;
        case 0x489ff4u: goto label_489ff4;
        case 0x489ff8u: goto label_489ff8;
        case 0x489ffcu: goto label_489ffc;
        case 0x48a000u: goto label_48a000;
        case 0x48a004u: goto label_48a004;
        case 0x48a008u: goto label_48a008;
        case 0x48a00cu: goto label_48a00c;
        case 0x48a010u: goto label_48a010;
        case 0x48a014u: goto label_48a014;
        case 0x48a018u: goto label_48a018;
        case 0x48a01cu: goto label_48a01c;
        case 0x48a020u: goto label_48a020;
        case 0x48a024u: goto label_48a024;
        case 0x48a028u: goto label_48a028;
        case 0x48a02cu: goto label_48a02c;
        case 0x48a030u: goto label_48a030;
        case 0x48a034u: goto label_48a034;
        case 0x48a038u: goto label_48a038;
        case 0x48a03cu: goto label_48a03c;
        case 0x48a040u: goto label_48a040;
        case 0x48a044u: goto label_48a044;
        case 0x48a048u: goto label_48a048;
        case 0x48a04cu: goto label_48a04c;
        case 0x48a050u: goto label_48a050;
        case 0x48a054u: goto label_48a054;
        case 0x48a058u: goto label_48a058;
        case 0x48a05cu: goto label_48a05c;
        case 0x48a060u: goto label_48a060;
        case 0x48a064u: goto label_48a064;
        case 0x48a068u: goto label_48a068;
        case 0x48a06cu: goto label_48a06c;
        case 0x48a070u: goto label_48a070;
        case 0x48a074u: goto label_48a074;
        case 0x48a078u: goto label_48a078;
        case 0x48a07cu: goto label_48a07c;
        case 0x48a080u: goto label_48a080;
        case 0x48a084u: goto label_48a084;
        case 0x48a088u: goto label_48a088;
        case 0x48a08cu: goto label_48a08c;
        case 0x48a090u: goto label_48a090;
        case 0x48a094u: goto label_48a094;
        case 0x48a098u: goto label_48a098;
        case 0x48a09cu: goto label_48a09c;
        case 0x48a0a0u: goto label_48a0a0;
        case 0x48a0a4u: goto label_48a0a4;
        case 0x48a0a8u: goto label_48a0a8;
        case 0x48a0acu: goto label_48a0ac;
        case 0x48a0b0u: goto label_48a0b0;
        case 0x48a0b4u: goto label_48a0b4;
        case 0x48a0b8u: goto label_48a0b8;
        case 0x48a0bcu: goto label_48a0bc;
        case 0x48a0c0u: goto label_48a0c0;
        case 0x48a0c4u: goto label_48a0c4;
        case 0x48a0c8u: goto label_48a0c8;
        case 0x48a0ccu: goto label_48a0cc;
        case 0x48a0d0u: goto label_48a0d0;
        case 0x48a0d4u: goto label_48a0d4;
        case 0x48a0d8u: goto label_48a0d8;
        case 0x48a0dcu: goto label_48a0dc;
        case 0x48a0e0u: goto label_48a0e0;
        case 0x48a0e4u: goto label_48a0e4;
        case 0x48a0e8u: goto label_48a0e8;
        case 0x48a0ecu: goto label_48a0ec;
        case 0x48a0f0u: goto label_48a0f0;
        case 0x48a0f4u: goto label_48a0f4;
        case 0x48a0f8u: goto label_48a0f8;
        case 0x48a0fcu: goto label_48a0fc;
        case 0x48a100u: goto label_48a100;
        case 0x48a104u: goto label_48a104;
        case 0x48a108u: goto label_48a108;
        case 0x48a10cu: goto label_48a10c;
        case 0x48a110u: goto label_48a110;
        case 0x48a114u: goto label_48a114;
        case 0x48a118u: goto label_48a118;
        case 0x48a11cu: goto label_48a11c;
        case 0x48a120u: goto label_48a120;
        case 0x48a124u: goto label_48a124;
        case 0x48a128u: goto label_48a128;
        case 0x48a12cu: goto label_48a12c;
        case 0x48a130u: goto label_48a130;
        case 0x48a134u: goto label_48a134;
        case 0x48a138u: goto label_48a138;
        case 0x48a13cu: goto label_48a13c;
        case 0x48a140u: goto label_48a140;
        case 0x48a144u: goto label_48a144;
        case 0x48a148u: goto label_48a148;
        case 0x48a14cu: goto label_48a14c;
        case 0x48a150u: goto label_48a150;
        case 0x48a154u: goto label_48a154;
        case 0x48a158u: goto label_48a158;
        case 0x48a15cu: goto label_48a15c;
        case 0x48a160u: goto label_48a160;
        case 0x48a164u: goto label_48a164;
        case 0x48a168u: goto label_48a168;
        case 0x48a16cu: goto label_48a16c;
        case 0x48a170u: goto label_48a170;
        case 0x48a174u: goto label_48a174;
        case 0x48a178u: goto label_48a178;
        case 0x48a17cu: goto label_48a17c;
        case 0x48a180u: goto label_48a180;
        case 0x48a184u: goto label_48a184;
        case 0x48a188u: goto label_48a188;
        case 0x48a18cu: goto label_48a18c;
        case 0x48a190u: goto label_48a190;
        case 0x48a194u: goto label_48a194;
        case 0x48a198u: goto label_48a198;
        case 0x48a19cu: goto label_48a19c;
        case 0x48a1a0u: goto label_48a1a0;
        case 0x48a1a4u: goto label_48a1a4;
        case 0x48a1a8u: goto label_48a1a8;
        case 0x48a1acu: goto label_48a1ac;
        case 0x48a1b0u: goto label_48a1b0;
        case 0x48a1b4u: goto label_48a1b4;
        case 0x48a1b8u: goto label_48a1b8;
        case 0x48a1bcu: goto label_48a1bc;
        case 0x48a1c0u: goto label_48a1c0;
        case 0x48a1c4u: goto label_48a1c4;
        case 0x48a1c8u: goto label_48a1c8;
        case 0x48a1ccu: goto label_48a1cc;
        case 0x48a1d0u: goto label_48a1d0;
        case 0x48a1d4u: goto label_48a1d4;
        case 0x48a1d8u: goto label_48a1d8;
        case 0x48a1dcu: goto label_48a1dc;
        case 0x48a1e0u: goto label_48a1e0;
        case 0x48a1e4u: goto label_48a1e4;
        case 0x48a1e8u: goto label_48a1e8;
        case 0x48a1ecu: goto label_48a1ec;
        default: break;
    }

    ctx->pc = 0x489f60u;

label_489f60:
    // 0x489f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_489f64:
    // 0x489f64: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x489f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_489f68:
    // 0x489f68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_489f6c:
    // 0x489f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x489f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_489f70:
    // 0x489f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_489f74:
    // 0x489f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489f78:
    // 0x489f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x489f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_489f7c:
    // 0x489f7c: 0xc075a44  jal         func_1D6910
label_489f80:
    if (ctx->pc == 0x489F80u) {
        ctx->pc = 0x489F80u;
            // 0x489f80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x489F84u;
        goto label_489f84;
    }
    ctx->pc = 0x489F7Cu;
    SET_GPR_U32(ctx, 31, 0x489F84u);
    ctx->pc = 0x489F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489F7Cu;
            // 0x489f80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (runtime->hasFunction(0x1D6910u)) {
        auto targetFn = runtime->lookupFunction(0x1D6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489F84u; }
        if (ctx->pc != 0x489F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6910_0x1d6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489F84u; }
        if (ctx->pc != 0x489F84u) { return; }
    }
    ctx->pc = 0x489F84u;
label_489f84:
    // 0x489f84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x489f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_489f88:
    // 0x489f88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x489f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_489f8c:
    // 0x489f8c: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x489f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
label_489f90:
    // 0x489f90: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x489f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_489f94:
    // 0x489f94: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x489f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_489f98:
    // 0x489f98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x489f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_489f9c:
    // 0x489f9c: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x489f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_489fa0:
    // 0x489fa0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x489fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_489fa4:
    // 0x489fa4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x489fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
label_489fa8:
    // 0x489fa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x489fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_489fac:
    // 0x489fac: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x489facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_489fb0:
    // 0x489fb0: 0x2463f860  addiu       $v1, $v1, -0x7A0
    ctx->pc = 0x489fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
label_489fb4:
    // 0x489fb4: 0xae24006c  sw          $a0, 0x6C($s1)
    ctx->pc = 0x489fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 4));
label_489fb8:
    // 0x489fb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x489fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_489fbc:
    // 0x489fbc: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x489fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_489fc0:
    // 0x489fc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x489fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_489fc4:
    // 0x489fc4: 0xae250074  sw          $a1, 0x74($s1)
    ctx->pc = 0x489fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 5));
label_489fc8:
    // 0x489fc8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x489fc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_489fcc:
    // 0x489fcc: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x489fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_489fd0:
    // 0x489fd0: 0xc04cbd8  jal         func_132F60
label_489fd4:
    if (ctx->pc == 0x489FD4u) {
        ctx->pc = 0x489FD4u;
            // 0x489fd4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x489FD8u;
        goto label_489fd8;
    }
    ctx->pc = 0x489FD0u;
    SET_GPR_U32(ctx, 31, 0x489FD8u);
    ctx->pc = 0x489FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489FD0u;
            // 0x489fd4: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FD8u; }
        if (ctx->pc != 0x489FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FD8u; }
        if (ctx->pc != 0x489FD8u) { return; }
    }
    ctx->pc = 0x489FD8u;
label_489fd8:
    // 0x489fd8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x489fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_489fdc:
    // 0x489fdc: 0xc04cc04  jal         func_133010
label_489fe0:
    if (ctx->pc == 0x489FE0u) {
        ctx->pc = 0x489FE0u;
            // 0x489fe0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x489FE4u;
        goto label_489fe4;
    }
    ctx->pc = 0x489FDCu;
    SET_GPR_U32(ctx, 31, 0x489FE4u);
    ctx->pc = 0x489FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489FDCu;
            // 0x489fe0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FE4u; }
        if (ctx->pc != 0x489FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FE4u; }
        if (ctx->pc != 0x489FE4u) { return; }
    }
    ctx->pc = 0x489FE4u;
label_489fe4:
    // 0x489fe4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x489fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_489fe8:
    // 0x489fe8: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x489fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_489fec:
    // 0x489fec: 0xc040180  jal         func_100600
label_489ff0:
    if (ctx->pc == 0x489FF0u) {
        ctx->pc = 0x489FF0u;
            // 0x489ff0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x489FF4u;
        goto label_489ff4;
    }
    ctx->pc = 0x489FECu;
    SET_GPR_U32(ctx, 31, 0x489FF4u);
    ctx->pc = 0x489FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x489FECu;
            // 0x489ff0: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FF4u; }
        if (ctx->pc != 0x489FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x489FF4u; }
        if (ctx->pc != 0x489FF4u) { return; }
    }
    ctx->pc = 0x489FF4u;
label_489ff4:
    // 0x489ff4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_489ff8:
    if (ctx->pc == 0x489FF8u) {
        ctx->pc = 0x489FF8u;
            // 0x489ff8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x489FFCu;
        goto label_489ffc;
    }
    ctx->pc = 0x489FF4u;
    {
        const bool branch_taken_0x489ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489ff4) {
            ctx->pc = 0x489FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x489FF4u;
            // 0x489ff8: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A018u;
            goto label_48a018;
        }
    }
    ctx->pc = 0x489FFCu;
label_489ffc:
    // 0x489ffc: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x489ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_48a000:
    // 0x48a000: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x48a000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_48a004:
    // 0x48a004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48a008:
    // 0x48a008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a00c:
    // 0x48a00c: 0xc0c3f60  jal         func_30FD80
label_48a010:
    if (ctx->pc == 0x48A010u) {
        ctx->pc = 0x48A010u;
            // 0x48a010: 0x24c609e0  addiu       $a2, $a2, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2528));
        ctx->pc = 0x48A014u;
        goto label_48a014;
    }
    ctx->pc = 0x48A00Cu;
    SET_GPR_U32(ctx, 31, 0x48A014u);
    ctx->pc = 0x48A010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A00Cu;
            // 0x48a010: 0x24c609e0  addiu       $a2, $a2, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A014u; }
        if (ctx->pc != 0x48A014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A014u; }
        if (ctx->pc != 0x48A014u) { return; }
    }
    ctx->pc = 0x48A014u;
label_48a014:
    // 0x48a014: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x48a014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_48a018:
    // 0x48a018: 0xc040180  jal         func_100600
label_48a01c:
    if (ctx->pc == 0x48A01Cu) {
        ctx->pc = 0x48A01Cu;
            // 0x48a01c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x48A020u;
        goto label_48a020;
    }
    ctx->pc = 0x48A018u;
    SET_GPR_U32(ctx, 31, 0x48A020u);
    ctx->pc = 0x48A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A018u;
            // 0x48a01c: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A020u; }
        if (ctx->pc != 0x48A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A020u; }
        if (ctx->pc != 0x48A020u) { return; }
    }
    ctx->pc = 0x48A020u;
label_48a020:
    // 0x48a020: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_48a024:
    if (ctx->pc == 0x48A024u) {
        ctx->pc = 0x48A024u;
            // 0x48a024: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x48A028u;
        goto label_48a028;
    }
    ctx->pc = 0x48A020u;
    {
        const bool branch_taken_0x48a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a020) {
            ctx->pc = 0x48A024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A020u;
            // 0x48a024: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A044u;
            goto label_48a044;
        }
    }
    ctx->pc = 0x48A028u;
label_48a028:
    // 0x48a028: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x48a028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_48a02c:
    // 0x48a02c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x48a02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_48a030:
    // 0x48a030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48a034:
    // 0x48a034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a038:
    // 0x48a038: 0xc0c3f60  jal         func_30FD80
label_48a03c:
    if (ctx->pc == 0x48A03Cu) {
        ctx->pc = 0x48A03Cu;
            // 0x48a03c: 0x24c60a20  addiu       $a2, $a2, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2592));
        ctx->pc = 0x48A040u;
        goto label_48a040;
    }
    ctx->pc = 0x48A038u;
    SET_GPR_U32(ctx, 31, 0x48A040u);
    ctx->pc = 0x48A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A038u;
            // 0x48a03c: 0x24c60a20  addiu       $a2, $a2, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A040u; }
        if (ctx->pc != 0x48A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A040u; }
        if (ctx->pc != 0x48A040u) { return; }
    }
    ctx->pc = 0x48A040u;
label_48a040:
    // 0x48a040: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x48a040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_48a044:
    // 0x48a044: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x48a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_48a048:
    // 0x48a048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48a048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48a04c:
    // 0x48a04c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48a04cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_48a050:
    // 0x48a050: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x48a050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_48a054:
    // 0x48a054: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48a054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_48a058:
    // 0x48a058: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x48a058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_48a05c:
    // 0x48a05c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48a05cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_48a060:
    // 0x48a060: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x48a060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_48a064:
    // 0x48a064: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48a064u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_48a068:
    // 0x48a068: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x48a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_48a06c:
    // 0x48a06c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48a06cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_48a070:
    // 0x48a070: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x48a070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
label_48a074:
    // 0x48a074: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48a074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_48a078:
    // 0x48a078: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x48a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_48a07c:
    // 0x48a07c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x48a07cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_48a080:
    // 0x48a080: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x48a080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
label_48a084:
    // 0x48a084: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x48a084u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_48a088:
    // 0x48a088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48a08c:
    // 0x48a08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48a090:
    // 0x48a090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48a094:
    // 0x48a094: 0x3e00008  jr          $ra
label_48a098:
    if (ctx->pc == 0x48A098u) {
        ctx->pc = 0x48A098u;
            // 0x48a098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48A09Cu;
        goto label_48a09c;
    }
    ctx->pc = 0x48A094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A094u;
            // 0x48a098: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A09Cu;
label_48a09c:
    // 0x48a09c: 0x0  nop
    ctx->pc = 0x48a09cu;
    // NOP
label_48a0a0:
    // 0x48a0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48a0a4:
    // 0x48a0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48a0a8:
    // 0x48a0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48a0ac:
    // 0x48a0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48a0b0:
    // 0x48a0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48a0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48a0b4:
    // 0x48a0b4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_48a0b8:
    if (ctx->pc == 0x48A0B8u) {
        ctx->pc = 0x48A0B8u;
            // 0x48a0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A0BCu;
        goto label_48a0bc;
    }
    ctx->pc = 0x48A0B4u;
    {
        const bool branch_taken_0x48a0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A0B4u;
            // 0x48a0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0b4) {
            ctx->pc = 0x48A114u;
            goto label_48a114;
        }
    }
    ctx->pc = 0x48A0BCu;
label_48a0bc:
    // 0x48a0bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48a0c0:
    // 0x48a0c0: 0x2442f860  addiu       $v0, $v0, -0x7A0
    ctx->pc = 0x48a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
label_48a0c4:
    // 0x48a0c4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x48a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_48a0c8:
    // 0x48a0c8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x48a0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_48a0cc:
    // 0x48a0cc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x48a0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_48a0d0:
    // 0x48a0d0: 0x320f809  jalr        $t9
label_48a0d4:
    if (ctx->pc == 0x48A0D4u) {
        ctx->pc = 0x48A0D8u;
        goto label_48a0d8;
    }
    ctx->pc = 0x48A0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48A0D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48A0D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48A0D8u; }
            if (ctx->pc != 0x48A0D8u) { return; }
        }
        }
    }
    ctx->pc = 0x48A0D8u;
label_48a0d8:
    // 0x48a0d8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_48a0dc:
    if (ctx->pc == 0x48A0DCu) {
        ctx->pc = 0x48A0DCu;
            // 0x48a0dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x48A0E0u;
        goto label_48a0e0;
    }
    ctx->pc = 0x48A0D8u;
    {
        const bool branch_taken_0x48a0d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a0d8) {
            ctx->pc = 0x48A0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A0D8u;
            // 0x48a0dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A100u;
            goto label_48a100;
        }
    }
    ctx->pc = 0x48A0E0u;
label_48a0e0:
    // 0x48a0e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48a0e4:
    // 0x48a0e4: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x48a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
label_48a0e8:
    // 0x48a0e8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_48a0ec:
    if (ctx->pc == 0x48A0ECu) {
        ctx->pc = 0x48A0ECu;
            // 0x48a0ec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x48A0F0u;
        goto label_48a0f0;
    }
    ctx->pc = 0x48A0E8u;
    {
        const bool branch_taken_0x48a0e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A0E8u;
            // 0x48a0ec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a0e8) {
            ctx->pc = 0x48A0FCu;
            goto label_48a0fc;
        }
    }
    ctx->pc = 0x48A0F0u;
label_48a0f0:
    // 0x48a0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x48a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_48a0f4:
    // 0x48a0f4: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x48a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_48a0f8:
    // 0x48a0f8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x48a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_48a0fc:
    // 0x48a0fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48a100:
    // 0x48a100: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48a100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48a104:
    // 0x48a104: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48a108:
    if (ctx->pc == 0x48A108u) {
        ctx->pc = 0x48A108u;
            // 0x48a108: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A10Cu;
        goto label_48a10c;
    }
    ctx->pc = 0x48A104u;
    {
        const bool branch_taken_0x48a104 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48a104) {
            ctx->pc = 0x48A108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A104u;
            // 0x48a108: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A118u;
            goto label_48a118;
        }
    }
    ctx->pc = 0x48A10Cu;
label_48a10c:
    // 0x48a10c: 0xc0400a8  jal         func_1002A0
label_48a110:
    if (ctx->pc == 0x48A110u) {
        ctx->pc = 0x48A110u;
            // 0x48a110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A114u;
        goto label_48a114;
    }
    ctx->pc = 0x48A10Cu;
    SET_GPR_U32(ctx, 31, 0x48A114u);
    ctx->pc = 0x48A110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A10Cu;
            // 0x48a110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A114u; }
        if (ctx->pc != 0x48A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A114u; }
        if (ctx->pc != 0x48A114u) { return; }
    }
    ctx->pc = 0x48A114u;
label_48a114:
    // 0x48a114: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48a114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48a118:
    // 0x48a118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48a11c:
    // 0x48a11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48a120:
    // 0x48a120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48a124:
    // 0x48a124: 0x3e00008  jr          $ra
label_48a128:
    if (ctx->pc == 0x48A128u) {
        ctx->pc = 0x48A128u;
            // 0x48a128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48A12Cu;
        goto label_48a12c;
    }
    ctx->pc = 0x48A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A124u;
            // 0x48a128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A12Cu;
label_48a12c:
    // 0x48a12c: 0x0  nop
    ctx->pc = 0x48a12cu;
    // NOP
label_48a130:
    // 0x48a130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_48a134:
    // 0x48a134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48a138:
    // 0x48a138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48a13c:
    // 0x48a13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48a140:
    // 0x48a140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48a140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48a144:
    // 0x48a144: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_48a148:
    if (ctx->pc == 0x48A148u) {
        ctx->pc = 0x48A148u;
            // 0x48a148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A14Cu;
        goto label_48a14c;
    }
    ctx->pc = 0x48A144u;
    {
        const bool branch_taken_0x48a144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A144u;
            // 0x48a148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a144) {
            ctx->pc = 0x48A1D0u;
            goto label_48a1d0;
        }
    }
    ctx->pc = 0x48A14Cu;
label_48a14c:
    // 0x48a14c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_48a150:
    // 0x48a150: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x48a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_48a154:
    // 0x48a154: 0x2463f8b0  addiu       $v1, $v1, -0x750
    ctx->pc = 0x48a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965424));
label_48a158:
    // 0x48a158: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_48a15c:
    if (ctx->pc == 0x48A15Cu) {
        ctx->pc = 0x48A15Cu;
            // 0x48a15c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48A160u;
        goto label_48a160;
    }
    ctx->pc = 0x48A158u;
    {
        const bool branch_taken_0x48a158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A158u;
            // 0x48a15c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a158) {
            ctx->pc = 0x48A1B8u;
            goto label_48a1b8;
        }
    }
    ctx->pc = 0x48A160u;
label_48a160:
    // 0x48a160: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x48a160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48a164:
    // 0x48a164: 0x2442f8d8  addiu       $v0, $v0, -0x728
    ctx->pc = 0x48a164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
label_48a168:
    // 0x48a168: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x48a168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_48a16c:
    // 0x48a16c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x48a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_48a170:
    // 0x48a170: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_48a174:
    if (ctx->pc == 0x48A174u) {
        ctx->pc = 0x48A174u;
            // 0x48a174: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x48A178u;
        goto label_48a178;
    }
    ctx->pc = 0x48A170u;
    {
        const bool branch_taken_0x48a170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a170) {
            ctx->pc = 0x48A174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A170u;
            // 0x48a174: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A1B0u;
            goto label_48a1b0;
        }
    }
    ctx->pc = 0x48A178u;
label_48a178:
    // 0x48a178: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48a17c:
    // 0x48a17c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_48a180:
    // 0x48a180: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48a184:
    // 0x48a184: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x48a184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_48a188:
    // 0x48a188: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_48a18c:
    if (ctx->pc == 0x48A18Cu) {
        ctx->pc = 0x48A190u;
        goto label_48a190;
    }
    ctx->pc = 0x48A188u;
    {
        const bool branch_taken_0x48a188 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a188) {
            ctx->pc = 0x48A1A0u;
            goto label_48a1a0;
        }
    }
    ctx->pc = 0x48A190u;
label_48a190:
    // 0x48a190: 0xc0fe4e8  jal         func_3F93A0
label_48a194:
    if (ctx->pc == 0x48A194u) {
        ctx->pc = 0x48A198u;
        goto label_48a198;
    }
    ctx->pc = 0x48A190u;
    SET_GPR_U32(ctx, 31, 0x48A198u);
    ctx->pc = 0x3F93A0u;
    if (runtime->hasFunction(0x3F93A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A198u; }
        if (ctx->pc != 0x48A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F93A0_0x3f93a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A198u; }
        if (ctx->pc != 0x48A198u) { return; }
    }
    ctx->pc = 0x48A198u;
label_48a198:
    // 0x48a198: 0x10000004  b           . + 4 + (0x4 << 2)
label_48a19c:
    if (ctx->pc == 0x48A19Cu) {
        ctx->pc = 0x48A19Cu;
            // 0x48a19c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x48A1A0u;
        goto label_48a1a0;
    }
    ctx->pc = 0x48A198u;
    {
        const bool branch_taken_0x48a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A198u;
            // 0x48a19c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a198) {
            ctx->pc = 0x48A1ACu;
            goto label_48a1ac;
        }
    }
    ctx->pc = 0x48A1A0u;
label_48a1a0:
    // 0x48a1a0: 0xc0fe48c  jal         func_3F9230
label_48a1a4:
    if (ctx->pc == 0x48A1A4u) {
        ctx->pc = 0x48A1A8u;
        goto label_48a1a8;
    }
    ctx->pc = 0x48A1A0u;
    SET_GPR_U32(ctx, 31, 0x48A1A8u);
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1A8u; }
        if (ctx->pc != 0x48A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1A8u; }
        if (ctx->pc != 0x48A1A8u) { return; }
    }
    ctx->pc = 0x48A1A8u;
label_48a1a8:
    // 0x48a1a8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x48a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_48a1ac:
    // 0x48a1ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x48a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_48a1b0:
    // 0x48a1b0: 0xc04e7d4  jal         func_139F50
label_48a1b4:
    if (ctx->pc == 0x48A1B4u) {
        ctx->pc = 0x48A1B4u;
            // 0x48a1b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x48A1B8u;
        goto label_48a1b8;
    }
    ctx->pc = 0x48A1B0u;
    SET_GPR_U32(ctx, 31, 0x48A1B8u);
    ctx->pc = 0x48A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A1B0u;
            // 0x48a1b4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139F50u;
    if (runtime->hasFunction(0x139F50u)) {
        auto targetFn = runtime->lookupFunction(0x139F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1B8u; }
        if (ctx->pc != 0x48A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139F50_0x139f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1B8u; }
        if (ctx->pc != 0x48A1B8u) { return; }
    }
    ctx->pc = 0x48A1B8u;
label_48a1b8:
    // 0x48a1b8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x48a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48a1bc:
    // 0x48a1bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48a1bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48a1c0:
    // 0x48a1c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48a1c4:
    if (ctx->pc == 0x48A1C4u) {
        ctx->pc = 0x48A1C4u;
            // 0x48a1c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A1C8u;
        goto label_48a1c8;
    }
    ctx->pc = 0x48A1C0u;
    {
        const bool branch_taken_0x48a1c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48a1c0) {
            ctx->pc = 0x48A1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A1C0u;
            // 0x48a1c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A1D4u;
            goto label_48a1d4;
        }
    }
    ctx->pc = 0x48A1C8u;
label_48a1c8:
    // 0x48a1c8: 0xc0400a8  jal         func_1002A0
label_48a1cc:
    if (ctx->pc == 0x48A1CCu) {
        ctx->pc = 0x48A1CCu;
            // 0x48a1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48A1D0u;
        goto label_48a1d0;
    }
    ctx->pc = 0x48A1C8u;
    SET_GPR_U32(ctx, 31, 0x48A1D0u);
    ctx->pc = 0x48A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A1C8u;
            // 0x48a1cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1D0u; }
        if (ctx->pc != 0x48A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A1D0u; }
        if (ctx->pc != 0x48A1D0u) { return; }
    }
    ctx->pc = 0x48A1D0u;
label_48a1d0:
    // 0x48a1d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48a1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48a1d4:
    // 0x48a1d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48a1d8:
    // 0x48a1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48a1dc:
    // 0x48a1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48a1e0:
    // 0x48a1e0: 0x3e00008  jr          $ra
label_48a1e4:
    if (ctx->pc == 0x48A1E4u) {
        ctx->pc = 0x48A1E4u;
            // 0x48a1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x48A1E8u;
        goto label_48a1e8;
    }
    ctx->pc = 0x48A1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A1E0u;
            // 0x48a1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A1E8u;
label_48a1e8:
    // 0x48a1e8: 0x0  nop
    ctx->pc = 0x48a1e8u;
    // NOP
label_48a1ec:
    // 0x48a1ec: 0x0  nop
    ctx->pc = 0x48a1ecu;
    // NOP
}
