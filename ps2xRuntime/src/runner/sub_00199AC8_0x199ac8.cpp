#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199AC8
// Address: 0x199ac8 - 0x199b10
void sub_00199AC8_0x199ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199AC8_0x199ac8");
#endif

    ctx->pc = 0x199ac8u;

    // 0x199ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199ad0: 0x8c820550  lw          $v0, 0x550($a0)
    ctx->pc = 0x199ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x199ad4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199AE8u;
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199ADCu;
    // 0x199adc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199ADCu;
    {
        const bool branch_taken_0x199adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199ADCu;
            // 0x199ae0: 0xac850550  sw          $a1, 0x550($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1360), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199adc) {
            ctx->pc = 0x199B00u;
            goto label_199b00;
        }
    }
    ctx->pc = 0x199AE4u;
    // 0x199ae4: 0x0  nop
    ctx->pc = 0x199ae4u;
    // NOP
label_199ae8:
    // 0x199ae8: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x199AE8u;
    {
        const bool branch_taken_0x199ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x199AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199AE8u;
            // 0x199aec: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ae8) {
            ctx->pc = 0x199B00u;
            goto label_199b00;
        }
    }
    ctx->pc = 0x199AF0u;
    // 0x199af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199af4: 0x24848c18  addiu       $a0, $a0, -0x73E8
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937624));
    // 0x199af8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x199AF8u;
    ctx->pc = 0x199AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AF8u;
            // 0x199afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x199B00u;
label_199b00:
    // 0x199b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199b04: 0x3e00008  jr          $ra
    ctx->pc = 0x199B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199B04u;
            // 0x199b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199B0Cu;
    // 0x199b0c: 0x0  nop
    ctx->pc = 0x199b0cu;
    // NOP
}
