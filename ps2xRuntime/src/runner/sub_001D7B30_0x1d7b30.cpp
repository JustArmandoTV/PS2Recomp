#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7B30
// Address: 0x1d7b30 - 0x1d7ba0
void sub_001D7B30_0x1d7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7B30_0x1d7b30");
#endif

    switch (ctx->pc) {
        case 0x1d7b54u: goto label_1d7b54;
        case 0x1d7b6cu: goto label_1d7b6c;
        default: break;
    }

    ctx->pc = 0x1d7b30u;

    // 0x1d7b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b44: 0xac850e00  sw          $a1, 0xE00($a0)
    ctx->pc = 0x1d7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3584), GPR_U32(ctx, 5));
    // 0x1d7b48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d7b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b4c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x1D7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B54u);
    ctx->pc = 0x1D7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B4Cu;
            // 0x1d7b50: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B54u; }
        if (ctx->pc != 0x1D7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B54u; }
        if (ctx->pc != 0x1D7B54u) { return; }
    }
    ctx->pc = 0x1D7B54u;
label_1d7b54:
    // 0x1d7b54: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d7b58: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1d7b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d7b5c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7B5Cu;
    {
        const bool branch_taken_0x1d7b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b5c) {
            ctx->pc = 0x1D7B78u;
            goto label_1d7b78;
        }
    }
    ctx->pc = 0x1D7B64u;
    // 0x1d7b64: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x1D7B64u;
    SET_GPR_U32(ctx, 31, 0x1D7B6Cu);
    ctx->pc = 0x1D7B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B64u;
            // 0x1d7b68: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B6Cu; }
        if (ctx->pc != 0x1D7B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B6Cu; }
        if (ctx->pc != 0x1D7B6Cu) { return; }
    }
    ctx->pc = 0x1D7B6Cu;
label_1d7b6c:
    // 0x1d7b6c: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d7b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7B70u;
    {
        const bool branch_taken_0x1d7b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B70u;
            // 0x1d7b74: 0xae230e00  sw          $v1, 0xE00($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b70) {
            ctx->pc = 0x1D7B84u;
            goto label_1d7b84;
        }
    }
    ctx->pc = 0x1D7B78u;
label_1d7b78:
    // 0x1d7b78: 0x6030003  bgezl       $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7B78u;
    {
        const bool branch_taken_0x1d7b78 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d7b78) {
            ctx->pc = 0x1D7B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B78u;
            // 0x1d7b7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B88u;
            goto label_1d7b88;
        }
    }
    ctx->pc = 0x1D7B80u;
    // 0x1d7b80: 0xae200e00  sw          $zero, 0xE00($s1)
    ctx->pc = 0x1d7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 0));
label_1d7b84:
    // 0x1d7b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7b88:
    // 0x1d7b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B90u;
            // 0x1d7b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7B98u;
    // 0x1d7b98: 0x0  nop
    ctx->pc = 0x1d7b98u;
    // NOP
    // 0x1d7b9c: 0x0  nop
    ctx->pc = 0x1d7b9cu;
    // NOP
}
