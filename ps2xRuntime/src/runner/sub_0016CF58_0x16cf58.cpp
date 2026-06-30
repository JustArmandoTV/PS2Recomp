#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016CF58
// Address: 0x16cf58 - 0x16cfa8
void sub_0016CF58_0x16cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CF58_0x16cf58");
#endif

    switch (ctx->pc) {
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf98u: goto label_16cf98;
        default: break;
    }

    ctx->pc = 0x16cf58u;

    // 0x16cf58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16cf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cf5c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cf60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf64: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x16CF64u;
    {
        const bool branch_taken_0x16cf64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF64u;
            // 0x16cf68: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf64) {
            ctx->pc = 0x16CF98u;
            goto label_16cf98;
        }
    }
    ctx->pc = 0x16CF6Cu;
    // 0x16cf6c: 0xc043098  jal         func_10C260
    ctx->pc = 0x16CF6Cu;
    SET_GPR_U32(ctx, 31, 0x16CF74u);
    ctx->pc = 0x16CF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF6Cu;
            // 0x16cf70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF74u; }
        if (ctx->pc != 0x16CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF74u; }
        if (ctx->pc != 0x16CF74u) { return; }
    }
    ctx->pc = 0x16CF74u;
label_16cf74:
    // 0x16cf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cf7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cf80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CF80u;
    {
        const bool branch_taken_0x16cf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF80u;
            // 0x16cf84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf80) {
            ctx->pc = 0x16CF90u;
            goto label_16cf90;
        }
    }
    ctx->pc = 0x16CF88u;
    // 0x16cf88: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CF88u;
    {
        const bool branch_taken_0x16cf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CF88u;
            // 0x16cf8c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf88) {
            ctx->pc = 0x16CF9Cu;
            goto label_16cf9c;
        }
    }
    ctx->pc = 0x16CF90u;
label_16cf90:
    // 0x16cf90: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16CF90u;
    SET_GPR_U32(ctx, 31, 0x16CF98u);
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF98u; }
        if (ctx->pc != 0x16CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF98u; }
        if (ctx->pc != 0x16CF98u) { return; }
    }
    ctx->pc = 0x16CF98u;
label_16cf98:
    // 0x16cf98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16cf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16cf9c:
    // 0x16cf9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16cf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x16CFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16CFA0u;
            // 0x16cfa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CFA8u;
}
