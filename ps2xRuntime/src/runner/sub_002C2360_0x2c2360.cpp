#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2360
// Address: 0x2c2360 - 0x2c2500
void sub_002C2360_0x2c2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2360_0x2c2360");
#endif

    switch (ctx->pc) {
        case 0x2c237cu: goto label_2c237c;
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23f4u: goto label_2c23f4;
        case 0x2c2410u: goto label_2c2410;
        case 0x2c2430u: goto label_2c2430;
        case 0x2c2490u: goto label_2c2490;
        case 0x2c249cu: goto label_2c249c;
        case 0x2c24a8u: goto label_2c24a8;
        case 0x2c24b4u: goto label_2c24b4;
        case 0x2c24c0u: goto label_2c24c0;
        case 0x2c24ccu: goto label_2c24cc;
        case 0x2c24e4u: goto label_2c24e4;
        default: break;
    }

    ctx->pc = 0x2c2360u;

    // 0x2c2360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2364: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c2364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c2368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c236c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c236cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c2370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2374: 0xc0b0a20  jal         func_2C2880
    ctx->pc = 0x2C2374u;
    SET_GPR_U32(ctx, 31, 0x2C237Cu);
    ctx->pc = 0x2C2378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2374u;
            // 0x2c2378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2880u;
    if (runtime->hasFunction(0x2C2880u)) {
        auto targetFn = runtime->lookupFunction(0x2C2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C237Cu; }
        if (ctx->pc != 0x2C237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2880_0x2c2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C237Cu; }
        if (ctx->pc != 0x2C237Cu) { return; }
    }
    ctx->pc = 0x2C237Cu;
label_2c237c:
    // 0x2c237c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2384: 0x24631520  addiu       $v1, $v1, 0x1520
    ctx->pc = 0x2c2384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
    // 0x2c2388: 0x24421558  addiu       $v0, $v0, 0x1558
    ctx->pc = 0x2c2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5464));
    // 0x2c238c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c238cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c2390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2394: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x2C2394u;
    SET_GPR_U32(ctx, 31, 0x2C239Cu);
    ctx->pc = 0x2C2398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2394u;
            // 0x2c2398: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (runtime->hasFunction(0x2C2870u)) {
        auto targetFn = runtime->lookupFunction(0x2C2870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C239Cu; }
        if (ctx->pc != 0x2C239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2870_0x2c2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C239Cu; }
        if (ctx->pc != 0x2C239Cu) { return; }
    }
    ctx->pc = 0x2C239Cu;
label_2c239c:
    // 0x2c239c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c239cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c23a0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2c23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2c23a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c23a8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c23a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c23ac: 0x244214d0  addiu       $v0, $v0, 0x14D0
    ctx->pc = 0x2c23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2c23b0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2c23b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c23b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c23bc: 0x24421508  addiu       $v0, $v0, 0x1508
    ctx->pc = 0x2c23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5384));
    // 0x2c23c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c23c4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x2c23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x2c23c8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2c23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2c23cc: 0xc4407130  lwc1        $f0, 0x7130($v0)
    ctx->pc = 0x2c23ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c23d0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x2c23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x2c23d4: 0xc4417134  lwc1        $f1, 0x7134($v0)
    ctx->pc = 0x2c23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c23d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c23d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c23dc: 0xc4607138  lwc1        $f0, 0x7138($v1)
    ctx->pc = 0x2c23dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c23e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2c23e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2c23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2c23e8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2c23e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c23ec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2C23ECu;
    SET_GPR_U32(ctx, 31, 0x2C23F4u);
    ctx->pc = 0x2C23F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C23ECu;
            // 0x2c23f0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23F4u; }
        if (ctx->pc != 0x2C23F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C23F4u; }
        if (ctx->pc != 0x2C23F4u) { return; }
    }
    ctx->pc = 0x2C23F4u;
label_2c23f4:
    // 0x2c23f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2c23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c23f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c23f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c23fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C23FCu;
    {
        const bool branch_taken_0x2c23fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C23FCu;
            // 0x2c2400: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23fc) {
            ctx->pc = 0x2C2414u;
            goto label_2c2414;
        }
    }
    ctx->pc = 0x2C2404u;
    // 0x2c2404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c2404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2408: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2C2408u;
    SET_GPR_U32(ctx, 31, 0x2C2410u);
    ctx->pc = 0x2C240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2408u;
            // 0x2c240c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2410u; }
        if (ctx->pc != 0x2C2410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2410u; }
        if (ctx->pc != 0x2C2410u) { return; }
    }
    ctx->pc = 0x2C2410u;
label_2c2410:
    // 0x2c2410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2414:
    // 0x2c2414: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x2c2414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x2c2418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c241c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2424: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2424u;
            // 0x2c2428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C242Cu;
    // 0x2c242c: 0x0  nop
    ctx->pc = 0x2c242cu;
    // NOP
label_2c2430:
    // 0x2c2430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c243c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2444: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C2444u;
    {
        const bool branch_taken_0x2c2444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2444u;
            // 0x2c2448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2444) {
            ctx->pc = 0x2C24E4u;
            goto label_2c24e4;
        }
    }
    ctx->pc = 0x2C244Cu;
    // 0x2c244c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c244cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2450: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2454: 0x24631520  addiu       $v1, $v1, 0x1520
    ctx->pc = 0x2c2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5408));
    // 0x2c2458: 0x24421558  addiu       $v0, $v0, 0x1558
    ctx->pc = 0x2c2458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5464));
    // 0x2c245c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c245cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c2460: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C2460u;
    {
        const bool branch_taken_0x2c2460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2460u;
            // 0x2c2464: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2460) {
            ctx->pc = 0x2C24CCu;
            goto label_2c24cc;
        }
    }
    ctx->pc = 0x2C2468u;
    // 0x2c2468: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c246c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2470: 0x24631480  addiu       $v1, $v1, 0x1480
    ctx->pc = 0x2c2470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
    // 0x2c2474: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c2478: 0x244214b8  addiu       $v0, $v0, 0x14B8
    ctx->pc = 0x2c2478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5304));
    // 0x2c247c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c247cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c2480: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c2480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c2484: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c2484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c2488: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C2488u;
    SET_GPR_U32(ctx, 31, 0x2C2490u);
    ctx->pc = 0x2C248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2488u;
            // 0x2c248c: 0x24a525d0  addiu       $a1, $a1, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2490u; }
        if (ctx->pc != 0x2C2490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2490u; }
        if (ctx->pc != 0x2C2490u) { return; }
    }
    ctx->pc = 0x2C2490u;
label_2c2490:
    // 0x2c2490: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c2494: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C2494u;
    SET_GPR_U32(ctx, 31, 0x2C249Cu);
    ctx->pc = 0x2C2498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2494u;
            // 0x2c2498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C249Cu; }
        if (ctx->pc != 0x2C249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C249Cu; }
        if (ctx->pc != 0x2C249Cu) { return; }
    }
    ctx->pc = 0x2C249Cu;
label_2c249c:
    // 0x2c249c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c24a0: 0xc0b0958  jal         func_2C2560
    ctx->pc = 0x2C24A0u;
    SET_GPR_U32(ctx, 31, 0x2C24A8u);
    ctx->pc = 0x2C24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24A0u;
            // 0x2c24a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2560u;
    if (runtime->hasFunction(0x2C2560u)) {
        auto targetFn = runtime->lookupFunction(0x2C2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24A8u; }
        if (ctx->pc != 0x2C24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2560_0x2c2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24A8u; }
        if (ctx->pc != 0x2C24A8u) { return; }
    }
    ctx->pc = 0x2C24A8u;
label_2c24a8:
    // 0x2c24a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c24ac: 0xc0b0958  jal         func_2C2560
    ctx->pc = 0x2C24ACu;
    SET_GPR_U32(ctx, 31, 0x2C24B4u);
    ctx->pc = 0x2C24B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24ACu;
            // 0x2c24b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2560u;
    if (runtime->hasFunction(0x2C2560u)) {
        auto targetFn = runtime->lookupFunction(0x2C2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24B4u; }
        if (ctx->pc != 0x2C24B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2560_0x2c2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24B4u; }
        if (ctx->pc != 0x2C24B4u) { return; }
    }
    ctx->pc = 0x2C24B4u;
label_2c24b4:
    // 0x2c24b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c24b8: 0xc0b0940  jal         func_2C2500
    ctx->pc = 0x2C24B8u;
    SET_GPR_U32(ctx, 31, 0x2C24C0u);
    ctx->pc = 0x2C24BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24B8u;
            // 0x2c24bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2500u;
    if (runtime->hasFunction(0x2C2500u)) {
        auto targetFn = runtime->lookupFunction(0x2C2500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24C0u; }
        if (ctx->pc != 0x2C24C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2500_0x2c2500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24C0u; }
        if (ctx->pc != 0x2C24C0u) { return; }
    }
    ctx->pc = 0x2C24C0u;
label_2c24c0:
    // 0x2c24c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C24C4u;
    SET_GPR_U32(ctx, 31, 0x2C24CCu);
    ctx->pc = 0x2C24C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24C4u;
            // 0x2c24c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24CCu; }
        if (ctx->pc != 0x2C24CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24CCu; }
        if (ctx->pc != 0x2C24CCu) { return; }
    }
    ctx->pc = 0x2C24CCu;
label_2c24cc:
    // 0x2c24cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c24d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c24d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c24d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C24D4u;
    {
        const bool branch_taken_0x2c24d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c24d4) {
            ctx->pc = 0x2C24D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24D4u;
            // 0x2c24d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C24E8u;
            goto label_2c24e8;
        }
    }
    ctx->pc = 0x2C24DCu;
    // 0x2c24dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C24DCu;
    SET_GPR_U32(ctx, 31, 0x2C24E4u);
    ctx->pc = 0x2C24E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24DCu;
            // 0x2c24e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24E4u; }
        if (ctx->pc != 0x2C24E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C24E4u; }
        if (ctx->pc != 0x2C24E4u) { return; }
    }
    ctx->pc = 0x2C24E4u;
label_2c24e4:
    // 0x2c24e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c24e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c24e8:
    // 0x2c24e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c24e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c24ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c24ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c24f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c24f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c24f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C24F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C24F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C24F4u;
            // 0x2c24f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C24FCu;
    // 0x2c24fc: 0x0  nop
    ctx->pc = 0x2c24fcu;
    // NOP
}
