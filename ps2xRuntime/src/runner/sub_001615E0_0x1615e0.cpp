#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001615E0
// Address: 0x1615e0 - 0x161680
void sub_001615E0_0x1615e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001615E0_0x1615e0");
#endif

    switch (ctx->pc) {
        case 0x161610u: goto label_161610;
        case 0x161630u: goto label_161630;
        case 0x161664u: goto label_161664;
        default: break;
    }

    ctx->pc = 0x1615e0u;

    // 0x1615e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1615e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1615e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1615e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1615e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1615e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1615ec: 0x24705c60  addiu       $s0, $v1, 0x5C60
    ctx->pc = 0x1615ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23648));
    // 0x1615f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1615f4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1615F4u;
    {
        const bool branch_taken_0x1615f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1615F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615F4u;
            // 0x1615f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615f4) {
            ctx->pc = 0x161614u;
            goto label_161614;
        }
    }
    ctx->pc = 0x1615FCu;
    // 0x1615fc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1615fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x161600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161604: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x161604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x161608: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x161608u;
    SET_GPR_U32(ctx, 31, 0x161610u);
    ctx->pc = 0x16160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161608u;
            // 0x16160c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161610u; }
        if (ctx->pc != 0x161610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161610u; }
        if (ctx->pc != 0x161610u) { return; }
    }
    ctx->pc = 0x161610u;
label_161610:
    // 0x161610: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_161614:
    // 0x161614: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x161614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16161c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16161cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x161620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161624: 0x3e00008  jr          $ra
    ctx->pc = 0x161624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161624u;
            // 0x161628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16162Cu;
    // 0x16162c: 0x0  nop
    ctx->pc = 0x16162cu;
    // NOP
label_161630:
    // 0x161630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161634: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x161638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16163c: 0x24505c60  addiu       $s0, $v0, 0x5C60
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23648));
    // 0x161640: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161648: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x161648u;
    {
        const bool branch_taken_0x161648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161648u;
            // 0x16164c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161648) {
            ctx->pc = 0x161668u;
            goto label_161668;
        }
    }
    ctx->pc = 0x161650u;
    // 0x161650: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x161654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161658: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x16165c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16165Cu;
    SET_GPR_U32(ctx, 31, 0x161664u);
    ctx->pc = 0x161660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16165Cu;
            // 0x161660: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161664u; }
        if (ctx->pc != 0x161664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161664u; }
        if (ctx->pc != 0x161664u) { return; }
    }
    ctx->pc = 0x161664u;
label_161664:
    // 0x161664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_161668:
    // 0x161668: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16166c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161670: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x161670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x161674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161678: 0x3e00008  jr          $ra
    ctx->pc = 0x161678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16167Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161678u;
            // 0x16167c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161680u;
}
