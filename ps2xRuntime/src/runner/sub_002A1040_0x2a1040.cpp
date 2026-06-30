#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1040
// Address: 0x2a1040 - 0x2a10a0
void sub_002A1040_0x2a1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1040_0x2a1040");
#endif

    switch (ctx->pc) {
        case 0x2a1090u: goto label_2a1090;
        default: break;
    }

    ctx->pc = 0x2a1040u;

    // 0x2a1040: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a1044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a1044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a104c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x2a104cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1050: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x2a1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
    // 0x2a1054: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x2a1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
    // 0x2a1058: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x2a1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
    // 0x2a105c: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x2a105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
    // 0x2a1060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1060u;
    {
        const bool branch_taken_0x2a1060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1060u;
            // 0x2a1064: 0xffab0068  sd          $t3, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1060) {
            ctx->pc = 0x2A1070u;
            goto label_2a1070;
        }
    }
    ctx->pc = 0x2A1068u;
    // 0x2a1068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1068u;
    {
        const bool branch_taken_0x2a1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1068u;
            // 0x2a106c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1068) {
            ctx->pc = 0x2A107Cu;
            goto label_2a107c;
        }
    }
    ctx->pc = 0x2A1070u;
label_2a1070:
    // 0x2a1070: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1074: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1078: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2a107c:
    // 0x2a107c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x2a107cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a1080: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a1084: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2a1084u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2a1088: 0xc04c136  jal         func_1304D8
    ctx->pc = 0x2A1088u;
    SET_GPR_U32(ctx, 31, 0x2A1090u);
    ctx->pc = 0x2A108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1088u;
            // 0x2a108c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1090u; }
        if (ctx->pc != 0x2A1090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1090u; }
        if (ctx->pc != 0x2A1090u) { return; }
    }
    ctx->pc = 0x2A1090u;
label_2a1090:
    // 0x2a1090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1094: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1094u;
            // 0x2a1098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A109Cu;
    // 0x2a109c: 0x0  nop
    ctx->pc = 0x2a109cu;
    // NOP
}
