#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173CA8
// Address: 0x173ca8 - 0x173cf8
void sub_00173CA8_0x173ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173CA8_0x173ca8");
#endif

    switch (ctx->pc) {
        case 0x173cc0u: goto label_173cc0;
        default: break;
    }

    ctx->pc = 0x173ca8u;

    // 0x173ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173cac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173CACu;
    {
        const bool branch_taken_0x173cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CACu;
            // 0x173cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cac) {
            ctx->pc = 0x173CC8u;
            goto label_173cc8;
        }
    }
    ctx->pc = 0x173CB4u;
    // 0x173cb4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173cb8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173CB8u;
    SET_GPR_U32(ctx, 31, 0x173CC0u);
    ctx->pc = 0x173CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173CB8u;
            // 0x173cbc: 0x248442d8  addiu       $a0, $a0, 0x42D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CC0u; }
        if (ctx->pc != 0x173CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173CC0u; }
        if (ctx->pc != 0x173CC0u) { return; }
    }
    ctx->pc = 0x173CC0u;
label_173cc0:
    // 0x173cc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173CC0u;
    {
        const bool branch_taken_0x173cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CC0u;
            // 0x173cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cc0) {
            ctx->pc = 0x173CE8u;
            goto label_173ce8;
        }
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x173ccc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x173cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173cd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x173CD0u;
    {
        const bool branch_taken_0x173cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173cd0) {
            ctx->pc = 0x173CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173CD0u;
            // 0x173cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173CE8u;
            goto label_173ce8;
        }
    }
    ctx->pc = 0x173CD8u;
    // 0x173cd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x173cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ce0: 0x805c0e8  j           func_1703A0
    ctx->pc = 0x173CE0u;
    ctx->pc = 0x173CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173CE0u;
            // 0x173ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1703A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x173CE8u;
label_173ce8:
    // 0x173ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173cec: 0x3e00008  jr          $ra
    ctx->pc = 0x173CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CECu;
            // 0x173cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173CF4u;
    // 0x173cf4: 0x0  nop
    ctx->pc = 0x173cf4u;
    // NOP
}
