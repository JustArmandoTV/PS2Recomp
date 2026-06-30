#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A11B0
// Address: 0x2a11b0 - 0x2a1210
void sub_002A11B0_0x2a11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A11B0_0x2a11b0");
#endif

    switch (ctx->pc) {
        case 0x2a11e8u: goto label_2a11e8;
        default: break;
    }

    ctx->pc = 0x2a11b0u;

    // 0x2a11b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a11b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a11b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a11b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a11bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a11bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a11c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a11c4: 0x2a210033  slti        $at, $s1, 0x33
    ctx->pc = 0x2a11c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x2a11c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A11C8u;
    {
        const bool branch_taken_0x2a11c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A11CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11C8u;
            // 0x2a11cc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a11c8) {
            ctx->pc = 0x2A11D4u;
            goto label_2a11d4;
        }
    }
    ctx->pc = 0x2A11D0u;
    // 0x2a11d0: 0x24100033  addiu       $s0, $zero, 0x33
    ctx->pc = 0x2a11d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_2a11d4:
    // 0x2a11d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a11d8: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x2a11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x2a11dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2a11e0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2A11E0u;
    SET_GPR_U32(ctx, 31, 0x2A11E8u);
    ctx->pc = 0x2A11E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11E0u;
            // 0x2a11e4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11E8u; }
        if (ctx->pc != 0x2A11E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11E8u; }
        if (ctx->pc != 0x2A11E8u) { return; }
    }
    ctx->pc = 0x2A11E8u;
label_2a11e8:
    // 0x2a11e8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2a11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a11ec: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2a11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2a11f0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a11f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a11f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a11f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a11f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a11fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a11fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1200: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1200u;
            // 0x2a1204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1208u;
    // 0x2a1208: 0x0  nop
    ctx->pc = 0x2a1208u;
    // NOP
    // 0x2a120c: 0x0  nop
    ctx->pc = 0x2a120cu;
    // NOP
}
