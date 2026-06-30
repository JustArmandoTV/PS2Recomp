#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187728
// Address: 0x187728 - 0x187778
void sub_00187728_0x187728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187728_0x187728");
#endif

    switch (ctx->pc) {
        case 0x18775cu: goto label_18775c;
        default: break;
    }

    ctx->pc = 0x187728u;

    // 0x187728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18772c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x187730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187734: 0x24505d94  addiu       $s0, $v0, 0x5D94
    ctx->pc = 0x187734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23956));
    // 0x187738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18773c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x187740: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187744: 0x24635d90  addiu       $v1, $v1, 0x5D90
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23952));
    // 0x187748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18774c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18774Cu;
    {
        const bool branch_taken_0x18774c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18774Cu;
            // 0x187750: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18774c) {
            ctx->pc = 0x187764u;
            goto label_187764;
        }
    }
    ctx->pc = 0x187754u;
    // 0x187754: 0xc05f182  jal         func_17C608
    ctx->pc = 0x187754u;
    SET_GPR_U32(ctx, 31, 0x18775Cu);
    ctx->pc = 0x17C608u;
    if (runtime->hasFunction(0x17C608u)) {
        auto targetFn = runtime->lookupFunction(0x17C608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18775Cu; }
        if (ctx->pc != 0x18775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C608_0x17c608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18775Cu; }
        if (ctx->pc != 0x18775Cu) { return; }
    }
    ctx->pc = 0x18775Cu;
label_18775c:
    // 0x18775c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187760: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_187764:
    // 0x187764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187768: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187770: 0x3e00008  jr          $ra
    ctx->pc = 0x187770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187770u;
            // 0x187774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187778u;
}
