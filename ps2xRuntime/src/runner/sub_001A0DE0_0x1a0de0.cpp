#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0DE0
// Address: 0x1a0de0 - 0x1a0e70
void sub_001A0DE0_0x1a0de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0DE0_0x1a0de0");
#endif

    switch (ctx->pc) {
        case 0x1a0e38u: goto label_1a0e38;
        default: break;
    }

    ctx->pc = 0x1a0de0u;

    // 0x1a0de0: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x1a0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x1a0de4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a0de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a0de8: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1a0de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a0dec: 0x3442952c  ori         $v0, $v0, 0x952C
    ctx->pc = 0x1a0decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38188);
    // 0x1a0df0: 0x34633c68  ori         $v1, $v1, 0x3C68
    ctx->pc = 0x1a0df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15464);
    // 0x1a0df4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a0df8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a0dfc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1a0e00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0e04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E0Cu;
            // 0x1a0e10: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0E14u;
    // 0x1a0e14: 0x0  nop
    ctx->pc = 0x1a0e14u;
    // NOP
    // 0x1a0e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0e1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a0e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0e24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e2c: 0x806839c  j           func_1A0E70
    ctx->pc = 0x1A0E2Cu;
    ctx->pc = 0x1A0E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E2Cu;
            // 0x1a0e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E70u;
    if (runtime->hasFunction(0x1A0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A0E70_0x1a0e70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0E34u;
    // 0x1a0e34: 0x0  nop
    ctx->pc = 0x1a0e34u;
    // NOP
label_1a0e38:
    // 0x1a0e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0e3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a0e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e4c: 0x806839c  j           func_1A0E70
    ctx->pc = 0x1A0E4Cu;
    ctx->pc = 0x1A0E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E4Cu;
            // 0x1a0e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E70u;
    if (runtime->hasFunction(0x1A0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A0E70_0x1a0e70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0E54u;
    // 0x1a0e54: 0x0  nop
    ctx->pc = 0x1a0e54u;
    // NOP
    // 0x1a0e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e64: 0x806838e  j           func_1A0E38
    ctx->pc = 0x1A0E64u;
    ctx->pc = 0x1A0E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E64u;
            // 0x1a0e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E38u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1a0e38;
    ctx->pc = 0x1A0E6Cu;
    // 0x1a0e6c: 0x0  nop
    ctx->pc = 0x1a0e6cu;
    // NOP
}
