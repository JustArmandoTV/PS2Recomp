#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139B70
// Address: 0x139b70 - 0x139bf0
void sub_00139B70_0x139b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139B70_0x139b70");
#endif

    switch (ctx->pc) {
        case 0x139b94u: goto label_139b94;
        case 0x139b9cu: goto label_139b9c;
        case 0x139bb4u: goto label_139bb4;
        default: break;
    }

    ctx->pc = 0x139b70u;

    // 0x139b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139b80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b84: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x139B84u;
    {
        const bool branch_taken_0x139b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B84u;
            // 0x139b88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b84) {
            ctx->pc = 0x139BD0u;
            goto label_139bd0;
        }
    }
    ctx->pc = 0x139B8Cu;
    // 0x139b8c: 0xc056260  jal         func_158980
    ctx->pc = 0x139B8Cu;
    SET_GPR_U32(ctx, 31, 0x139B94u);
    ctx->pc = 0x158980u;
    if (runtime->hasFunction(0x158980u)) {
        auto targetFn = runtime->lookupFunction(0x158980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B94u; }
        if (ctx->pc != 0x139B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158980_0x158980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B94u; }
        if (ctx->pc != 0x139B94u) { return; }
    }
    ctx->pc = 0x139B94u;
label_139b94:
    // 0x139b94: 0xc052630  jal         func_1498C0
    ctx->pc = 0x139B94u;
    SET_GPR_U32(ctx, 31, 0x139B9Cu);
    ctx->pc = 0x1498C0u;
    if (runtime->hasFunction(0x1498C0u)) {
        auto targetFn = runtime->lookupFunction(0x1498C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B9Cu; }
        if (ctx->pc != 0x139B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001498C0_0x1498c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139B9Cu; }
        if (ctx->pc != 0x139B9Cu) { return; }
    }
    ctx->pc = 0x139B9Cu;
label_139b9c:
    // 0x139b9c: 0x8f83801c  lw          $v1, -0x7FE4($gp)
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x139ba0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139BA0u;
    {
        const bool branch_taken_0x139ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ba0) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139BA8u;
    // 0x139ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x139ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bac: 0xc04e678  jal         func_1399E0
    ctx->pc = 0x139BACu;
    SET_GPR_U32(ctx, 31, 0x139BB4u);
    ctx->pc = 0x139BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139BACu;
            // 0x139bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1399E0u;
    if (runtime->hasFunction(0x1399E0u)) {
        auto targetFn = runtime->lookupFunction(0x1399E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139BB4u; }
        if (ctx->pc != 0x139BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001399E0_0x1399e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139BB4u; }
        if (ctx->pc != 0x139BB4u) { return; }
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139bb8: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x139bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x139bbc: 0xac714fc0  sw          $s1, 0x4FC0($v1)
    ctx->pc = 0x139bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20416), GPR_U32(ctx, 17));
    // 0x139bc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139bc4: 0xac644fc4  sw          $a0, 0x4FC4($v1)
    ctx->pc = 0x139bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20420), GPR_U32(ctx, 4));
    // 0x139bc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x139bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x139bcc: 0xac704fcc  sw          $s0, 0x4FCC($v1)
    ctx->pc = 0x139bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20428), GPR_U32(ctx, 16));
label_139bd0:
    // 0x139bd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x139BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BDCu;
            // 0x139be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139BE4u;
    // 0x139be4: 0x0  nop
    ctx->pc = 0x139be4u;
    // NOP
    // 0x139be8: 0x0  nop
    ctx->pc = 0x139be8u;
    // NOP
    // 0x139bec: 0x0  nop
    ctx->pc = 0x139becu;
    // NOP
}
