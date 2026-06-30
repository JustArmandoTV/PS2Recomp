#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D028
// Address: 0x16d028 - 0x16d088
void sub_0016D028_0x16d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D028_0x16d028");
#endif

    switch (ctx->pc) {
        case 0x16d04cu: goto label_16d04c;
        case 0x16d06cu: goto label_16d06c;
        default: break;
    }

    ctx->pc = 0x16d028u;

    // 0x16d028: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d02c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d034: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16d038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16d038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d03c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D03Cu;
    {
        const bool branch_taken_0x16d03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D03Cu;
            // 0x16d040: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d03c) {
            ctx->pc = 0x16D070u;
            goto label_16d070;
        }
    }
    ctx->pc = 0x16D044u;
    // 0x16d044: 0xc043098  jal         func_10C260
    ctx->pc = 0x16D044u;
    SET_GPR_U32(ctx, 31, 0x16D04Cu);
    ctx->pc = 0x16D048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D044u;
            // 0x16d048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D04Cu; }
        if (ctx->pc != 0x16D04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D04Cu; }
        if (ctx->pc != 0x16D04Cu) { return; }
    }
    ctx->pc = 0x16D04Cu;
label_16d04c:
    // 0x16d04c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d050: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d054: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D054u;
    {
        const bool branch_taken_0x16d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D054u;
            // 0x16d058: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d054) {
            ctx->pc = 0x16D070u;
            goto label_16d070;
        }
    }
    ctx->pc = 0x16D05Cu;
    // 0x16d05c: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D05Cu;
    {
        const bool branch_taken_0x16d05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16d05c) {
            ctx->pc = 0x16D060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D05Cu;
            // 0x16d060: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D074u;
            goto label_16d074;
        }
    }
    ctx->pc = 0x16D064u;
    // 0x16d064: 0xc0430b4  jal         func_10C2D0
    ctx->pc = 0x16D064u;
    SET_GPR_U32(ctx, 31, 0x16D06Cu);
    ctx->pc = 0x16D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D064u;
            // 0x16d068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C2D0u;
    if (runtime->hasFunction(0x10C2D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D06Cu; }
        if (ctx->pc != 0x16D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C2D0_0x10c2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D06Cu; }
        if (ctx->pc != 0x16D06Cu) { return; }
    }
    ctx->pc = 0x16D06Cu;
label_16d06c:
    // 0x16d06c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d070:
    // 0x16d070: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16d070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d074:
    // 0x16d074: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d078: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16d078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d07c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d080: 0x3e00008  jr          $ra
    ctx->pc = 0x16D080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D080u;
            // 0x16d084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D088u;
}
