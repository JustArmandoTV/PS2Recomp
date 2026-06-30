#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D4A0
// Address: 0x15d4a0 - 0x15d500
void sub_0015D4A0_0x15d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D4A0_0x15d4a0");
#endif

    switch (ctx->pc) {
        case 0x15d4c8u: goto label_15d4c8;
        case 0x15d4ecu: goto label_15d4ec;
        default: break;
    }

    ctx->pc = 0x15d4a0u;

    // 0x15d4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15d4a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15d4b8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x15d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x15d4bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4c0: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x15D4C0u;
    SET_GPR_U32(ctx, 31, 0x15D4C8u);
    ctx->pc = 0x15D4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4C0u;
            // 0x15d4c4: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4C8u; }
        if (ctx->pc != 0x15D4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4C8u; }
        if (ctx->pc != 0x15D4C8u) { return; }
    }
    ctx->pc = 0x15D4C8u;
label_15d4c8:
    // 0x15d4c8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x15d4c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d4cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15d4d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15d4d4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15d4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15d4d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15d4dc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D4DCu;
    {
        const bool branch_taken_0x15d4dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d4dc) {
            ctx->pc = 0x15D4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15d4c8;
        }
    }
    ctx->pc = 0x15D4E4u;
    // 0x15d4e4: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x15D4E4u;
    SET_GPR_U32(ctx, 31, 0x15D4ECu);
    ctx->pc = 0x15D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4E4u;
            // 0x15d4e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4ECu; }
        if (ctx->pc != 0x15D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4ECu; }
        if (ctx->pc != 0x15D4ECu) { return; }
    }
    ctx->pc = 0x15D4ECu;
label_15d4ec:
    // 0x15d4ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4F8u;
            // 0x15d4fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D500u;
}
