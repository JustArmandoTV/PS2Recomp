#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231B70
// Address: 0x231b70 - 0x231bc0
void sub_00231B70_0x231b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B70_0x231b70");
#endif

    switch (ctx->pc) {
        case 0x231b98u: goto label_231b98;
        case 0x231ba8u: goto label_231ba8;
        default: break;
    }

    ctx->pc = 0x231b70u;

    // 0x231b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231b78: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x231b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x231b7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231B7Cu;
    {
        const bool branch_taken_0x231b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231b7c) {
            ctx->pc = 0x231BA0u;
            goto label_231ba0;
        }
    }
    ctx->pc = 0x231B84u;
    // 0x231b84: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x231b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x231b88: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x231b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x231b8c: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x231b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x231b90: 0xc08d1cc  jal         func_234730
    ctx->pc = 0x231B90u;
    SET_GPR_U32(ctx, 31, 0x231B98u);
    ctx->pc = 0x231B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231B90u;
            // 0x231b94: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B98u; }
        if (ctx->pc != 0x231B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231B98u; }
        if (ctx->pc != 0x231B98u) { return; }
    }
    ctx->pc = 0x231B98u;
label_231b98:
    // 0x231b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231B98u;
    {
        const bool branch_taken_0x231b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231B98u;
            // 0x231b9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231b98) {
            ctx->pc = 0x231BACu;
            goto label_231bac;
        }
    }
    ctx->pc = 0x231BA0u;
label_231ba0:
    // 0x231ba0: 0xc08c6f0  jal         func_231BC0
    ctx->pc = 0x231BA0u;
    SET_GPR_U32(ctx, 31, 0x231BA8u);
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BA8u; }
        if (ctx->pc != 0x231BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BA8u; }
        if (ctx->pc != 0x231BA8u) { return; }
    }
    ctx->pc = 0x231BA8u;
label_231ba8:
    // 0x231ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231bac:
    // 0x231bac: 0x3e00008  jr          $ra
    ctx->pc = 0x231BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BACu;
            // 0x231bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231BB4u;
    // 0x231bb4: 0x0  nop
    ctx->pc = 0x231bb4u;
    // NOP
    // 0x231bb8: 0x0  nop
    ctx->pc = 0x231bb8u;
    // NOP
    // 0x231bbc: 0x0  nop
    ctx->pc = 0x231bbcu;
    // NOP
}
