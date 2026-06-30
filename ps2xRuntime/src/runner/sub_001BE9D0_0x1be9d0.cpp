#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE9D0
// Address: 0x1be9d0 - 0x1bea68
void sub_001BE9D0_0x1be9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE9D0_0x1be9d0");
#endif

    switch (ctx->pc) {
        case 0x1be9e8u: goto label_1be9e8;
        case 0x1bea0cu: goto label_1bea0c;
        case 0x1bea28u: goto label_1bea28;
        case 0x1bea40u: goto label_1bea40;
        case 0x1bea48u: goto label_1bea48;
        case 0x1bea50u: goto label_1bea50;
        case 0x1bea58u: goto label_1bea58;
        case 0x1bea60u: goto label_1bea60;
        default: break;
    }

    ctx->pc = 0x1be9d0u;

    // 0x1be9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be9d8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1be9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1be9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9e0: 0x806f566  j           func_1BD598
    ctx->pc = 0x1BE9E0u;
    ctx->pc = 0x1BE9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9E0u;
            // 0x1be9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD598u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE9E8u;
label_1be9e8:
    // 0x1be9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be9ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1be9ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1be9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be9f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1be9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1be9fc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1be9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bea00: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bea00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bea04: 0xc06f56e  jal         func_1BD5B8
    ctx->pc = 0x1BEA04u;
    SET_GPR_U32(ctx, 31, 0x1BEA0Cu);
    ctx->pc = 0x1BEA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA04u;
            // 0x1bea08: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD5B8u;
    if (runtime->hasFunction(0x1BD5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1BD5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA0Cu; }
        if (ctx->pc != 0x1BEA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD5B8_0x1bd5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEA0Cu; }
        if (ctx->pc != 0x1BEA0Cu) { return; }
    }
    ctx->pc = 0x1BEA0Cu;
label_1bea0c:
    // 0x1bea0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bea14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bea14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bea18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea1c: 0x806fa1c  j           func_1BE870
    ctx->pc = 0x1BEA1Cu;
    ctx->pc = 0x1BEA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA1Cu;
            // 0x1bea20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE870u;
    if (runtime->hasFunction(0x1BE870u)) {
        auto targetFn = runtime->lookupFunction(0x1BE870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE870_0x1be870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEA24u;
    // 0x1bea24: 0x0  nop
    ctx->pc = 0x1bea24u;
    // NOP
label_1bea28:
    // 0x1bea28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bea2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bea30: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1bea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1bea34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bea34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bea38: 0x806f574  j           func_1BD5D0
    ctx->pc = 0x1BEA38u;
    ctx->pc = 0x1BEA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA38u;
            // 0x1bea3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD5D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BEA40u;
label_1bea40:
    // 0x1bea40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA40u;
            // 0x1bea44: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA48u;
label_1bea48:
    // 0x1bea48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA48u;
            // 0x1bea4c: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA50u;
label_1bea50:
    // 0x1bea50: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA50u;
            // 0x1bea54: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA58u;
label_1bea58:
    // 0x1bea58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA58u;
            // 0x1bea5c: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA60u;
label_1bea60:
    // 0x1bea60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEA60u;
            // 0x1bea64: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEA68u;
}
