#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9D10
// Address: 0x3b9d10 - 0x3b9d80
void sub_003B9D10_0x3b9d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9D10_0x3b9d10");
#endif

    switch (ctx->pc) {
        case 0x3b9d50u: goto label_3b9d50;
        case 0x3b9d68u: goto label_3b9d68;
        default: break;
    }

    ctx->pc = 0x3b9d10u;

    // 0x3b9d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b9d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b9d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b9d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b9d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b9d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b9d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b9d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9d24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B9D24u;
    {
        const bool branch_taken_0x3b9d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D24u;
            // 0x3b9d28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d24) {
            ctx->pc = 0x3B9D68u;
            goto label_3b9d68;
        }
    }
    ctx->pc = 0x3B9D2Cu;
    // 0x3b9d2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b9d30: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3b9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3b9d34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9D34u;
    {
        const bool branch_taken_0x3b9d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D34u;
            // 0x3b9d38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d34) {
            ctx->pc = 0x3B9D50u;
            goto label_3b9d50;
        }
    }
    ctx->pc = 0x3B9D3Cu;
    // 0x3b9d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3b9d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9d44: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x3b9d48: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x3B9D48u;
    SET_GPR_U32(ctx, 31, 0x3B9D50u);
    ctx->pc = 0x3B9D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D48u;
            // 0x3b9d4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D50u; }
        if (ctx->pc != 0x3B9D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D50u; }
        if (ctx->pc != 0x3B9D50u) { return; }
    }
    ctx->pc = 0x3B9D50u;
label_3b9d50:
    // 0x3b9d50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3b9d54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b9d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b9d58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9D58u;
    {
        const bool branch_taken_0x3b9d58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b9d58) {
            ctx->pc = 0x3B9D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D58u;
            // 0x3b9d5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9D6Cu;
            goto label_3b9d6c;
        }
    }
    ctx->pc = 0x3B9D60u;
    // 0x3b9d60: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B9D60u;
    SET_GPR_U32(ctx, 31, 0x3B9D68u);
    ctx->pc = 0x3B9D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D60u;
            // 0x3b9d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D68u; }
        if (ctx->pc != 0x3B9D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D68u; }
        if (ctx->pc != 0x3B9D68u) { return; }
    }
    ctx->pc = 0x3B9D68u;
label_3b9d68:
    // 0x3b9d68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b9d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9d6c:
    // 0x3b9d6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b9d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b9d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b9d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9d78: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D78u;
            // 0x3b9d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9D80u;
}
