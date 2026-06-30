#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F990
// Address: 0x21f990 - 0x21fa00
void sub_0021F990_0x21f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F990_0x21f990");
#endif

    switch (ctx->pc) {
        case 0x21f9f4u: goto label_21f9f4;
        default: break;
    }

    ctx->pc = 0x21f990u;

    // 0x21f990: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x21f990u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x21f994: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x21f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21f998: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F998u;
    {
        const bool branch_taken_0x21f998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F998u;
            // 0x21f99c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f998) {
            ctx->pc = 0x21F9A4u;
            goto label_21f9a4;
        }
    }
    ctx->pc = 0x21F9A0u;
    // 0x21f9a0: 0xa0650013  sb          $a1, 0x13($v1)
    ctx->pc = 0x21f9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 5));
label_21f9a4:
    // 0x21f9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F9ACu;
    // 0x21f9ac: 0x0  nop
    ctx->pc = 0x21f9acu;
    // NOP
    // 0x21f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F9B8u;
    // 0x21f9b8: 0x0  nop
    ctx->pc = 0x21f9b8u;
    // NOP
    // 0x21f9bc: 0x0  nop
    ctx->pc = 0x21f9bcu;
    // NOP
    // 0x21f9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F9C8u;
    // 0x21f9c8: 0x0  nop
    ctx->pc = 0x21f9c8u;
    // NOP
    // 0x21f9cc: 0x0  nop
    ctx->pc = 0x21f9ccu;
    // NOP
    // 0x21f9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f9d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21f9dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F9DCu;
    {
        const bool branch_taken_0x21f9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9DCu;
            // 0x21f9e0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9dc) {
            ctx->pc = 0x21F9F4u;
            goto label_21f9f4;
        }
    }
    ctx->pc = 0x21F9E4u;
    // 0x21f9e4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x21f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21f9e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f9ec: 0xc08fb34  jal         func_23ECD0
    ctx->pc = 0x21F9ECu;
    SET_GPR_U32(ctx, 31, 0x21F9F4u);
    ctx->pc = 0x21F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9ECu;
            // 0x21f9f0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECD0u;
    if (runtime->hasFunction(0x23ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9F4u; }
        if (ctx->pc != 0x21F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECD0_0x23ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F9F4u; }
        if (ctx->pc != 0x21F9F4u) { return; }
    }
    ctx->pc = 0x21F9F4u;
label_21f9f4:
    // 0x21f9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9F8u;
            // 0x21f9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FA00u;
}
