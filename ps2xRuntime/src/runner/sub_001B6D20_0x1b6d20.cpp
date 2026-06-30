#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D20
// Address: 0x1b6d20 - 0x1b6d98
void sub_001B6D20_0x1b6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D20_0x1b6d20");
#endif

    switch (ctx->pc) {
        case 0x1b6d44u: goto label_1b6d44;
        default: break;
    }

    ctx->pc = 0x1b6d20u;

    // 0x1b6d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6d30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6d38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b6d3c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D44u);
    ctx->pc = 0x1B6D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D3Cu;
            // 0x1b6d40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D44u; }
        if (ctx->pc != 0x1B6D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6D44u; }
        if (ctx->pc != 0x1B6D44u) { return; }
    }
    ctx->pc = 0x1B6D44u;
label_1b6d44:
    // 0x1b6d44: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b6d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b6d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b6d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6D50u;
    {
        const bool branch_taken_0x1b6d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D50u;
            // 0x1b6d54: 0x34a50121  ori         $a1, $a1, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d50) {
            ctx->pc = 0x1B6D78u;
            goto label_1b6d78;
        }
    }
    ctx->pc = 0x1B6D58u;
    // 0x1b6d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6d64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6d6c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6D6Cu;
    ctx->pc = 0x1B6D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D6Cu;
            // 0x1b6d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6D74u;
    // 0x1b6d74: 0x0  nop
    ctx->pc = 0x1b6d74u;
    // NOP
label_1b6d78:
    // 0x1b6d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6d88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6d8c: 0x806db66  j           func_1B6D98
    ctx->pc = 0x1B6D8Cu;
    ctx->pc = 0x1B6D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D8Cu;
            // 0x1b6d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D98u;
    if (runtime->hasFunction(0x1B6D98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6D98_0x1b6d98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6D94u;
    // 0x1b6d94: 0x0  nop
    ctx->pc = 0x1b6d94u;
    // NOP
}
