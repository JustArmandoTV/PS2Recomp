#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8848
// Address: 0x1c8848 - 0x1c88f0
void sub_001C8848_0x1c8848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8848_0x1c8848");
#endif

    switch (ctx->pc) {
        case 0x1c8884u: goto label_1c8884;
        default: break;
    }

    ctx->pc = 0x1c8848u;

    // 0x1c8848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c884c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c8850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8854: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c8854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c885c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c885cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8864: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c8864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c886c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8874: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8874u;
    {
        const bool branch_taken_0x1c8874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8874u;
            // 0x1c8878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8874) {
            ctx->pc = 0x1C88D4u;
            goto label_1c88d4;
        }
    }
    ctx->pc = 0x1C887Cu;
    // 0x1c887c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C887Cu;
    SET_GPR_U32(ctx, 31, 0x1C8884u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8884u; }
        if (ctx->pc != 0x1C8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8884u; }
        if (ctx->pc != 0x1C8884u) { return; }
    }
    ctx->pc = 0x1C8884u;
label_1c8884:
    // 0x1c8884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8888: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8888u;
    {
        const bool branch_taken_0x1c8888 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8888u;
            // 0x1c888c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8888) {
            ctx->pc = 0x1C88A8u;
            goto label_1c88a8;
        }
    }
    ctx->pc = 0x1C8890u;
    // 0x1c8890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c889c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c88a0: 0x807211e  j           func_1C8478
    ctx->pc = 0x1C88A0u;
    ctx->pc = 0x1C88A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88A0u;
            // 0x1c88a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8478u;
    {
        auto targetFn = runtime->lookupFunction(0x1C8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C88A8u;
label_1c88a8:
    // 0x1c88a8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C88A8u;
    {
        const bool branch_taken_0x1c88a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88A8u;
            // 0x1c88ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88a8) {
            ctx->pc = 0x1C88D0u;
            goto label_1c88d0;
        }
    }
    ctx->pc = 0x1C88B0u;
    // 0x1c88b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c88b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c88b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c88b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c88b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c88bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c88bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c88c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c88c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c88c4: 0x8072108  j           func_1C8420
    ctx->pc = 0x1C88C4u;
    ctx->pc = 0x1C88C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88C4u;
            // 0x1c88c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8420u;
    {
        auto targetFn = runtime->lookupFunction(0x1C8420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C88CCu;
    // 0x1c88cc: 0x0  nop
    ctx->pc = 0x1c88ccu;
    // NOP
label_1c88d0:
    // 0x1c88d0: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_1c88d4:
    // 0x1c88d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c88d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c88d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c88d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c88dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c88dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c88e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c88e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c88e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C88E4u;
            // 0x1c88e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C88ECu;
    // 0x1c88ec: 0x0  nop
    ctx->pc = 0x1c88ecu;
    // NOP
}
