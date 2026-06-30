#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1180
// Address: 0x2a1180 - 0x2a11b0
void sub_002A1180_0x2a1180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1180_0x2a1180");
#endif

    switch (ctx->pc) {
        case 0x2a11a4u: goto label_2a11a4;
        default: break;
    }

    ctx->pc = 0x2a1180u;

    // 0x2a1180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1184: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a1184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a118c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a1190: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1194: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2a1194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a1198: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a1198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2a119c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A119Cu;
    SET_GPR_U32(ctx, 31, 0x2A11A4u);
    ctx->pc = 0x2A11A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A119Cu;
            // 0x2a11a0: 0x2466000d  addiu       $a2, $v1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11A4u; }
        if (ctx->pc != 0x2A11A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11A4u; }
        if (ctx->pc != 0x2A11A4u) { return; }
    }
    ctx->pc = 0x2A11A4u;
label_2a11a4:
    // 0x2a11a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a11a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a11a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A11A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A11ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11A8u;
            // 0x2a11ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A11B0u;
}
