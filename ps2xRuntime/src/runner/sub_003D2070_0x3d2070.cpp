#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2070
// Address: 0x3d2070 - 0x3d22a0
void sub_003D2070_0x3d2070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2070_0x3d2070");
#endif

    switch (ctx->pc) {
        case 0x3d2098u: goto label_3d2098;
        case 0x3d20b8u: goto label_3d20b8;
        case 0x3d2108u: goto label_3d2108;
        case 0x3d2124u: goto label_3d2124;
        case 0x3d2154u: goto label_3d2154;
        case 0x3d2170u: goto label_3d2170;
        case 0x3d2194u: goto label_3d2194;
        case 0x3d21b0u: goto label_3d21b0;
        case 0x3d21d0u: goto label_3d21d0;
        case 0x3d2230u: goto label_3d2230;
        case 0x3d223cu: goto label_3d223c;
        case 0x3d2248u: goto label_3d2248;
        case 0x3d2254u: goto label_3d2254;
        case 0x3d2260u: goto label_3d2260;
        case 0x3d226cu: goto label_3d226c;
        case 0x3d2284u: goto label_3d2284;
        default: break;
    }

    ctx->pc = 0x3d2070u;

    // 0x3d2070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d2070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d2074: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d2078: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d207c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3d207cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3d2080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d2084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d2088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d208c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d208cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2090: 0xc0f48e0  jal         func_3D2380
    ctx->pc = 0x3D2090u;
    SET_GPR_U32(ctx, 31, 0x3D2098u);
    ctx->pc = 0x3D2094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2090u;
            // 0x3d2094: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2380u;
    if (runtime->hasFunction(0x3D2380u)) {
        auto targetFn = runtime->lookupFunction(0x3D2380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2098u; }
        if (ctx->pc != 0x3D2098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2380_0x3d2380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2098u; }
        if (ctx->pc != 0x3D2098u) { return; }
    }
    ctx->pc = 0x3D2098u;
label_3d2098:
    // 0x3d2098: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d2098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d209c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d20a0: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x3d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x3d20a4: 0x24429308  addiu       $v0, $v0, -0x6CF8
    ctx->pc = 0x3d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939400));
    // 0x3d20a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3d20ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d20acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d20b0: 0xc0f48dc  jal         func_3D2370
    ctx->pc = 0x3D20B0u;
    SET_GPR_U32(ctx, 31, 0x3D20B8u);
    ctx->pc = 0x3D20B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D20B0u;
            // 0x3d20b4: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2370u;
    if (runtime->hasFunction(0x3D2370u)) {
        auto targetFn = runtime->lookupFunction(0x3D2370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D20B8u; }
        if (ctx->pc != 0x3D20B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2370_0x3d2370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D20B8u; }
        if (ctx->pc != 0x3D20B8u) { return; }
    }
    ctx->pc = 0x3D20B8u;
label_3d20b8:
    // 0x3d20b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3d20b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3d20bc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3d20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d20c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d20c4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3d20c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3d20c8: 0x24429220  addiu       $v0, $v0, -0x6DE0
    ctx->pc = 0x3d20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939168));
    // 0x3d20cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3d20d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d20d4: 0x24429258  addiu       $v0, $v0, -0x6DA8
    ctx->pc = 0x3d20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939224));
    // 0x3d20d8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3d20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x3d20dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3d20e0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3d20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3d20e4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3d20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3d20e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d20e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3d20ec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3d20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3d20f0: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x3d20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x3d20f4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3d20f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x3d20f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3d20fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3d2100: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3D2100u;
    SET_GPR_U32(ctx, 31, 0x3D2108u);
    ctx->pc = 0x3D2104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2100u;
            // 0x3d2104: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2108u; }
        if (ctx->pc != 0x3D2108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2108u; }
        if (ctx->pc != 0x3D2108u) { return; }
    }
    ctx->pc = 0x3D2108u;
label_3d2108:
    // 0x3d2108: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3d2108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d210c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2110: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2110u;
    {
        const bool branch_taken_0x3d2110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2110u;
            // 0x3d2114: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2110) {
            ctx->pc = 0x3D2128u;
            goto label_3d2128;
        }
    }
    ctx->pc = 0x3D2118u;
    // 0x3d2118: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d2118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d211c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3D211Cu;
    SET_GPR_U32(ctx, 31, 0x3D2124u);
    ctx->pc = 0x3D2120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D211Cu;
            // 0x3d2120: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2124u; }
        if (ctx->pc != 0x3D2124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2124u; }
        if (ctx->pc != 0x3D2124u) { return; }
    }
    ctx->pc = 0x3D2124u;
label_3d2124:
    // 0x3d2124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d2124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2128:
    // 0x3d2128: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x3d2128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
    // 0x3d212c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3d2130: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d2130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3d2134: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d2134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3d2138: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3d2138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x3d213c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3d213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d2140: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3d2140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x3d2144: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3d2144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3d2148: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x3d214c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3D214Cu;
    SET_GPR_U32(ctx, 31, 0x3D2154u);
    ctx->pc = 0x3D2150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D214Cu;
            // 0x3d2150: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2154u; }
        if (ctx->pc != 0x3D2154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2154u; }
        if (ctx->pc != 0x3D2154u) { return; }
    }
    ctx->pc = 0x3D2154u;
label_3d2154:
    // 0x3d2154: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3d2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d2158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d215c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D215Cu;
    {
        const bool branch_taken_0x3d215c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D215Cu;
            // 0x3d2160: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d215c) {
            ctx->pc = 0x3D2174u;
            goto label_3d2174;
        }
    }
    ctx->pc = 0x3D2164u;
    // 0x3d2164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d2164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d2168: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3D2168u;
    SET_GPR_U32(ctx, 31, 0x3D2170u);
    ctx->pc = 0x3D216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2168u;
            // 0x3d216c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2170u; }
        if (ctx->pc != 0x3D2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2170u; }
        if (ctx->pc != 0x3D2170u) { return; }
    }
    ctx->pc = 0x3D2170u;
label_3d2170:
    // 0x3d2170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d2170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2174:
    // 0x3d2174: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x3d2174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x3d2178: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3d2178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d217c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x3d217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3d2180: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x3d2180u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3d2184: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3d2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d2188: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d2188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d218c: 0xc040140  jal         func_100500
    ctx->pc = 0x3D218Cu;
    SET_GPR_U32(ctx, 31, 0x3D2194u);
    ctx->pc = 0x3D2190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D218Cu;
            // 0x3d2190: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2194u; }
        if (ctx->pc != 0x3D2194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2194u; }
        if (ctx->pc != 0x3D2194u) { return; }
    }
    ctx->pc = 0x3D2194u;
label_3d2194:
    // 0x3d2194: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2194u;
    {
        const bool branch_taken_0x3d2194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2194) {
            ctx->pc = 0x3D2198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2194u;
            // 0x3d2198: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D21B4u;
            goto label_3d21b4;
        }
    }
    ctx->pc = 0x3D219Cu;
    // 0x3d219c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x3d219cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d21a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d21a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d21a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d21a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d21a8: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x3D21A8u;
    SET_GPR_U32(ctx, 31, 0x3D21B0u);
    ctx->pc = 0x3D21ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D21A8u;
            // 0x3d21ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D21B0u; }
        if (ctx->pc != 0x3D21B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D21B0u; }
        if (ctx->pc != 0x3D21B0u) { return; }
    }
    ctx->pc = 0x3D21B0u;
label_3d21b0:
    // 0x3d21b0: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x3d21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_3d21b4:
    // 0x3d21b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d21b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d21b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d21b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d21bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d21bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d21c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d21c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d21c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d21c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d21c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D21C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D21CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D21C8u;
            // 0x3d21cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D21D0u;
label_3d21d0:
    // 0x3d21d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d21d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d21d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d21dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d21dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d21e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d21e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d21e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3D21E4u;
    {
        const bool branch_taken_0x3d21e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D21E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D21E4u;
            // 0x3d21e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d21e4) {
            ctx->pc = 0x3D2284u;
            goto label_3d2284;
        }
    }
    ctx->pc = 0x3D21ECu;
    // 0x3d21ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d21f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d21f4: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x3d21f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x3d21f8: 0x24429308  addiu       $v0, $v0, -0x6CF8
    ctx->pc = 0x3d21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939400));
    // 0x3d21fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d2200: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D2200u;
    {
        const bool branch_taken_0x3d2200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2200u;
            // 0x3d2204: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2200) {
            ctx->pc = 0x3D226Cu;
            goto label_3d226c;
        }
    }
    ctx->pc = 0x3D2208u;
    // 0x3d2208: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d2208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d220c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d2210: 0x24639280  addiu       $v1, $v1, -0x6D80
    ctx->pc = 0x3d2210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
    // 0x3d2214: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3d2214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3d2218: 0x244292b8  addiu       $v0, $v0, -0x6D48
    ctx->pc = 0x3d2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939320));
    // 0x3d221c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d221cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d2220: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d2220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3d2224: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3d2224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d2228: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3D2228u;
    SET_GPR_U32(ctx, 31, 0x3D2230u);
    ctx->pc = 0x3D222Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2228u;
            // 0x3d222c: 0x24a56f00  addiu       $a1, $a1, 0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2230u; }
        if (ctx->pc != 0x3D2230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2230u; }
        if (ctx->pc != 0x3D2230u) { return; }
    }
    ctx->pc = 0x3D2230u;
label_3d2230:
    // 0x3d2230: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3d2234: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3D2234u;
    SET_GPR_U32(ctx, 31, 0x3D223Cu);
    ctx->pc = 0x3D2238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2234u;
            // 0x3d2238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D223Cu; }
        if (ctx->pc != 0x3D223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D223Cu; }
        if (ctx->pc != 0x3D223Cu) { return; }
    }
    ctx->pc = 0x3D223Cu;
label_3d223c:
    // 0x3d223c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3d223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3d2240: 0xc0f48c0  jal         func_3D2300
    ctx->pc = 0x3D2240u;
    SET_GPR_U32(ctx, 31, 0x3D2248u);
    ctx->pc = 0x3D2244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2240u;
            // 0x3d2244: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2300u;
    if (runtime->hasFunction(0x3D2300u)) {
        auto targetFn = runtime->lookupFunction(0x3D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2248u; }
        if (ctx->pc != 0x3D2248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2300_0x3d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2248u; }
        if (ctx->pc != 0x3D2248u) { return; }
    }
    ctx->pc = 0x3D2248u;
label_3d2248:
    // 0x3d2248: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3d2248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3d224c: 0xc0f48c0  jal         func_3D2300
    ctx->pc = 0x3D224Cu;
    SET_GPR_U32(ctx, 31, 0x3D2254u);
    ctx->pc = 0x3D2250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D224Cu;
            // 0x3d2250: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2300u;
    if (runtime->hasFunction(0x3D2300u)) {
        auto targetFn = runtime->lookupFunction(0x3D2300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2254u; }
        if (ctx->pc != 0x3D2254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2300_0x3d2300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2254u; }
        if (ctx->pc != 0x3D2254u) { return; }
    }
    ctx->pc = 0x3D2254u;
label_3d2254:
    // 0x3d2254: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3d2254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3d2258: 0xc0f48a8  jal         func_3D22A0
    ctx->pc = 0x3D2258u;
    SET_GPR_U32(ctx, 31, 0x3D2260u);
    ctx->pc = 0x3D225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2258u;
            // 0x3d225c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D22A0u;
    if (runtime->hasFunction(0x3D22A0u)) {
        auto targetFn = runtime->lookupFunction(0x3D22A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2260u; }
        if (ctx->pc != 0x3D2260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D22A0_0x3d22a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2260u; }
        if (ctx->pc != 0x3D2260u) { return; }
    }
    ctx->pc = 0x3D2260u;
label_3d2260:
    // 0x3d2260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2264: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3D2264u;
    SET_GPR_U32(ctx, 31, 0x3D226Cu);
    ctx->pc = 0x3D2268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2264u;
            // 0x3d2268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D226Cu; }
        if (ctx->pc != 0x3D226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D226Cu; }
        if (ctx->pc != 0x3D226Cu) { return; }
    }
    ctx->pc = 0x3D226Cu;
label_3d226c:
    // 0x3d226c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d226cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3d2270: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d2270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d2274: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2274u;
    {
        const bool branch_taken_0x3d2274 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d2274) {
            ctx->pc = 0x3D2278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2274u;
            // 0x3d2278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2288u;
            goto label_3d2288;
        }
    }
    ctx->pc = 0x3D227Cu;
    // 0x3d227c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D227Cu;
    SET_GPR_U32(ctx, 31, 0x3D2284u);
    ctx->pc = 0x3D2280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D227Cu;
            // 0x3d2280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2284u; }
        if (ctx->pc != 0x3D2284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D2284u; }
        if (ctx->pc != 0x3D2284u) { return; }
    }
    ctx->pc = 0x3D2284u;
label_3d2284:
    // 0x3d2284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d2284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2288:
    // 0x3d2288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d2288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d228c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d228cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2294: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2294u;
            // 0x3d2298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D229Cu;
    // 0x3d229c: 0x0  nop
    ctx->pc = 0x3d229cu;
    // NOP
}
