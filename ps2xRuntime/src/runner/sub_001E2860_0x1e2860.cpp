#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2860
// Address: 0x1e2860 - 0x1e28b0
void sub_001E2860_0x1e2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2860_0x1e2860");
#endif

    switch (ctx->pc) {
        case 0x1e28a4u: goto label_1e28a4;
        default: break;
    }

    ctx->pc = 0x1e2860u;

    // 0x1e2860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2864: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e2864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e286c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e286cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e2870: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1e2870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e2874: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e2874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e2878: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2878u;
    {
        const bool branch_taken_0x1e2878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2878) {
            ctx->pc = 0x1E287Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2878u;
            // 0x1e287c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E28A8u;
            goto label_1e28a8;
        }
    }
    ctx->pc = 0x1E2880u;
    // 0x1e2880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e2884: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2888: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e2888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e288c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e288cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e2890: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e2894: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e2894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1e2898: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x1e289c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E289Cu;
    SET_GPR_U32(ctx, 31, 0x1E28A4u);
    ctx->pc = 0x1E28A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E289Cu;
            // 0x1e28a0: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28A4u; }
        if (ctx->pc != 0x1E28A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28A4u; }
        if (ctx->pc != 0x1E28A4u) { return; }
    }
    ctx->pc = 0x1E28A4u;
label_1e28a4:
    // 0x1e28a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e28a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e28a8:
    // 0x1e28a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E28A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E28ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28A8u;
            // 0x1e28ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E28B0u;
}
