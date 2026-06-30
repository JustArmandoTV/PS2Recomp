#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFF50
// Address: 0x1aff50 - 0x1b0048
void sub_001AFF50_0x1aff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFF50_0x1aff50");
#endif

    switch (ctx->pc) {
        case 0x1aff78u: goto label_1aff78;
        case 0x1b0008u: goto label_1b0008;
        case 0x1b0020u: goto label_1b0020;
        default: break;
    }

    ctx->pc = 0x1aff50u;

    // 0x1aff50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aff54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aff58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aff58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1aff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1aff60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aff60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff64: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1aff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1aff68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aff68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff6c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1aff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1aff70: 0xc06c012  jal         func_1B0048
    ctx->pc = 0x1AFF70u;
    SET_GPR_U32(ctx, 31, 0x1AFF78u);
    ctx->pc = 0x1AFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF70u;
            // 0x1aff74: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0048u;
    if (runtime->hasFunction(0x1B0048u)) {
        auto targetFn = runtime->lookupFunction(0x1B0048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF78u; }
        if (ctx->pc != 0x1AFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0048_0x1b0048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF78u; }
        if (ctx->pc != 0x1AFF78u) { return; }
    }
    ctx->pc = 0x1AFF78u;
label_1aff78:
    // 0x1aff78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff7c: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AFF7Cu;
    {
        const bool branch_taken_0x1aff7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff7c) {
            ctx->pc = 0x1AFF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF7Cu;
            // 0x1aff80: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0034u;
            goto label_1b0034;
        }
    }
    ctx->pc = 0x1AFF84u;
    // 0x1aff84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aff88: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AFF88u;
    {
        const bool branch_taken_0x1aff88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF88u;
            // 0x1aff8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff88) {
            ctx->pc = 0x1B0030u;
            goto label_1b0030;
        }
    }
    ctx->pc = 0x1AFF90u;
    // 0x1aff90: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x1aff90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aff94: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x1aff94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aff98: 0x6883001b  ldl         $v1, 0x1B($a0)
    ctx->pc = 0x1aff98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1aff9c: 0x6c830014  ldr         $v1, 0x14($a0)
    ctx->pc = 0x1aff9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1affa0: 0x68850023  ldl         $a1, 0x23($a0)
    ctx->pc = 0x1affa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1affa4: 0x6c85001c  ldr         $a1, 0x1C($a0)
    ctx->pc = 0x1affa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1affa8: 0x6886002b  ldl         $a2, 0x2B($a0)
    ctx->pc = 0x1affa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1affac: 0x6c860024  ldr         $a2, 0x24($a0)
    ctx->pc = 0x1affacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1affb0: 0xb2220dcb  sdl         $v0, 0xDCB($s1)
    ctx->pc = 0x1affb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affb4: 0xb6220dc4  sdr         $v0, 0xDC4($s1)
    ctx->pc = 0x1affb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affb8: 0xb2230dd3  sdl         $v1, 0xDD3($s1)
    ctx->pc = 0x1affb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3539); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affbc: 0xb6230dcc  sdr         $v1, 0xDCC($s1)
    ctx->pc = 0x1affbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affc0: 0xb2250ddb  sdl         $a1, 0xDDB($s1)
    ctx->pc = 0x1affc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3547); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affc4: 0xb6250dd4  sdr         $a1, 0xDD4($s1)
    ctx->pc = 0x1affc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affc8: 0xb2260de3  sdl         $a2, 0xDE3($s1)
    ctx->pc = 0x1affc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affcc: 0xb6260ddc  sdr         $a2, 0xDDC($s1)
    ctx->pc = 0x1affccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affd0: 0x68820033  ldl         $v0, 0x33($a0)
    ctx->pc = 0x1affd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1affd4: 0x6c82002c  ldr         $v0, 0x2C($a0)
    ctx->pc = 0x1affd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1affd8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1affd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1affdc: 0xb2220deb  sdl         $v0, 0xDEB($s1)
    ctx->pc = 0x1affdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affe0: 0xb6220de4  sdr         $v0, 0xDE4($s1)
    ctx->pc = 0x1affe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1affe4: 0xae230dec  sw          $v1, 0xDEC($s1)
    ctx->pc = 0x1affe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3564), GPR_U32(ctx, 3));
    // 0x1affe8: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x1affe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1affec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1affecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1afff0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1afff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afff4: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x1afff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x1afff8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1afff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1afffc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1afffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b0000: 0xc06515c  jal         func_194570
    ctx->pc = 0x1B0000u;
    SET_GPR_U32(ctx, 31, 0x1B0008u);
    ctx->pc = 0x1B0004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0000u;
            // 0x1b0004: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194570u;
    if (runtime->hasFunction(0x194570u)) {
        auto targetFn = runtime->lookupFunction(0x194570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0008u; }
        if (ctx->pc != 0x1B0008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194570_0x194570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0008u; }
        if (ctx->pc != 0x1B0008u) { return; }
    }
    ctx->pc = 0x1B0008u;
label_1b0008:
    // 0x1b0008: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b0008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b000c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0010u;
    {
        const bool branch_taken_0x1b0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0010u;
            // 0x1b0014: 0x34a50f1b  ori         $a1, $a1, 0xF1B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0010) {
            ctx->pc = 0x1B0028u;
            goto label_1b0028;
        }
    }
    ctx->pc = 0x1B0018u;
    // 0x1b0018: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B0018u;
    SET_GPR_U32(ctx, 31, 0x1B0020u);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0020u; }
        if (ctx->pc != 0x1B0020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0020u; }
        if (ctx->pc != 0x1B0020u) { return; }
    }
    ctx->pc = 0x1B0020u;
label_1b0020:
    // 0x1b0020: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0020u;
    {
        const bool branch_taken_0x1b0020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0020u;
            // 0x1b0024: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0020) {
            ctx->pc = 0x1B0034u;
            goto label_1b0034;
        }
    }
    ctx->pc = 0x1B0028u;
label_1b0028:
    // 0x1b0028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b002c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b002cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1b0030:
    // 0x1b0030: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b0030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0034:
    // 0x1b0034: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0038: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b003c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b003cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0040: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0040u;
            // 0x1b0044: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0048u;
}
