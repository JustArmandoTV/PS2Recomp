#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CF08
// Address: 0x16cf08 - 0x16cf58
void sub_0016CF08_0x16cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CF08_0x16cf08");
#endif

    switch (ctx->pc) {
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf48u: goto label_16cf48;
        default: break;
    }

    ctx->pc = 0x16cf08u;

    // 0x16cf08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cf0c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cf10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf14: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x16CF14u;
    {
        const bool branch_taken_0x16cf14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF14u;
            // 0x16cf18: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf14) {
            ctx->pc = 0x16CF48u;
            goto label_16cf48;
        }
    }
    ctx->pc = 0x16CF1Cu;
    // 0x16cf1c: 0xc04309c  jal         func_10C270
    ctx->pc = 0x16CF1Cu;
    SET_GPR_U32(ctx, 31, 0x16CF24u);
    ctx->pc = 0x16CF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF1Cu;
            // 0x16cf20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C270u;
    if (runtime->hasFunction(0x10C270u)) {
        auto targetFn = runtime->lookupFunction(0x10C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF24u; }
        if (ctx->pc != 0x16CF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C270_0x10c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF24u; }
        if (ctx->pc != 0x16CF24u) { return; }
    }
    ctx->pc = 0x16CF24u;
label_16cf24:
    // 0x16cf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cf2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cf30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CF30u;
    {
        const bool branch_taken_0x16cf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16CF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF30u;
            // 0x16cf34: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf30) {
            ctx->pc = 0x16CF40u;
            goto label_16cf40;
        }
    }
    ctx->pc = 0x16CF38u;
    // 0x16cf38: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CF38u;
    {
        const bool branch_taken_0x16cf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF38u;
            // 0x16cf3c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf38) {
            ctx->pc = 0x16CF4Cu;
            goto label_16cf4c;
        }
    }
    ctx->pc = 0x16CF40u;
label_16cf40:
    // 0x16cf40: 0xc04348a  jal         func_10D228
    ctx->pc = 0x16CF40u;
    SET_GPR_U32(ctx, 31, 0x16CF48u);
    ctx->pc = 0x10D228u;
    if (runtime->hasFunction(0x10D228u)) {
        auto targetFn = runtime->lookupFunction(0x10D228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF48u; }
        if (ctx->pc != 0x16CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D228_0x10d228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF48u; }
        if (ctx->pc != 0x16CF48u) { return; }
    }
    ctx->pc = 0x16CF48u;
label_16cf48:
    // 0x16cf48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16cf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16cf4c:
    // 0x16cf4c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cf50: 0x3e00008  jr          $ra
    ctx->pc = 0x16CF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF50u;
            // 0x16cf54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CF58u;
}
