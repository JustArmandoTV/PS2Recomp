#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9CE0
// Address: 0x1b9ce0 - 0x1b9d58
void sub_001B9CE0_0x1b9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9CE0_0x1b9ce0");
#endif

    switch (ctx->pc) {
        case 0x1b9d10u: goto label_1b9d10;
        case 0x1b9d18u: goto label_1b9d18;
        case 0x1b9d34u: goto label_1b9d34;
        default: break;
    }

    ctx->pc = 0x1b9ce0u;

    // 0x1b9ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9ce8: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x1b9ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b9cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9cf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9cf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b9cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9cfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b9d00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b9d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b9d08: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1b9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1b9d0c: 0x0  nop
    ctx->pc = 0x1b9d0cu;
    // NOP
label_1b9d10:
    // 0x1b9d10: 0xc06e756  jal         func_1B9D58
    ctx->pc = 0x1B9D10u;
    SET_GPR_U32(ctx, 31, 0x1B9D18u);
    ctx->pc = 0x1B9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D10u;
            // 0x1b9d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D58u;
    if (runtime->hasFunction(0x1B9D58u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D18u; }
        if (ctx->pc != 0x1B9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9D58_0x1b9d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D18u; }
        if (ctx->pc != 0x1B9D18u) { return; }
    }
    ctx->pc = 0x1B9D18u;
label_1b9d18:
    // 0x1b9d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b9d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b9d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9d24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d28: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1b9d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b9d2c: 0xc0695e2  jal         func_1A5788
    ctx->pc = 0x1B9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D34u);
    ctx->pc = 0x1B9D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D2Cu;
            // 0x1b9d30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5788u;
    if (runtime->hasFunction(0x1A5788u)) {
        auto targetFn = runtime->lookupFunction(0x1A5788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D34u; }
        if (ctx->pc != 0x1B9D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5788_0x1a5788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D34u; }
        if (ctx->pc != 0x1B9D34u) { return; }
    }
    ctx->pc = 0x1B9D34u;
label_1b9d34:
    // 0x1b9d34: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1b9d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b9d38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B9D38u;
    {
        const bool branch_taken_0x1b9d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D38u;
            // 0x1b9d3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d38) {
            ctx->pc = 0x1B9D10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9d10;
        }
    }
    ctx->pc = 0x1B9D40u;
    // 0x1b9d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9d48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9d48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9d4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9d4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D50u;
            // 0x1b9d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9D58u;
}
