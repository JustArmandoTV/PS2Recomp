#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3440
// Address: 0x2a3440 - 0x2a34a0
void sub_002A3440_0x2a3440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3440_0x2a3440");
#endif

    switch (ctx->pc) {
        case 0x2a3470u: goto label_2a3470;
        default: break;
    }

    ctx->pc = 0x2a3440u;

    // 0x2a3440: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a3444: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a3444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3448: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3448u;
            // 0x2a344c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3450u;
    // 0x2a3450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3454: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a3454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3458: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3458u;
    {
        const bool branch_taken_0x2a3458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3458u;
            // 0x2a345c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3458) {
            ctx->pc = 0x2A3470u;
            goto label_2a3470;
        }
    }
    ctx->pc = 0x2A3460u;
    // 0x2a3460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a3460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a3464: 0x8c42e420  lw          $v0, -0x1BE0($v0)
    ctx->pc = 0x2a3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960160)));
    // 0x2a3468: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2A3468u;
    SET_GPR_U32(ctx, 31, 0x2A3470u);
    ctx->pc = 0x2A346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3468u;
            // 0x2a346c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3470u; }
        if (ctx->pc != 0x2A3470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3470u; }
        if (ctx->pc != 0x2A3470u) { return; }
    }
    ctx->pc = 0x2A3470u;
label_2a3470:
    // 0x2a3470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3474: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3474u;
            // 0x2a3478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A347Cu;
    // 0x2a347c: 0x0  nop
    ctx->pc = 0x2a347cu;
    // NOP
    // 0x2a3480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a3480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a3484: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a3484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3488: 0x8c42e420  lw          $v0, -0x1BE0($v0)
    ctx->pc = 0x2a3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960160)));
    // 0x2a348c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3490: 0x80fe54c  j           func_3F9530
    ctx->pc = 0x2A3490u;
    ctx->pc = 0x2A3494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3490u;
            // 0x2a3494: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F9530_0x3f9530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A3498u;
    // 0x2a3498: 0x0  nop
    ctx->pc = 0x2a3498u;
    // NOP
    // 0x2a349c: 0x0  nop
    ctx->pc = 0x2a349cu;
    // NOP
}
