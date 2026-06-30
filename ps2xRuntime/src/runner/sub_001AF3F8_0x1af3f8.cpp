#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF3F8
// Address: 0x1af3f8 - 0x1af5f0
void sub_001AF3F8_0x1af3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF3F8_0x1af3f8");
#endif

    switch (ctx->pc) {
        case 0x1af40cu: goto label_1af40c;
        case 0x1af578u: goto label_1af578;
        case 0x1af588u: goto label_1af588;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5c0u: goto label_1af5c0;
        default: break;
    }

    ctx->pc = 0x1af3f8u;

    // 0x1af3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af400: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af404: 0xc06bd7c  jal         func_1AF5F0
    ctx->pc = 0x1AF404u;
    SET_GPR_U32(ctx, 31, 0x1AF40Cu);
    ctx->pc = 0x1AF408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF404u;
            // 0x1af408: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5F0u;
    if (runtime->hasFunction(0x1AF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF40Cu; }
        if (ctx->pc != 0x1AF40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5F0_0x1af5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF40Cu; }
        if (ctx->pc != 0x1AF40Cu) { return; }
    }
    ctx->pc = 0x1AF40Cu;
label_1af40c:
    // 0x1af40c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF40Cu;
    {
        const bool branch_taken_0x1af40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF40Cu;
            // 0x1af410: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af40c) {
            ctx->pc = 0x1AF430u;
            goto label_1af430;
        }
    }
    ctx->pc = 0x1AF414u;
    // 0x1af414: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1af414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1af418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af41c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af420: 0x34a50f15  ori         $a1, $a1, 0xF15
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3861);
    // 0x1af424: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AF424u;
    ctx->pc = 0x1AF428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF424u;
            // 0x1af428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF42Cu;
    // 0x1af42c: 0x0  nop
    ctx->pc = 0x1af42cu;
    // NOP
label_1af430:
    // 0x1af430: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af434: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1af434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1af438: 0x24471db0  addiu       $a3, $v0, 0x1DB0
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x1af43c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1af43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af440: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1af440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af444: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1af444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1af448: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1af448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1af44c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1af44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af450: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1af450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af454: 0xb203000b  sdl         $v1, 0xB($s0)
    ctx->pc = 0x1af454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af458: 0xb6030004  sdr         $v1, 0x4($s0)
    ctx->pc = 0x1af458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af45c: 0xb2050013  sdl         $a1, 0x13($s0)
    ctx->pc = 0x1af45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af460: 0xb605000c  sdr         $a1, 0xC($s0)
    ctx->pc = 0x1af460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af464: 0xb206001b  sdl         $a2, 0x1B($s0)
    ctx->pc = 0x1af464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af468: 0xb6060014  sdr         $a2, 0x14($s0)
    ctx->pc = 0x1af468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af46c: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x1af46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af470: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x1af470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af474: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x1af474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1af478: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x1af478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af47c: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x1af47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af480: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1af480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1af484: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1af488: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1af488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af48c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1af48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1af490: 0x248b1dd8  addiu       $t3, $a0, 0x1DD8
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 7640));
    // 0x1af494: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x1af494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1af498: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x1af498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1af49c: 0xb208002f  sdl         $t0, 0x2F($s0)
    ctx->pc = 0x1af49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4a0: 0xb6080028  sdr         $t0, 0x28($s0)
    ctx->pc = 0x1af4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4a4: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1af4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1af4a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1af4a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af4ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1af4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b0: 0x244b1de0  addiu       $t3, $v0, 0x1DE0
    ctx->pc = 0x1af4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 7648));
    // 0x1af4b4: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x1af4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1af4b8: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x1af4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1af4bc: 0x6966000f  ldl         $a2, 0xF($t3)
    ctx->pc = 0x1af4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af4c0: 0x6d660008  ldr         $a2, 0x8($t3)
    ctx->pc = 0x1af4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af4c4: 0x696a0017  ldl         $t2, 0x17($t3)
    ctx->pc = 0x1af4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1af4c8: 0x6d6a0010  ldr         $t2, 0x10($t3)
    ctx->pc = 0x1af4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1af4cc: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x1af4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4d0: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x1af4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4d4: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x1af4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4d8: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x1af4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4dc: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x1af4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4e0: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x1af4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af4e4: 0x6964001f  ldl         $a0, 0x1F($t3)
    ctx->pc = 0x1af4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1af4e8: 0x6d640018  ldr         $a0, 0x18($t3)
    ctx->pc = 0x1af4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1af4ec: 0x69660027  ldl         $a2, 0x27($t3)
    ctx->pc = 0x1af4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af4f0: 0x6d660020  ldr         $a2, 0x20($t3)
    ctx->pc = 0x1af4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af4f4: 0x696a002f  ldl         $t2, 0x2F($t3)
    ctx->pc = 0x1af4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1af4f8: 0x6d6a0028  ldr         $t2, 0x28($t3)
    ctx->pc = 0x1af4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1af4fc: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x1af4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af500: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x1af500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af504: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x1af504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af508: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x1af508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af50c: 0xb06a002f  sdl         $t2, 0x2F($v1)
    ctx->pc = 0x1af50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af510: 0xb46a0028  sdr         $t2, 0x28($v1)
    ctx->pc = 0x1af510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af514: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x1af514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1af518: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x1af518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1af51c: 0x6966003f  ldl         $a2, 0x3F($t3)
    ctx->pc = 0x1af51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af520: 0x6d660038  ldr         $a2, 0x38($t3)
    ctx->pc = 0x1af520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af524: 0xb0640037  sdl         $a0, 0x37($v1)
    ctx->pc = 0x1af524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af528: 0xb4640030  sdr         $a0, 0x30($v1)
    ctx->pc = 0x1af528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af52c: 0xb066003f  sdl         $a2, 0x3F($v1)
    ctx->pc = 0x1af52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af530: 0xb4660038  sdr         $a2, 0x38($v1)
    ctx->pc = 0x1af530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af534: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1af534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1af538: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x1af538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x1af53c: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x1af53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1af540: 0xae080078  sw          $t0, 0x78($s0)
    ctx->pc = 0x1af540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
    // 0x1af544: 0xae09013c  sw          $t1, 0x13C($s0)
    ctx->pc = 0x1af544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 9));
    // 0x1af548: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1af548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1af54c: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1af54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1af550: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x1af550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x1af554: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1af554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1af558: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1af558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1af55c: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1af55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1af560: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x1af560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x1af564: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1af564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x1af568: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x1af568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x1af56c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1af56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1af570: 0xc06bdae  jal         func_1AF6B8
    ctx->pc = 0x1AF570u;
    SET_GPR_U32(ctx, 31, 0x1AF578u);
    ctx->pc = 0x1AF574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF570u;
            // 0x1af574: 0xae000174  sw          $zero, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6B8u;
    if (runtime->hasFunction(0x1AF6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF578u; }
        if (ctx->pc != 0x1AF578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF6B8_0x1af6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF578u; }
        if (ctx->pc != 0x1AF578u) { return; }
    }
    ctx->pc = 0x1AF578u;
label_1af578:
    // 0x1af578: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1af578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1af57c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1af57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1af580: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x1AF580u;
    SET_GPR_U32(ctx, 31, 0x1AF588u);
    ctx->pc = 0x1AF584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF580u;
            // 0x1af584: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF780u;
    if (runtime->hasFunction(0x1AF780u)) {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF588u; }
        if (ctx->pc != 0x1AF588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF588u; }
        if (ctx->pc != 0x1AF588u) { return; }
    }
    ctx->pc = 0x1AF588u;
label_1af588:
    // 0x1af588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af58c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1af58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1af590: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1af590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x1af594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1af594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1af598: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1af598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1af59c: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1af59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1af5a0: 0xc06b32c  jal         func_1ACCB0
    ctx->pc = 0x1AF5A0u;
    SET_GPR_U32(ctx, 31, 0x1AF5A8u);
    ctx->pc = 0x1AF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5A0u;
            // 0x1af5a4: 0x26040118  addiu       $a0, $s0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCB0u;
    if (runtime->hasFunction(0x1ACCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1ACCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5A8u; }
        if (ctx->pc != 0x1AF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACCB0_0x1accb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5A8u; }
        if (ctx->pc != 0x1AF5A8u) { return; }
    }
    ctx->pc = 0x1AF5A8u;
label_1af5a8:
    // 0x1af5a8: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1AF5A8u;
    SET_GPR_U32(ctx, 31, 0x1AF5B0u);
    ctx->pc = 0x1AF5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5A8u;
            // 0x1af5ac: 0x26041080  addiu       $a0, $s0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (runtime->hasFunction(0x1AF7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5B0u; }
        if (ctx->pc != 0x1AF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF7A0_0x1af7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF5B0u; }
        if (ctx->pc != 0x1AF5B0u) { return; }
    }
    ctx->pc = 0x1AF5B0u;
label_1af5b0:
    // 0x1af5b0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1af5b4: 0x26021114  addiu       $v0, $s0, 0x1114
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4372));
    // 0x1af5b8: 0x26030fe4  addiu       $v1, $s0, 0xFE4
    ctx->pc = 0x1af5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4068));
    // 0x1af5bc: 0x0  nop
    ctx->pc = 0x1af5bcu;
    // NOP
label_1af5c0:
    // 0x1af5c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1af5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1af5c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1af5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1af5c8: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x1af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x1af5cc: 0x0  nop
    ctx->pc = 0x1af5ccu;
    // NOP
    // 0x1af5d0: 0x0  nop
    ctx->pc = 0x1af5d0u;
    // NOP
    // 0x1af5d4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF5D4u;
    {
        const bool branch_taken_0x1af5d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AF5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5D4u;
            // 0x1af5d8: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5d4) {
            ctx->pc = 0x1AF5C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af5c0;
        }
    }
    ctx->pc = 0x1AF5DCu;
    // 0x1af5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af5e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5E8u;
            // 0x1af5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF5F0u;
}
