#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186318
// Address: 0x186318 - 0x186368
void sub_00186318_0x186318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186318_0x186318");
#endif

    switch (ctx->pc) {
        case 0x186348u: goto label_186348;
        default: break;
    }

    ctx->pc = 0x186318u;

    // 0x186318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18631c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x186320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186324: 0x24504fb0  addiu       $s0, $v0, 0x4FB0
    ctx->pc = 0x186324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20400));
    // 0x186328: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x186328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18632c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18632Cu;
    {
        const bool branch_taken_0x18632c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18632Cu;
            // 0x186330: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18632c) {
            ctx->pc = 0x18634Cu;
            goto label_18634c;
        }
    }
    ctx->pc = 0x186334u;
    // 0x186334: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x186334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x186338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18633c: 0x24844fb8  addiu       $a0, $a0, 0x4FB8
    ctx->pc = 0x18633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20408));
    // 0x186340: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x186340u;
    SET_GPR_U32(ctx, 31, 0x186348u);
    ctx->pc = 0x186344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186340u;
            // 0x186344: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186348u; }
        if (ctx->pc != 0x186348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186348u; }
        if (ctx->pc != 0x186348u) { return; }
    }
    ctx->pc = 0x186348u;
label_186348:
    // 0x186348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x186348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18634c:
    // 0x18634c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x186350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186354: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x186354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x186358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18635c: 0x3e00008  jr          $ra
    ctx->pc = 0x18635Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18635Cu;
            // 0x186360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186364u;
    // 0x186364: 0x0  nop
    ctx->pc = 0x186364u;
    // NOP
}
