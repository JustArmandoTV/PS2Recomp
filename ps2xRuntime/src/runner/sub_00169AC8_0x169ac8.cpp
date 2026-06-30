#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169AC8
// Address: 0x169ac8 - 0x169b00
void sub_00169AC8_0x169ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169AC8_0x169ac8");
#endif

    switch (ctx->pc) {
        case 0x169ae0u: goto label_169ae0;
        default: break;
    }

    ctx->pc = 0x169ac8u;

    // 0x169ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169acc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169ACCu;
    {
        const bool branch_taken_0x169acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169ACCu;
            // 0x169ad0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169acc) {
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169AD4u;
    // 0x169ad4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169ad8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x169AD8u;
    SET_GPR_U32(ctx, 31, 0x169AE0u);
    ctx->pc = 0x169ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AD8u;
            // 0x169adc: 0x24843710  addiu       $a0, $a0, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AE0u; }
        if (ctx->pc != 0x169AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169AE0u; }
        if (ctx->pc != 0x169AE0u) { return; }
    }
    ctx->pc = 0x169AE0u;
label_169ae0:
    // 0x169ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x169AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169AE8u;
            // 0x169aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169AF0u;
label_169af0:
    // 0x169af0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x169af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x169af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169af8: 0x805c2d2  j           func_170B48
    ctx->pc = 0x169AF8u;
    ctx->pc = 0x169AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169AF8u;
            // 0x169afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B48u;
    {
        auto targetFn = runtime->lookupFunction(0x170B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x169B00u;
}
