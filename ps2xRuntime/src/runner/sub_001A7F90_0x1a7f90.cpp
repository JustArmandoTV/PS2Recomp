#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7F90
// Address: 0x1a7f90 - 0x1a8020
void sub_001A7F90_0x1a7f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7F90_0x1a7f90");
#endif

    switch (ctx->pc) {
        case 0x1a7fb4u: goto label_1a7fb4;
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7fdcu: goto label_1a7fdc;
        case 0x1a8004u: goto label_1a8004;
        default: break;
    }

    ctx->pc = 0x1a7f90u;

    // 0x1a7f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7f94: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1a7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1a7f98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7f9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fa0: 0x2445a908  addiu       $a1, $v0, -0x56F8
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945032));
    // 0x1a7fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7fac: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A7FACu;
    SET_GPR_U32(ctx, 31, 0x1A7FB4u);
    ctx->pc = 0x1A7FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FACu;
            // 0x1a7fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FB4u; }
        if (ctx->pc != 0x1A7FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FB4u; }
        if (ctx->pc != 0x1A7FB4u) { return; }
    }
    ctx->pc = 0x1A7FB4u;
label_1a7fb4:
    // 0x1a7fb4: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a7fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a7fb8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1a7fbc: 0x24a5a958  addiu       $a1, $a1, -0x56A8
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945112));
    // 0x1a7fc0: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A7FC0u;
    SET_GPR_U32(ctx, 31, 0x1A7FC8u);
    ctx->pc = 0x1A7FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FC0u;
            // 0x1a7fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FC8u; }
        if (ctx->pc != 0x1A7FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FC8u; }
        if (ctx->pc != 0x1A7FC8u) { return; }
    }
    ctx->pc = 0x1A7FC8u;
label_1a7fc8:
    // 0x1a7fc8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a7fcc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1a7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1a7fd0: 0x24a5a9a8  addiu       $a1, $a1, -0x5658
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945192));
    // 0x1a7fd4: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A7FD4u;
    SET_GPR_U32(ctx, 31, 0x1A7FDCu);
    ctx->pc = 0x1A7FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FD4u;
            // 0x1a7fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FDCu; }
        if (ctx->pc != 0x1A7FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FDCu; }
        if (ctx->pc != 0x1A7FDCu) { return; }
    }
    ctx->pc = 0x1A7FDCu;
label_1a7fdc:
    // 0x1a7fdc: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1a7fe0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fe8: 0x24a5a9f8  addiu       $a1, $a1, -0x5608
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945272));
    // 0x1a7fec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7FECu;
    {
        const bool branch_taken_0x1a7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FECu;
            // 0x1a7ff0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fec) {
            ctx->pc = 0x1A7FFCu;
            goto label_1a7ffc;
        }
    }
    ctx->pc = 0x1A7FF4u;
    // 0x1a7ff4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7ff8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1a7ffc:
    // 0x1a7ffc: 0xc06a0e0  jal         func_1A8380
    ctx->pc = 0x1A7FFCu;
    SET_GPR_U32(ctx, 31, 0x1A8004u);
    ctx->pc = 0x1A8380u;
    if (runtime->hasFunction(0x1A8380u)) {
        auto targetFn = runtime->lookupFunction(0x1A8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8004u; }
        if (ctx->pc != 0x1A8004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8380_0x1a8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8004u; }
        if (ctx->pc != 0x1A8004u) { return; }
    }
    ctx->pc = 0x1A8004u;
label_1a8004:
    // 0x1a8004: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1a8004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1a8008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a800c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8014: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8014u;
            // 0x1a8018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A801Cu;
    // 0x1a801c: 0x0  nop
    ctx->pc = 0x1a801cu;
    // NOP
}
