#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFB60
// Address: 0x1efb60 - 0x1efbc0
void sub_001EFB60_0x1efb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFB60_0x1efb60");
#endif

    switch (ctx->pc) {
        case 0x1efb7cu: goto label_1efb7c;
        case 0x1efb94u: goto label_1efb94;
        default: break;
    }

    ctx->pc = 0x1efb60u;

    // 0x1efb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efb68: 0x90860032  lbu         $a2, 0x32($a0)
    ctx->pc = 0x1efb68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x1efb6c: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1EFB6Cu;
    {
        const bool branch_taken_0x1efb6c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1EFB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB6Cu;
            // 0x1efb70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb6c) {
            ctx->pc = 0x1EFBA8u;
            goto label_1efba8;
        }
    }
    ctx->pc = 0x1EFB74u;
    // 0x1efb74: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1efb74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1efb78: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1efb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efb7c:
    // 0x1efb7c: 0x94e30036  lhu         $v1, 0x36($a3)
    ctx->pc = 0x1efb7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 54)));
    // 0x1efb80: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFB80u;
    {
        const bool branch_taken_0x1efb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1efb80) {
            ctx->pc = 0x1EFB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB80u;
            // 0x1efb84: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB9Cu;
            goto label_1efb9c;
        }
    }
    ctx->pc = 0x1EFB88u;
    // 0x1efb88: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1efb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb8c: 0xc097f24  jal         func_25FC90
    ctx->pc = 0x1EFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB94u);
    ctx->pc = 0x1EFB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB8Cu;
            // 0x1efb90: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FC90u;
    if (runtime->hasFunction(0x25FC90u)) {
        auto targetFn = runtime->lookupFunction(0x25FC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB94u; }
        if (ctx->pc != 0x1EFB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FC90_0x25fc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB94u; }
        if (ctx->pc != 0x1EFB94u) { return; }
    }
    ctx->pc = 0x1EFB94u;
label_1efb94:
    // 0x1efb94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFB94u;
    {
        const bool branch_taken_0x1efb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb94) {
            ctx->pc = 0x1EFBA8u;
            goto label_1efba8;
        }
    }
    ctx->pc = 0x1EFB9Cu;
label_1efb9c:
    // 0x1efb9c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1efba0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EFBA0u;
    {
        const bool branch_taken_0x1efba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBA0u;
            // 0x1efba4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efba0) {
            ctx->pc = 0x1EFB7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efb7c;
        }
    }
    ctx->pc = 0x1EFBA8u;
label_1efba8:
    // 0x1efba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efbac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBACu;
            // 0x1efbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFBB4u;
    // 0x1efbb4: 0x0  nop
    ctx->pc = 0x1efbb4u;
    // NOP
    // 0x1efbb8: 0x0  nop
    ctx->pc = 0x1efbb8u;
    // NOP
    // 0x1efbbc: 0x0  nop
    ctx->pc = 0x1efbbcu;
    // NOP
}
