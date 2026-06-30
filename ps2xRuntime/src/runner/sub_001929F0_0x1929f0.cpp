#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001929F0
// Address: 0x1929f0 - 0x192a28
void sub_001929F0_0x1929f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001929F0_0x1929f0");
#endif

    switch (ctx->pc) {
        case 0x1929f0u: goto label_1929f0;
        case 0x1929f4u: goto label_1929f4;
        case 0x1929f8u: goto label_1929f8;
        case 0x1929fcu: goto label_1929fc;
        case 0x192a00u: goto label_192a00;
        case 0x192a04u: goto label_192a04;
        case 0x192a08u: goto label_192a08;
        case 0x192a0cu: goto label_192a0c;
        case 0x192a10u: goto label_192a10;
        case 0x192a14u: goto label_192a14;
        case 0x192a18u: goto label_192a18;
        case 0x192a1cu: goto label_192a1c;
        case 0x192a20u: goto label_192a20;
        case 0x192a24u: goto label_192a24;
        default: break;
    }

    ctx->pc = 0x1929f0u;

label_1929f0:
    // 0x1929f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1929f4:
    // 0x1929f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1929f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1929f8:
    // 0x1929f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1929f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1929fc:
    // 0x1929fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_192a00:
    if (ctx->pc == 0x192A00u) {
        ctx->pc = 0x192A00u;
            // 0x192a00: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x192A04u;
        goto label_192a04;
    }
    ctx->pc = 0x1929FCu;
    {
        const bool branch_taken_0x1929fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1929FCu;
            // 0x192a00: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929fc) {
            ctx->pc = 0x192A18u;
            goto label_192a18;
        }
    }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_192a08:
    // 0x192a08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_192a0c:
    if (ctx->pc == 0x192A0Cu) {
        ctx->pc = 0x192A0Cu;
            // 0x192a0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x192A10u;
        goto label_192a10;
    }
    ctx->pc = 0x192A08u;
    {
        const bool branch_taken_0x192a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a08) {
            ctx->pc = 0x192A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192A08u;
            // 0x192a0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192A1Cu;
            goto label_192a1c;
        }
    }
    ctx->pc = 0x192A10u;
label_192a10:
    // 0x192a10: 0x40f809  jalr        $v0
label_192a14:
    if (ctx->pc == 0x192A14u) {
        ctx->pc = 0x192A14u;
            // 0x192a14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x192A18u;
        goto label_192a18;
    }
    ctx->pc = 0x192A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192A18u);
        ctx->pc = 0x192A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A10u;
            // 0x192a14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192A18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192A18u; }
            if (ctx->pc != 0x192A18u) { return; }
        }
        }
    }
    ctx->pc = 0x192A18u;
label_192a18:
    // 0x192a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192a1c:
    // 0x192a1c: 0x3e00008  jr          $ra
label_192a20:
    if (ctx->pc == 0x192A20u) {
        ctx->pc = 0x192A20u;
            // 0x192a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x192A24u;
        goto label_192a24;
    }
    ctx->pc = 0x192A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192A1Cu;
            // 0x192a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192A24u;
label_192a24:
    // 0x192a24: 0x0  nop
    ctx->pc = 0x192a24u;
    // NOP
}
