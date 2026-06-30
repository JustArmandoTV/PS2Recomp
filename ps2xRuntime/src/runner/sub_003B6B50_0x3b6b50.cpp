#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6B50
// Address: 0x3b6b50 - 0x3b6bb0
void sub_003B6B50_0x3b6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6B50_0x3b6b50");
#endif

    switch (ctx->pc) {
        case 0x3b6b94u: goto label_3b6b94;
        case 0x3b6ba4u: goto label_3b6ba4;
        default: break;
    }

    ctx->pc = 0x3b6b50u;

    // 0x3b6b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b6b54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b6b5c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b6b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6b60: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3b6b60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3b6b64: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B6B64u;
    {
        const bool branch_taken_0x3b6b64 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B6B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6B64u;
            // 0x3b6b68: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b64) {
            ctx->pc = 0x3B6BA4u;
            goto label_3b6ba4;
        }
    }
    ctx->pc = 0x3B6B6Cu;
    // 0x3b6b6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6b70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3b6b74: 0x8c66e3b8  lw          $a2, -0x1C48($v1)
    ctx->pc = 0x3b6b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
    // 0x3b6b78: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3b6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x3b6b7c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b6b80: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x3b6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x3b6b84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B6B84u;
    {
        const bool branch_taken_0x3b6b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6b84) {
            ctx->pc = 0x3B6B9Cu;
            goto label_3b6b9c;
        }
    }
    ctx->pc = 0x3B6B8Cu;
    // 0x3b6b8c: 0xc055754  jal         func_155D50
    ctx->pc = 0x3B6B8Cu;
    SET_GPR_U32(ctx, 31, 0x3B6B94u);
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6B94u; }
        if (ctx->pc != 0x3B6B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6B94u; }
        if (ctx->pc != 0x3B6B94u) { return; }
    }
    ctx->pc = 0x3B6B94u;
label_3b6b94:
    // 0x3b6b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6B94u;
    {
        const bool branch_taken_0x3b6b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6B94u;
            // 0x3b6b98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6b94) {
            ctx->pc = 0x3B6BA8u;
            goto label_3b6ba8;
        }
    }
    ctx->pc = 0x3B6B9Cu;
label_3b6b9c:
    // 0x3b6b9c: 0xc055990  jal         func_156640
    ctx->pc = 0x3B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B6BA4u);
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6BA4u; }
        if (ctx->pc != 0x3B6BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6BA4u; }
        if (ctx->pc != 0x3B6BA4u) { return; }
    }
    ctx->pc = 0x3B6BA4u;
label_3b6ba4:
    // 0x3b6ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b6ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6ba8:
    // 0x3b6ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6BA8u;
            // 0x3b6bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6BB0u;
}
