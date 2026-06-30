#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198828
// Address: 0x198828 - 0x1988c0
void sub_00198828_0x198828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198828_0x198828");
#endif

    switch (ctx->pc) {
        case 0x19884cu: goto label_19884c;
        case 0x198878u: goto label_198878;
        case 0x198888u: goto label_198888;
        case 0x198898u: goto label_198898;
        case 0x1988a8u: goto label_1988a8;
        default: break;
    }

    ctx->pc = 0x198828u;

    // 0x198828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19882c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x198838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19883c: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x198840: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x198840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x198844: 0xc06cf3c  jal         func_1B3CF0
    ctx->pc = 0x198844u;
    SET_GPR_U32(ctx, 31, 0x19884Cu);
    ctx->pc = 0x198848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198844u;
            // 0x198848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CF0u;
    if (runtime->hasFunction(0x1B3CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19884Cu; }
        if (ctx->pc != 0x19884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3CF0_0x1b3cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19884Cu; }
        if (ctx->pc != 0x19884Cu) { return; }
    }
    ctx->pc = 0x19884Cu;
label_19884c:
    // 0x19884c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x198850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198854: 0x24a5b7d0  addiu       $a1, $a1, -0x4830
    ctx->pc = 0x198854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948816));
    // 0x198858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198858u;
    {
        const bool branch_taken_0x198858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198858u;
            // 0x19885c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198858) {
            ctx->pc = 0x198870u;
            goto label_198870;
        }
    }
    ctx->pc = 0x198860u;
    // 0x198860: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198864: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x198864u;
    {
        const bool branch_taken_0x198864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198864u;
            // 0x198868: 0x248487d8  addiu       $a0, $a0, -0x7828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198864) {
            ctx->pc = 0x198890u;
            goto label_198890;
        }
    }
    ctx->pc = 0x19886Cu;
    // 0x19886c: 0x0  nop
    ctx->pc = 0x19886cu;
    // NOP
label_198870:
    // 0x198870: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x198870u;
    SET_GPR_U32(ctx, 31, 0x198878u);
    ctx->pc = 0x198874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198870u;
            // 0x198874: 0xae110048  sw          $s1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (runtime->hasFunction(0x1A8760u)) {
        auto targetFn = runtime->lookupFunction(0x1A8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198878u; }
        if (ctx->pc != 0x198878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8760_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198878u; }
        if (ctx->pc != 0x198878u) { return; }
    }
    ctx->pc = 0x198878u;
label_198878:
    // 0x198878: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198878u;
    {
        const bool branch_taken_0x198878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198878u;
            // 0x19887c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198878) {
            ctx->pc = 0x1988A0u;
            goto label_1988a0;
        }
    }
    ctx->pc = 0x198880u;
    // 0x198880: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x198880u;
    SET_GPR_U32(ctx, 31, 0x198888u);
    ctx->pc = 0x198884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198880u;
            // 0x198884: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198888u; }
        if (ctx->pc != 0x198888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198888u; }
        if (ctx->pc != 0x198888u) { return; }
    }
    ctx->pc = 0x198888u;
label_198888:
    // 0x198888: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19888c: 0x24848808  addiu       $a0, $a0, -0x77F8
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936584));
label_198890:
    // 0x198890: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198890u;
    SET_GPR_U32(ctx, 31, 0x198898u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198898u; }
        if (ctx->pc != 0x198898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198898u; }
        if (ctx->pc != 0x198898u) { return; }
    }
    ctx->pc = 0x198898u;
label_198898:
    // 0x198898: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198898u;
    {
        const bool branch_taken_0x198898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198898u;
            // 0x19889c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198898) {
            ctx->pc = 0x1988ACu;
            goto label_1988ac;
        }
    }
    ctx->pc = 0x1988A0u;
label_1988a0:
    // 0x1988a0: 0xc06614c  jal         func_198530
    ctx->pc = 0x1988A0u;
    SET_GPR_U32(ctx, 31, 0x1988A8u);
    ctx->pc = 0x198530u;
    if (runtime->hasFunction(0x198530u)) {
        auto targetFn = runtime->lookupFunction(0x198530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A8u; }
        if (ctx->pc != 0x1988A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198530_0x198530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1988A8u; }
        if (ctx->pc != 0x1988A8u) { return; }
    }
    ctx->pc = 0x1988A8u;
label_1988a8:
    // 0x1988a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1988a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1988ac:
    // 0x1988ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1988acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1988b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1988b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1988b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1988b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1988B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1988BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1988B8u;
            // 0x1988bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1988C0u;
}
