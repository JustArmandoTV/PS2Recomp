#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EDF0
// Address: 0x15edf0 - 0x15ee40
void sub_0015EDF0_0x15edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EDF0_0x15edf0");
#endif

    switch (ctx->pc) {
        case 0x15ee30u: goto label_15ee30;
        default: break;
    }

    ctx->pc = 0x15edf0u;

    // 0x15edf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15edf4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x15edf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edf8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x15EDF8u;
    {
        const bool branch_taken_0x15edf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDF8u;
            // 0x15edfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15edf8) {
            ctx->pc = 0x15EE30u;
            goto label_15ee30;
        }
    }
    ctx->pc = 0x15EE00u;
    // 0x15ee00: 0x90a30030  lbu         $v1, 0x30($a1)
    ctx->pc = 0x15ee00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15ee04: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15EE04u;
    {
        const bool branch_taken_0x15ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ee04) {
            ctx->pc = 0x15EE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE04u;
            // 0x15ee08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EE34u;
            goto label_15ee34;
        }
    }
    ctx->pc = 0x15EE0Cu;
    // 0x15ee0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ee10: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15ee14: 0xa0a20030  sb          $v0, 0x30($a1)
    ctx->pc = 0x15ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ee18: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ee1c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x15ee20: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x15ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x15ee24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x15ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x15ee28: 0xc05824c  jal         func_160930
    ctx->pc = 0x15EE28u;
    SET_GPR_U32(ctx, 31, 0x15EE30u);
    ctx->pc = 0x15EE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE28u;
            // 0x15ee2c: 0x24e500f0  addiu       $a1, $a3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160930u;
    if (runtime->hasFunction(0x160930u)) {
        auto targetFn = runtime->lookupFunction(0x160930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE30u; }
        if (ctx->pc != 0x15EE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160930_0x160930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE30u; }
        if (ctx->pc != 0x15EE30u) { return; }
    }
    ctx->pc = 0x15EE30u;
label_15ee30:
    // 0x15ee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ee34:
    // 0x15ee34: 0x3e00008  jr          $ra
    ctx->pc = 0x15EE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE34u;
            // 0x15ee38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EE3Cu;
    // 0x15ee3c: 0x0  nop
    ctx->pc = 0x15ee3cu;
    // NOP
}
