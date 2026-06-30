#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001709B0
// Address: 0x1709b0 - 0x170a20
void sub_001709B0_0x1709b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001709B0_0x1709b0");
#endif

    switch (ctx->pc) {
        case 0x1709e4u: goto label_1709e4;
        case 0x1709fcu: goto label_1709fc;
        default: break;
    }

    ctx->pc = 0x1709b0u;

    // 0x1709b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1709b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1709b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1709b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1709b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1709bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1709c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1709c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1709c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1709c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1709c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1709ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1709d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1709d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1709d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1709d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1709d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1709dc: 0xc05c846  jal         func_172118
    ctx->pc = 0x1709DCu;
    SET_GPR_U32(ctx, 31, 0x1709E4u);
    ctx->pc = 0x1709E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1709DCu;
            // 0x1709e0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709E4u; }
        if (ctx->pc != 0x1709E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709E4u; }
        if (ctx->pc != 0x1709E4u) { return; }
    }
    ctx->pc = 0x1709E4u;
label_1709e4:
    // 0x1709e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1709e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1709ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1709f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709f4: 0xc05c288  jal         func_170A20
    ctx->pc = 0x1709F4u;
    SET_GPR_U32(ctx, 31, 0x1709FCu);
    ctx->pc = 0x1709F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1709F4u;
            // 0x1709f8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A20u;
    if (runtime->hasFunction(0x170A20u)) {
        auto targetFn = runtime->lookupFunction(0x170A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709FCu; }
        if (ctx->pc != 0x1709FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A20_0x170a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709FCu; }
        if (ctx->pc != 0x1709FCu) { return; }
    }
    ctx->pc = 0x1709FCu;
label_1709fc:
    // 0x1709fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1709fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170a04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x170a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170a0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x170a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170a10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170a14: 0x805c84c  j           func_172130
    ctx->pc = 0x170A14u;
    ctx->pc = 0x170A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A14u;
            // 0x170a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170A1Cu;
    // 0x170a1c: 0x0  nop
    ctx->pc = 0x170a1cu;
    // NOP
}
