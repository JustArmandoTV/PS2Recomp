#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2B70
// Address: 0x3b2b70 - 0x3b2c00
void sub_003B2B70_0x3b2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2B70_0x3b2b70");
#endif

    switch (ctx->pc) {
        case 0x3b2ba8u: goto label_3b2ba8;
        case 0x3b2bc4u: goto label_3b2bc4;
        case 0x3b2be4u: goto label_3b2be4;
        default: break;
    }

    ctx->pc = 0x3b2b70u;

    // 0x3b2b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b2b74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b2b78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2b7c: 0x24638958  addiu       $v1, $v1, -0x76A8
    ctx->pc = 0x3b2b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936920));
    // 0x3b2b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b2b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b2b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b2b8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b2b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b2b94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b2b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2b98: 0xac83017c  sw          $v1, 0x17C($a0)
    ctx->pc = 0x3b2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 3));
    // 0x3b2b9c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b2b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ba0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3b2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3b2ba4: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x3b2ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
label_3b2ba8:
    // 0x3b2ba8: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x3b2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3b2bac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3b2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x3b2bb0: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x3b2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3b2bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b2bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2bb8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b2bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3b2bbc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3B2BBCu;
    SET_GPR_U32(ctx, 31, 0x3B2BC4u);
    ctx->pc = 0x3B2BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2BBCu;
            // 0x3b2bc0: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2BC4u; }
        if (ctx->pc != 0x3B2BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2BC4u; }
        if (ctx->pc != 0x3B2BC4u) { return; }
    }
    ctx->pc = 0x3B2BC4u;
label_3b2bc4:
    // 0x3b2bc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b2bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b2bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3b2bcc: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3b2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x3b2bd0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3b2bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b2bd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B2BD4u;
    {
        const bool branch_taken_0x3b2bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2BD4u;
            // 0x3b2bd8: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2bd4) {
            ctx->pc = 0x3B2BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b2ba8;
        }
    }
    ctx->pc = 0x3B2BDCu;
    // 0x3b2bdc: 0xc0ec9a4  jal         func_3B2690
    ctx->pc = 0x3B2BDCu;
    SET_GPR_U32(ctx, 31, 0x3B2BE4u);
    ctx->pc = 0x3B2BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2BDCu;
            // 0x3b2be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2690u;
    if (runtime->hasFunction(0x3B2690u)) {
        auto targetFn = runtime->lookupFunction(0x3B2690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2BE4u; }
        if (ctx->pc != 0x3B2BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2690_0x3b2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2BE4u; }
        if (ctx->pc != 0x3B2BE4u) { return; }
    }
    ctx->pc = 0x3B2BE4u;
label_3b2be4:
    // 0x3b2be4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b2be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2be8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b2becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b2bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2BF8u;
            // 0x3b2bfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B2C00u;
}
