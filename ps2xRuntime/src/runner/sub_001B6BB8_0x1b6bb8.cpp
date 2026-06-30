#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6BB8
// Address: 0x1b6bb8 - 0x1b6c38
void sub_001B6BB8_0x1b6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6BB8_0x1b6bb8");
#endif

    switch (ctx->pc) {
        case 0x1b6bd4u: goto label_1b6bd4;
        case 0x1b6be8u: goto label_1b6be8;
        case 0x1b6c08u: goto label_1b6c08;
        default: break;
    }

    ctx->pc = 0x1b6bb8u;

    // 0x1b6bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6bbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b6bc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b6bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b6bc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b6bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b6bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b6bcc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6BCCu;
    SET_GPR_U32(ctx, 31, 0x1B6BD4u);
    ctx->pc = 0x1B6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BCCu;
            // 0x1b6bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BD4u; }
        if (ctx->pc != 0x1B6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BD4u; }
        if (ctx->pc != 0x1B6BD4u) { return; }
    }
    ctx->pc = 0x1B6BD4u;
label_1b6bd4:
    // 0x1b6bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bd8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6BD8u;
    {
        const bool branch_taken_0x1b6bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BD8u;
            // 0x1b6bdc: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bd8) {
            ctx->pc = 0x1B6C24u;
            goto label_1b6c24;
        }
    }
    ctx->pc = 0x1B6BE0u;
    // 0x1b6be0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B6BE0u;
    SET_GPR_U32(ctx, 31, 0x1B6BE8u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE8u; }
        if (ctx->pc != 0x1B6BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BE8u; }
        if (ctx->pc != 0x1B6BE8u) { return; }
    }
    ctx->pc = 0x1B6BE8u;
label_1b6be8:
    // 0x1b6be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bf0: 0x24850d88  addiu       $a1, $a0, 0xD88
    ctx->pc = 0x1b6bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1b6bf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b6bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6bf8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6BF8u;
    {
        const bool branch_taken_0x1b6bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BF8u;
            // 0x1b6bfc: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bf8) {
            ctx->pc = 0x1B6C24u;
            goto label_1b6c24;
        }
    }
    ctx->pc = 0x1B6C00u;
    // 0x1b6c00: 0xc06dabc  jal         func_1B6AF0
    ctx->pc = 0x1B6C00u;
    SET_GPR_U32(ctx, 31, 0x1B6C08u);
    ctx->pc = 0x1B6AF0u;
    if (runtime->hasFunction(0x1B6AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C08u; }
        if (ctx->pc != 0x1B6C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6AF0_0x1b6af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6C08u; }
        if (ctx->pc != 0x1B6C08u) { return; }
    }
    ctx->pc = 0x1B6C08u;
label_1b6c08:
    // 0x1b6c08: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b6c0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c10: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6C10u;
    {
        const bool branch_taken_0x1b6c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c10) {
            ctx->pc = 0x1B6C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C10u;
            // 0x1b6c14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C18u;
            goto label_1b6c18;
        }
    }
    ctx->pc = 0x1B6C18u;
label_1b6c18:
    // 0x1b6c18: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1b6c18u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b6c1c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6c20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b6c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6c24:
    // 0x1b6c24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6c28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b6c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6C30u;
            // 0x1b6c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6C38u;
}
