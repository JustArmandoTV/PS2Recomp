#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00441D50
// Address: 0x441d50 - 0x441da0
void sub_00441D50_0x441d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441D50_0x441d50");
#endif

    switch (ctx->pc) {
        case 0x441d94u: goto label_441d94;
        default: break;
    }

    ctx->pc = 0x441d50u;

    // 0x441d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x441d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x441d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x441d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x441d58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x441d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x441d5c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x441d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x441d60: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x441D60u;
    {
        const bool branch_taken_0x441d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x441d60) {
            ctx->pc = 0x441D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x441D60u;
            // 0x441d64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x441D98u;
            goto label_441d98;
        }
    }
    ctx->pc = 0x441D68u;
    // 0x441d68: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x441d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x441d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x441d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x441d70: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x441D70u;
    {
        const bool branch_taken_0x441d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x441d70) {
            ctx->pc = 0x441D8Cu;
            goto label_441d8c;
        }
    }
    ctx->pc = 0x441D78u;
    // 0x441d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x441d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x441d7c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x441D7Cu;
    {
        const bool branch_taken_0x441d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x441d7c) {
            ctx->pc = 0x441D8Cu;
            goto label_441d8c;
        }
    }
    ctx->pc = 0x441D84u;
    // 0x441d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x441D84u;
    {
        const bool branch_taken_0x441d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x441d84) {
            ctx->pc = 0x441D94u;
            goto label_441d94;
        }
    }
    ctx->pc = 0x441D8Cu;
label_441d8c:
    // 0x441d8c: 0xc110768  jal         func_441DA0
    ctx->pc = 0x441D8Cu;
    SET_GPR_U32(ctx, 31, 0x441D94u);
    ctx->pc = 0x441DA0u;
    if (runtime->hasFunction(0x441DA0u)) {
        auto targetFn = runtime->lookupFunction(0x441DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441D94u; }
        if (ctx->pc != 0x441D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441DA0_0x441da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x441D94u; }
        if (ctx->pc != 0x441D94u) { return; }
    }
    ctx->pc = 0x441D94u;
label_441d94:
    // 0x441d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x441d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_441d98:
    // 0x441d98: 0x3e00008  jr          $ra
    ctx->pc = 0x441D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x441D98u;
            // 0x441d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x441DA0u;
}
