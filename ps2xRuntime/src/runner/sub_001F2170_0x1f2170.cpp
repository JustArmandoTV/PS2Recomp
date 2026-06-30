#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2170
// Address: 0x1f2170 - 0x1f2560
void sub_001F2170_0x1f2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2170_0x1f2170");
#endif

    switch (ctx->pc) {
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f221cu: goto label_1f221c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f2298u: goto label_1f2298;
        case 0x1f2300u: goto label_1f2300;
        case 0x1f2328u: goto label_1f2328;
        case 0x1f23f0u: goto label_1f23f0;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f24e0u: goto label_1f24e0;
        case 0x1f253cu: goto label_1f253c;
        default: break;
    }

    ctx->pc = 0x1f2170u;

    // 0x1f2170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f2174: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f2178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f217c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f2180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2184: 0x244222c0  addiu       $v0, $v0, 0x22C0
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8896));
    // 0x1f2188: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f2188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1f218c: 0x246347a0  addiu       $v1, $v1, 0x47A0
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18336));
    // 0x1f2190: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f2194: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f2194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1f2198: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x1f219c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f21a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1f21a4: 0x246345c0  addiu       $v1, $v1, 0x45C0
    ctx->pc = 0x1f21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
    // 0x1f21a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f21ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21b0: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x1f21b4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f21b8: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x1f21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f21bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f21bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f21c0: 0xa3a20051  sb          $v0, 0x51($sp)
    ctx->pc = 0x1f21c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f21c4: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F21C4u;
    SET_GPR_U32(ctx, 31, 0x1F21CCu);
    ctx->pc = 0x1F21C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F21C4u;
            // 0x1f21c8: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21CCu; }
        if (ctx->pc != 0x1F21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F21CCu; }
        if (ctx->pc != 0x1F21CCu) { return; }
    }
    ctx->pc = 0x1F21CCu;
label_1f21cc:
    // 0x1f21cc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f21d0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f21d4: 0x24422230  addiu       $v0, $v0, 0x2230
    ctx->pc = 0x1f21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8752));
    // 0x1f21d8: 0x24633f10  addiu       $v1, $v1, 0x3F10
    ctx->pc = 0x1f21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16144));
    // 0x1f21dc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1f21e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21e4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f21e8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1f21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1f21ec: 0x244231f0  addiu       $v0, $v0, 0x31F0
    ctx->pc = 0x1f21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12784));
    // 0x1f21f0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f21f4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1f21f8: 0x24633880  addiu       $v1, $v1, 0x3880
    ctx->pc = 0x1f21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14464));
    // 0x1f21fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2200: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1f2200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1f2204: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f2204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2208: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1f2208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f220c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2210: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2214: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F2214u;
    SET_GPR_U32(ctx, 31, 0x1F221Cu);
    ctx->pc = 0x1F2218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2214u;
            // 0x1f2218: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F221Cu; }
        if (ctx->pc != 0x1F221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F221Cu; }
        if (ctx->pc != 0x1F221Cu) { return; }
    }
    ctx->pc = 0x1F221Cu;
label_1f221c:
    // 0x1f221c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f221cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2224: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2224u;
            // 0x1f2228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F222Cu;
    // 0x1f222c: 0x0  nop
    ctx->pc = 0x1f222cu;
    // NOP
    // 0x1f2230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f2234: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f2238: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f223c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f2240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f2244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2248: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f224c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2250: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f2250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2258: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f2258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f225c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f2260: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f2260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2264: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1f2264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f2268: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1F2268u;
    SET_GPR_U32(ctx, 31, 0x1F2270u);
    ctx->pc = 0x1F226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2268u;
            // 0x1f226c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2270u; }
        if (ctx->pc != 0x1F2270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2270u; }
        if (ctx->pc != 0x1F2270u) { return; }
    }
    ctx->pc = 0x1F2270u;
label_1f2270:
    // 0x1f2270: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1f2270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f2274: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f2274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2278: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2278u;
    {
        const bool branch_taken_0x1f2278 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2278u;
            // 0x1f227c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2278) {
            ctx->pc = 0x1F2298u;
            goto label_1f2298;
        }
    }
    ctx->pc = 0x1F2280u;
    // 0x1f2280: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f2284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2288: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f2288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f228c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f228cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2290: 0xc07c958  jal         func_1F2560
    ctx->pc = 0x1F2290u;
    SET_GPR_U32(ctx, 31, 0x1F2298u);
    ctx->pc = 0x1F2294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2290u;
            // 0x1f2294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2560u;
    if (runtime->hasFunction(0x1F2560u)) {
        auto targetFn = runtime->lookupFunction(0x1F2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2298u; }
        if (ctx->pc != 0x1F2298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2560_0x1f2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2298u; }
        if (ctx->pc != 0x1F2298u) { return; }
    }
    ctx->pc = 0x1F2298u;
label_1f2298:
    // 0x1f2298: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1f2298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f229c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f22a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f22a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f22a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f22a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f22a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f22a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f22ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f22acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f22b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f22b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f22b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F22B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F22B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F22B4u;
            // 0x1f22b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F22BCu;
    // 0x1f22bc: 0x0  nop
    ctx->pc = 0x1f22bcu;
    // NOP
    // 0x1f22c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f22c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f22c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f22c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f22c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f22cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f22ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f22d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f22d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f22d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f22d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f22dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f22dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f22e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f22e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f22ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f22ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f22f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f22f4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1f22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f22f8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1F22F8u;
    SET_GPR_U32(ctx, 31, 0x1F2300u);
    ctx->pc = 0x1F22FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F22F8u;
            // 0x1f22fc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2300u; }
        if (ctx->pc != 0x1F2300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2300u; }
        if (ctx->pc != 0x1F2300u) { return; }
    }
    ctx->pc = 0x1F2300u;
label_1f2300:
    // 0x1f2300: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1f2300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f2304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2308: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F2308u;
    {
        const bool branch_taken_0x1f2308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2308u;
            // 0x1f230c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2308) {
            ctx->pc = 0x1F2340u;
            goto label_1f2340;
        }
    }
    ctx->pc = 0x1F2310u;
    // 0x1f2310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2314: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f2314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2318: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f231c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f231cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2320: 0xc07c958  jal         func_1F2560
    ctx->pc = 0x1F2320u;
    SET_GPR_U32(ctx, 31, 0x1F2328u);
    ctx->pc = 0x1F2324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2320u;
            // 0x1f2324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2560u;
    if (runtime->hasFunction(0x1F2560u)) {
        auto targetFn = runtime->lookupFunction(0x1F2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2328u; }
        if (ctx->pc != 0x1F2328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2560_0x1f2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2328u; }
        if (ctx->pc != 0x1F2328u) { return; }
    }
    ctx->pc = 0x1F2328u;
label_1f2328:
    // 0x1f2328: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f2328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f232c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f2330: 0x2463dbd0  addiu       $v1, $v1, -0x2430
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958032));
    // 0x1f2334: 0x2442db90  addiu       $v0, $v0, -0x2470
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957968));
    // 0x1f2338: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f2338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f233c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f2340:
    // 0x1f2340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2344: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f2344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f2348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f234c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f234cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f235c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F235Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F235Cu;
            // 0x1f2360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2364u;
    // 0x1f2364: 0x0  nop
    ctx->pc = 0x1f2364u;
    // NOP
    // 0x1f2368: 0x0  nop
    ctx->pc = 0x1f2368u;
    // NOP
    // 0x1f236c: 0x0  nop
    ctx->pc = 0x1f236cu;
    // NOP
    // 0x1f2370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f237c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2384: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F2384u;
    {
        const bool branch_taken_0x1f2384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2384u;
            // 0x1f2388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2384) {
            ctx->pc = 0x1F244Cu;
            goto label_1f244c;
        }
    }
    ctx->pc = 0x1F238Cu;
    // 0x1f238c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f238cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f2390: 0x2442dbd0  addiu       $v0, $v0, -0x2430
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958032));
    // 0x1f2394: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F2394u;
    {
        const bool branch_taken_0x1f2394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2394u;
            // 0x1f2398: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2394) {
            ctx->pc = 0x1F2424u;
            goto label_1f2424;
        }
    }
    ctx->pc = 0x1F239Cu;
    // 0x1f239c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f23a0: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1f23a4: 0x2463db20  addiu       $v1, $v1, -0x24E0
    ctx->pc = 0x1f23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957856));
    // 0x1f23a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F23A8u;
    {
        const bool branch_taken_0x1f23a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23A8u;
            // 0x1f23ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f23a8) {
            ctx->pc = 0x1F23F0u;
            goto label_1f23f0;
        }
    }
    ctx->pc = 0x1F23B0u;
    // 0x1f23b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F23B0u;
    {
        const bool branch_taken_0x1f23b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23b0) {
            ctx->pc = 0x1F23F0u;
            goto label_1f23f0;
        }
    }
    ctx->pc = 0x1F23B8u;
    // 0x1f23b8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f23bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f23c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f23c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F23C4u;
    {
        const bool branch_taken_0x1f23c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f23c4) {
            ctx->pc = 0x1F23F0u;
            goto label_1f23f0;
        }
    }
    ctx->pc = 0x1F23CCu;
    // 0x1f23cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f23d0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f23d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f23d8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f23d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f23dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f23e0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f23e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1f23e4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f23e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1f23e8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F23E8u;
    SET_GPR_U32(ctx, 31, 0x1F23F0u);
    ctx->pc = 0x1F23ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23E8u;
            // 0x1f23ec: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23F0u; }
        if (ctx->pc != 0x1F23F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F23F0u; }
        if (ctx->pc != 0x1F23F0u) { return; }
    }
    ctx->pc = 0x1F23F0u;
label_1f23f0:
    // 0x1f23f0: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F23F0u;
    {
        const bool branch_taken_0x1f23f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f23f0) {
            ctx->pc = 0x1F23F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F23F0u;
            // 0x1f23f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2428u;
            goto label_1f2428;
        }
    }
    ctx->pc = 0x1F23F8u;
    // 0x1f23f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f23fc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f2400: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2400u;
    {
        const bool branch_taken_0x1f2400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2400u;
            // 0x1f2404: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2400) {
            ctx->pc = 0x1F2424u;
            goto label_1f2424;
        }
    }
    ctx->pc = 0x1F2408u;
    // 0x1f2408: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f240c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f2410: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2410u;
    {
        const bool branch_taken_0x1f2410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2410u;
            // 0x1f2414: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2410) {
            ctx->pc = 0x1F2424u;
            goto label_1f2424;
        }
    }
    ctx->pc = 0x1F2418u;
    // 0x1f2418: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f241c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f2420: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f2420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f2424:
    // 0x1f2424: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f2428:
    // 0x1f2428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f2428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f242c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F242Cu;
    {
        const bool branch_taken_0x1f242c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f242c) {
            ctx->pc = 0x1F2430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F242Cu;
            // 0x1f2430: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2450u;
            goto label_1f2450;
        }
    }
    ctx->pc = 0x1F2434u;
    // 0x1f2434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f2434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f2438: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f2438u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f243c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f2440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f2440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2444: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F2444u;
    SET_GPR_U32(ctx, 31, 0x1F244Cu);
    ctx->pc = 0x1F2448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2444u;
            // 0x1f2448: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F244Cu; }
        if (ctx->pc != 0x1F244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F244Cu; }
        if (ctx->pc != 0x1F244Cu) { return; }
    }
    ctx->pc = 0x1F244Cu;
label_1f244c:
    // 0x1f244c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f244cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2450:
    // 0x1f2450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f245c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F245Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F245Cu;
            // 0x1f2460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2464u;
    // 0x1f2464: 0x0  nop
    ctx->pc = 0x1f2464u;
    // NOP
    // 0x1f2468: 0x0  nop
    ctx->pc = 0x1f2468u;
    // NOP
    // 0x1f246c: 0x0  nop
    ctx->pc = 0x1f246cu;
    // NOP
    // 0x1f2470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f2478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f247c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2484: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F2484u;
    {
        const bool branch_taken_0x1f2484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2484u;
            // 0x1f2488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2484) {
            ctx->pc = 0x1F253Cu;
            goto label_1f253c;
        }
    }
    ctx->pc = 0x1F248Cu;
    // 0x1f248c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f2490: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1f2490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1f2494: 0x2463db20  addiu       $v1, $v1, -0x24E0
    ctx->pc = 0x1f2494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957856));
    // 0x1f2498: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F2498u;
    {
        const bool branch_taken_0x1f2498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2498u;
            // 0x1f249c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2498) {
            ctx->pc = 0x1F24E0u;
            goto label_1f24e0;
        }
    }
    ctx->pc = 0x1F24A0u;
    // 0x1f24a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F24A0u;
    {
        const bool branch_taken_0x1f24a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24a0) {
            ctx->pc = 0x1F24E0u;
            goto label_1f24e0;
        }
    }
    ctx->pc = 0x1F24A8u;
    // 0x1f24a8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f24ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f24b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f24b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F24B4u;
    {
        const bool branch_taken_0x1f24b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f24b4) {
            ctx->pc = 0x1F24E0u;
            goto label_1f24e0;
        }
    }
    ctx->pc = 0x1F24BCu;
    // 0x1f24bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f24c0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f24c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f24c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f24c8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f24cc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f24d0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f24d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1f24d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f24d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1f24d8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F24D8u;
    SET_GPR_U32(ctx, 31, 0x1F24E0u);
    ctx->pc = 0x1F24DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24D8u;
            // 0x1f24dc: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24E0u; }
        if (ctx->pc != 0x1F24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F24E0u; }
        if (ctx->pc != 0x1F24E0u) { return; }
    }
    ctx->pc = 0x1F24E0u;
label_1f24e0:
    // 0x1f24e0: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F24E0u;
    {
        const bool branch_taken_0x1f24e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24e0) {
            ctx->pc = 0x1F24E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24E0u;
            // 0x1f24e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2518u;
            goto label_1f2518;
        }
    }
    ctx->pc = 0x1F24E8u;
    // 0x1f24e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f24ec: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f24f0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F24F0u;
    {
        const bool branch_taken_0x1f24f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F24F0u;
            // 0x1f24f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24f0) {
            ctx->pc = 0x1F2514u;
            goto label_1f2514;
        }
    }
    ctx->pc = 0x1F24F8u;
    // 0x1f24f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f24fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f2500: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2500u;
    {
        const bool branch_taken_0x1f2500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2500u;
            // 0x1f2504: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2500) {
            ctx->pc = 0x1F2514u;
            goto label_1f2514;
        }
    }
    ctx->pc = 0x1F2508u;
    // 0x1f2508: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f250c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f2510: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f2510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f2514:
    // 0x1f2514: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f2514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f2518:
    // 0x1f2518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f2518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f251c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F251Cu;
    {
        const bool branch_taken_0x1f251c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f251c) {
            ctx->pc = 0x1F2520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F251Cu;
            // 0x1f2520: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2540u;
            goto label_1f2540;
        }
    }
    ctx->pc = 0x1F2524u;
    // 0x1f2524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f2524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f2528: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f2528u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f252c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f2530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f2530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2534: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F2534u;
    SET_GPR_U32(ctx, 31, 0x1F253Cu);
    ctx->pc = 0x1F2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2534u;
            // 0x1f2538: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F253Cu; }
        if (ctx->pc != 0x1F253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F253Cu; }
        if (ctx->pc != 0x1F253Cu) { return; }
    }
    ctx->pc = 0x1F253Cu;
label_1f253c:
    // 0x1f253c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f253cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2540:
    // 0x1f2540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f254c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F254Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F254Cu;
            // 0x1f2550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2554u;
    // 0x1f2554: 0x0  nop
    ctx->pc = 0x1f2554u;
    // NOP
    // 0x1f2558: 0x0  nop
    ctx->pc = 0x1f2558u;
    // NOP
    // 0x1f255c: 0x0  nop
    ctx->pc = 0x1f255cu;
    // NOP
}
