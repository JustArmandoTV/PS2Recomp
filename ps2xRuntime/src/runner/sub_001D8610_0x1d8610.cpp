#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8610
// Address: 0x1d8610 - 0x1d8670
void sub_001D8610_0x1d8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8610_0x1d8610");
#endif

    switch (ctx->pc) {
        case 0x1d8630u: goto label_1d8630;
        case 0x1d864cu: goto label_1d864c;
        default: break;
    }

    ctx->pc = 0x1d8610u;

    // 0x1d8610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d861c: 0x8c831148  lw          $v1, 0x1148($a0)
    ctx->pc = 0x1d861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4424)));
    // 0x1d8620: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D8620u;
    {
        const bool branch_taken_0x1d8620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8620u;
            // 0x1d8624: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8620) {
            ctx->pc = 0x1D865Cu;
            goto label_1d865c;
        }
    }
    ctx->pc = 0x1D8628u;
    // 0x1d8628: 0xc040180  jal         func_100600
    ctx->pc = 0x1D8628u;
    SET_GPR_U32(ctx, 31, 0x1D8630u);
    ctx->pc = 0x1D862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8628u;
            // 0x1d862c: 0x24040e50  addiu       $a0, $zero, 0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8630u; }
        if (ctx->pc != 0x1D8630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8630u; }
        if (ctx->pc != 0x1D8630u) { return; }
    }
    ctx->pc = 0x1D8630u;
label_1d8630:
    // 0x1d8630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8634: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8634u;
    {
        const bool branch_taken_0x1d8634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8634) {
            ctx->pc = 0x1D8638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8634u;
            // 0x1d8638: 0xae041148  sw          $a0, 0x1148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8654u;
            goto label_1d8654;
        }
    }
    ctx->pc = 0x1D863Cu;
    // 0x1d863c: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x1d8640: 0x8e060d98  lw          $a2, 0xD98($s0)
    ctx->pc = 0x1d8640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x1d8644: 0xc0fd5b4  jal         func_3F56D0
    ctx->pc = 0x1D8644u;
    SET_GPR_U32(ctx, 31, 0x1D864Cu);
    ctx->pc = 0x1D8648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8644u;
            // 0x1d8648: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F56D0u;
    if (runtime->hasFunction(0x3F56D0u)) {
        auto targetFn = runtime->lookupFunction(0x3F56D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D864Cu; }
        if (ctx->pc != 0x1D864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F56D0_0x3f56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D864Cu; }
        if (ctx->pc != 0x1D864Cu) { return; }
    }
    ctx->pc = 0x1D864Cu;
label_1d864c:
    // 0x1d864c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8650: 0xae041148  sw          $a0, 0x1148($s0)
    ctx->pc = 0x1d8650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4424), GPR_U32(ctx, 4));
label_1d8654:
    // 0x1d8654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8658: 0xa083005c  sb          $v1, 0x5C($a0)
    ctx->pc = 0x1d8658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 3));
label_1d865c:
    // 0x1d865c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8664: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8664u;
            // 0x1d8668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D866Cu;
    // 0x1d866c: 0x0  nop
    ctx->pc = 0x1d866cu;
    // NOP
}
