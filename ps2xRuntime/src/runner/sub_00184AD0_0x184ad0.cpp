#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184AD0
// Address: 0x184ad0 - 0x184b20
void sub_00184AD0_0x184ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184AD0_0x184ad0");
#endif

    switch (ctx->pc) {
        case 0x184b00u: goto label_184b00;
        default: break;
    }

    ctx->pc = 0x184ad0u;

    // 0x184ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184ad4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x184ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x184ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184adc: 0x24500290  addiu       $s0, $v0, 0x290
    ctx->pc = 0x184adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x184ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184ae4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184AE4u;
    {
        const bool branch_taken_0x184ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184AE4u;
            // 0x184ae8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ae4) {
            ctx->pc = 0x184B04u;
            goto label_184b04;
        }
    }
    ctx->pc = 0x184AECu;
    // 0x184aec: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x184af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184af4: 0x24840298  addiu       $a0, $a0, 0x298
    ctx->pc = 0x184af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    // 0x184af8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x184AF8u;
    SET_GPR_U32(ctx, 31, 0x184B00u);
    ctx->pc = 0x184AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AF8u;
            // 0x184afc: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B00u; }
        if (ctx->pc != 0x184B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B00u; }
        if (ctx->pc != 0x184B00u) { return; }
    }
    ctx->pc = 0x184B00u;
label_184b00:
    // 0x184b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184b04:
    // 0x184b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184b0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x184b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x184b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b14: 0x3e00008  jr          $ra
    ctx->pc = 0x184B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B14u;
            // 0x184b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184B1Cu;
    // 0x184b1c: 0x0  nop
    ctx->pc = 0x184b1cu;
    // NOP
}
