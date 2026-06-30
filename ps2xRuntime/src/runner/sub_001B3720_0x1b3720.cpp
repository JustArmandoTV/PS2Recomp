#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3720
// Address: 0x1b3720 - 0x1b3970
void sub_001B3720_0x1b3720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3720_0x1b3720");
#endif

    switch (ctx->pc) {
        case 0x1b3790u: goto label_1b3790;
        case 0x1b37ccu: goto label_1b37cc;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3894u: goto label_1b3894;
        case 0x1b389cu: goto label_1b389c;
        case 0x1b38a4u: goto label_1b38a4;
        case 0x1b38acu: goto label_1b38ac;
        case 0x1b38b4u: goto label_1b38b4;
        case 0x1b38c4u: goto label_1b38c4;
        case 0x1b38d4u: goto label_1b38d4;
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b38fcu: goto label_1b38fc;
        case 0x1b390cu: goto label_1b390c;
        case 0x1b3928u: goto label_1b3928;
        case 0x1b3930u: goto label_1b3930;
        case 0x1b3938u: goto label_1b3938;
        default: break;
    }

    ctx->pc = 0x1b3720u;

    // 0x1b3720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b3728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b372c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b372cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3730: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3734: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b3734u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b373c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b3740: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3744: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b3744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b3748: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1b374c: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x1b374cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b3750: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x1B3750u;
    {
        const bool branch_taken_0x1b3750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3750u;
            // 0x1b3754: 0x73082  srl         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3750) {
            ctx->pc = 0x1B394Cu;
            goto label_1b394c;
        }
    }
    ctx->pc = 0x1B3758u;
    // 0x1b3758: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1b3758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b375c: 0x2c637080  sltiu       $v1, $v1, 0x7080
    ctx->pc = 0x1b375cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28800) ? 1 : 0);
    // 0x1b3760: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1B3760u;
    {
        const bool branch_taken_0x1b3760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3760) {
            ctx->pc = 0x1B3764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3760u;
            // 0x1b3764: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3950u;
            goto label_1b3950;
        }
    }
    ctx->pc = 0x1B3768u;
    // 0x1b3768: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x1b376c: 0x8d039bd0  lw          $v1, -0x6430($t0)
    ctx->pc = 0x1b376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941648)));
    // 0x1b3770: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3770u;
    {
        const bool branch_taken_0x1b3770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3770u;
            // 0x1b3774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3770) {
            ctx->pc = 0x1B3784u;
            goto label_1b3784;
        }
    }
    ctx->pc = 0x1B3778u;
    // 0x1b3778: 0x54670075  bnel        $v1, $a3, . + 4 + (0x75 << 2)
    ctx->pc = 0x1B3778u;
    {
        const bool branch_taken_0x1b3778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1b3778) {
            ctx->pc = 0x1B377Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3778u;
            // 0x1b377c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3950u;
            goto label_1b3950;
        }
    }
    ctx->pc = 0x1B3780u;
    // 0x1b3780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3784:
    // 0x1b3784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3788: 0xc06419c  jal         func_190670
    ctx->pc = 0x1B3788u;
    SET_GPR_U32(ctx, 31, 0x1B3790u);
    ctx->pc = 0x1B378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3788u;
            // 0x1b378c: 0xad079bd0  sw          $a3, -0x6430($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294941648), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3790u; }
        if (ctx->pc != 0x1B3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3790u; }
        if (ctx->pc != 0x1B3790u) { return; }
    }
    ctx->pc = 0x1B3790u;
label_1b3790:
    // 0x1b3790: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b3790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b3794: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1b3798: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x1b3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1b379c: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x1b379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1b37a0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x1b37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1b37a4: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b37a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b37ac: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x1b37acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x1b37b0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1b37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1b37b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b37b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37b8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1b37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1b37bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b37bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37c0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B37C0u;
    {
        const bool branch_taken_0x1b37c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37C0u;
            // 0x1b37c4: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37c0) {
            ctx->pc = 0x1B3828u;
            goto label_1b3828;
        }
    }
    ctx->pc = 0x1B37C8u;
    // 0x1b37c8: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b37cc:
    // 0x1b37cc: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1b37ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b37d0: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1b37d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b37d4: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1b37d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b37d8: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1b37d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b37dc: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x1b37dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b37e0: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x1b37e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b37e4: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x1b37e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b37e8: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x1b37e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b37ec: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1b37ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b37f0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1b37f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b37f4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b37f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b37f8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b37f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b37fc: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1b37fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3800: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1b3800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3804: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1b3804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3808: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1b3808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b380c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1b380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1b3810: 0x0  nop
    ctx->pc = 0x1b3810u;
    // NOP
    // 0x1b3814: 0x0  nop
    ctx->pc = 0x1b3814u;
    // NOP
    // 0x1b3818: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3818u;
            // 0x1b381c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B37CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b37cc;
        }
    }
    ctx->pc = 0x1B3820u;
    // 0x1b3820: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3820u;
    {
        const bool branch_taken_0x1b3820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3820) {
            ctx->pc = 0x1B3860u;
            goto label_1b3860;
        }
    }
    ctx->pc = 0x1B3828u;
label_1b3828:
    // 0x1b3828: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x1b3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1b382c:
    // 0x1b382c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1b382cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3830: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1b3830u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b3834: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1b3834u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b3838: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b383c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1b383cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1b3840: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1b3840u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1b3844: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1b3844u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1b3848: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b3848u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1b384c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1b384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1b3850: 0x0  nop
    ctx->pc = 0x1b3850u;
    // NOP
    // 0x1b3854: 0x0  nop
    ctx->pc = 0x1b3854u;
    // NOP
    // 0x1b3858: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B3858u;
    {
        const bool branch_taken_0x1b3858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3858u;
            // 0x1b385c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3858) {
            ctx->pc = 0x1B382Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b382c;
        }
    }
    ctx->pc = 0x1B3860u;
label_1b3860:
    // 0x1b3860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3864: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3868: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b3868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b386c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b386cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b3870: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x1b3874: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1b3874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1b3878: 0x26109980  addiu       $s0, $s0, -0x6680
    ctx->pc = 0x1b3878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941056));
    // 0x1b387c: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x1b387cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
    // 0x1b3880: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1b3880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1b3884: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1b3884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1b3888: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1b3888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1b388c: 0xc069e74  jal         func_1A79D0
    ctx->pc = 0x1B388Cu;
    SET_GPR_U32(ctx, 31, 0x1B3894u);
    ctx->pc = 0x1B3890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B388Cu;
            // 0x1b3890: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A79D0u;
    if (runtime->hasFunction(0x1A79D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A79D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3894u; }
        if (ctx->pc != 0x1B3894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A79D0_0x1a79d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3894u; }
        if (ctx->pc != 0x1B3894u) { return; }
    }
    ctx->pc = 0x1B3894u;
label_1b3894:
    // 0x1b3894: 0xc06ce5c  jal         func_1B3970
    ctx->pc = 0x1B3894u;
    SET_GPR_U32(ctx, 31, 0x1B389Cu);
    ctx->pc = 0x1B3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3894u;
            // 0x1b3898: 0x2624090c  addiu       $a0, $s1, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3970u;
    if (runtime->hasFunction(0x1B3970u)) {
        auto targetFn = runtime->lookupFunction(0x1B3970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B389Cu; }
        if (ctx->pc != 0x1B389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3970_0x1b3970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B389Cu; }
        if (ctx->pc != 0x1B389Cu) { return; }
    }
    ctx->pc = 0x1B389Cu;
label_1b389c:
    // 0x1b389c: 0xc06ce76  jal         func_1B39D8
    ctx->pc = 0x1B389Cu;
    SET_GPR_U32(ctx, 31, 0x1B38A4u);
    ctx->pc = 0x1B38A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B389Cu;
            // 0x1b38a0: 0x26240950  addiu       $a0, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B39D8u;
    if (runtime->hasFunction(0x1B39D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B39D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38A4u; }
        if (ctx->pc != 0x1B38A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B39D8_0x1b39d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38A4u; }
        if (ctx->pc != 0x1B38A4u) { return; }
    }
    ctx->pc = 0x1B38A4u;
label_1b38a4:
    // 0x1b38a4: 0xc06ce98  jal         func_1B3A60
    ctx->pc = 0x1B38A4u;
    SET_GPR_U32(ctx, 31, 0x1B38ACu);
    ctx->pc = 0x1B38A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38A4u;
            // 0x1b38a8: 0x26243730  addiu       $a0, $s1, 0x3730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A60u;
    if (runtime->hasFunction(0x1B3A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38ACu; }
        if (ctx->pc != 0x1B38ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3A60_0x1b3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38ACu; }
        if (ctx->pc != 0x1B38ACu) { return; }
    }
    ctx->pc = 0x1B38ACu;
label_1b38ac:
    // 0x1b38ac: 0xc06a1a6  jal         func_1A8698
    ctx->pc = 0x1B38ACu;
    SET_GPR_U32(ctx, 31, 0x1B38B4u);
    ctx->pc = 0x1B38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38ACu;
            // 0x1b38b0: 0x262409f8  addiu       $a0, $s1, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8698u;
    if (runtime->hasFunction(0x1A8698u)) {
        auto targetFn = runtime->lookupFunction(0x1A8698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B4u; }
        if (ctx->pc != 0x1B38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8698_0x1a8698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B4u; }
        if (ctx->pc != 0x1B38B4u) { return; }
    }
    ctx->pc = 0x1B38B4u;
label_1b38b4:
    // 0x1b38b4: 0x26240a0c  addiu       $a0, $s1, 0xA0C
    ctx->pc = 0x1b38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x1b38b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b38b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38bc: 0xc064080  jal         func_190200
    ctx->pc = 0x1B38BCu;
    SET_GPR_U32(ctx, 31, 0x1B38C4u);
    ctx->pc = 0x1B38C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38BCu;
            // 0x1b38c0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C4u; }
        if (ctx->pc != 0x1B38C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38C4u; }
        if (ctx->pc != 0x1B38C4u) { return; }
    }
    ctx->pc = 0x1B38C4u;
label_1b38c4:
    // 0x1b38c4: 0x26240b9c  addiu       $a0, $s1, 0xB9C
    ctx->pc = 0x1b38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2972));
    // 0x1b38c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38cc: 0xc064080  jal         func_190200
    ctx->pc = 0x1B38CCu;
    SET_GPR_U32(ctx, 31, 0x1B38D4u);
    ctx->pc = 0x1B38D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38CCu;
            // 0x1b38d0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38D4u; }
        if (ctx->pc != 0x1B38D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38D4u; }
        if (ctx->pc != 0x1B38D4u) { return; }
    }
    ctx->pc = 0x1B38D4u;
label_1b38d4:
    // 0x1b38d4: 0x26240d2c  addiu       $a0, $s1, 0xD2C
    ctx->pc = 0x1b38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3372));
    // 0x1b38d8: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1b38d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1b38dc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1B38DCu;
    SET_GPR_U32(ctx, 31, 0x1B38E4u);
    ctx->pc = 0x1B38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38DCu;
            // 0x1b38e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38E4u; }
        if (ctx->pc != 0x1B38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38E4u; }
        if (ctx->pc != 0x1B38E4u) { return; }
    }
    ctx->pc = 0x1B38E4u;
label_1b38e4:
    // 0x1b38e4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b38e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b38e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b38ec: 0x26250d88  addiu       $a1, $s1, 0xD88
    ctx->pc = 0x1b38ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1b38f0: 0xae230d7c  sw          $v1, 0xD7C($s1)
    ctx->pc = 0x1b38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3452), GPR_U32(ctx, 3));
    // 0x1b38f4: 0xc06d958  jal         func_1B6560
    ctx->pc = 0x1B38F4u;
    SET_GPR_U32(ctx, 31, 0x1B38FCu);
    ctx->pc = 0x1B38F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38F4u;
            // 0x1b38f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6560u;
    if (runtime->hasFunction(0x1B6560u)) {
        auto targetFn = runtime->lookupFunction(0x1B6560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38FCu; }
        if (ctx->pc != 0x1B38FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6560_0x1b6560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38FCu; }
        if (ctx->pc != 0x1B38FCu) { return; }
    }
    ctx->pc = 0x1B38FCu;
label_1b38fc:
    // 0x1b38fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3900: 0x26251380  addiu       $a1, $s1, 0x1380
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4992));
    // 0x1b3904: 0xc0693da  jal         func_1A4F68
    ctx->pc = 0x1B3904u;
    SET_GPR_U32(ctx, 31, 0x1B390Cu);
    ctx->pc = 0x1B3908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3904u;
            // 0x1b3908: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F68u;
    if (runtime->hasFunction(0x1A4F68u)) {
        auto targetFn = runtime->lookupFunction(0x1A4F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B390Cu; }
        if (ctx->pc != 0x1B390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4F68_0x1a4f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B390Cu; }
        if (ctx->pc != 0x1B390Cu) { return; }
    }
    ctx->pc = 0x1B390Cu;
label_1b390c:
    // 0x1b390c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B390Cu;
    {
        const bool branch_taken_0x1b390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b390c) {
            ctx->pc = 0x1B3910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B390Cu;
            // 0x1b3910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B394Cu;
            goto label_1b394c;
        }
    }
    ctx->pc = 0x1B3914u;
    // 0x1b3914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3918: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b3918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b391c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3920: 0xc06e1dc  jal         func_1B8770
    ctx->pc = 0x1B3920u;
    SET_GPR_U32(ctx, 31, 0x1B3928u);
    ctx->pc = 0x1B3924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3920u;
            // 0x1b3924: 0x26251fa0  addiu       $a1, $s1, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8770u;
    if (runtime->hasFunction(0x1B8770u)) {
        auto targetFn = runtime->lookupFunction(0x1B8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3928u; }
        if (ctx->pc != 0x1B3928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8770_0x1b8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3928u; }
        if (ctx->pc != 0x1B3928u) { return; }
    }
    ctx->pc = 0x1B3928u;
label_1b3928:
    // 0x1b3928: 0xc06d3d2  jal         func_1B4F48
    ctx->pc = 0x1B3928u;
    SET_GPR_U32(ctx, 31, 0x1B3930u);
    ctx->pc = 0x1B392Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3928u;
            // 0x1b392c: 0x26243720  addiu       $a0, $s1, 0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4F48u;
    if (runtime->hasFunction(0x1B4F48u)) {
        auto targetFn = runtime->lookupFunction(0x1B4F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3930u; }
        if (ctx->pc != 0x1B3930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4F48_0x1b4f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3930u; }
        if (ctx->pc != 0x1B3930u) { return; }
    }
    ctx->pc = 0x1B3930u;
label_1b3930:
    // 0x1b3930: 0xc06ced6  jal         func_1B3B58
    ctx->pc = 0x1B3930u;
    SET_GPR_U32(ctx, 31, 0x1B3938u);
    ctx->pc = 0x1B3934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3930u;
            // 0x1b3934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B58u;
    if (runtime->hasFunction(0x1B3B58u)) {
        auto targetFn = runtime->lookupFunction(0x1B3B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3938u; }
        if (ctx->pc != 0x1B3938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3B58_0x1b3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3938u; }
        if (ctx->pc != 0x1B3938u) { return; }
    }
    ctx->pc = 0x1B3938u;
label_1b3938:
    // 0x1b3938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3938u;
    {
        const bool branch_taken_0x1b3938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3938u;
            // 0x1b393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3938) {
            ctx->pc = 0x1B394Cu;
            goto label_1b394c;
        }
    }
    ctx->pc = 0x1B3940u;
    // 0x1b3940: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x1b3940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x1b3944: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b3944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3948: 0xae33004c  sw          $s3, 0x4C($s1)
    ctx->pc = 0x1b3948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
label_1b394c:
    // 0x1b394c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b394cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3950:
    // 0x1b3950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b395c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b395cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3960: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b3960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3964: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3964u;
            // 0x1b3968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B396Cu;
    // 0x1b396c: 0x0  nop
    ctx->pc = 0x1b396cu;
    // NOP
}
