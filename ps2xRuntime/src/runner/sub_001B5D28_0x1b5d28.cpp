#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5D28
// Address: 0x1b5d28 - 0x1b5d68
void sub_001B5D28_0x1b5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D28_0x1b5d28");
#endif

    switch (ctx->pc) {
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d54u: goto label_1b5d54;
        default: break;
    }

    ctx->pc = 0x1b5d28u;

    // 0x1b5d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5d30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b5d34: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5D34u;
    SET_GPR_U32(ctx, 31, 0x1B5D3Cu);
    ctx->pc = 0x1B5D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D34u;
            // 0x1b5d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D3Cu; }
        if (ctx->pc != 0x1B5D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D3Cu; }
        if (ctx->pc != 0x1B5D3Cu) { return; }
    }
    ctx->pc = 0x1B5D3Cu;
label_1b5d3c:
    // 0x1b5d3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b5d40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5D44u;
    {
        const bool branch_taken_0x1b5d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D44u;
            // 0x1b5d48: 0x34a50111  ori         $a1, $a1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)273);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d44) {
            ctx->pc = 0x1B5D54u;
            goto label_1b5d54;
        }
    }
    ctx->pc = 0x1B5D4Cu;
    // 0x1b5d4c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D54u);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D54u; }
        if (ctx->pc != 0x1B5D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D54u; }
        if (ctx->pc != 0x1B5D54u) { return; }
    }
    ctx->pc = 0x1B5D54u;
label_1b5d54:
    // 0x1b5d54: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1b5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b5d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5d5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D60u;
            // 0x1b5d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5D68u;
}
