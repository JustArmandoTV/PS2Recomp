#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F1E0
// Address: 0x15f1e0 - 0x15f220
void sub_0015F1E0_0x15f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F1E0_0x15f1e0");
#endif

    switch (ctx->pc) {
        case 0x15f204u: goto label_15f204;
        default: break;
    }

    ctx->pc = 0x15f1e0u;

    // 0x15f1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15f1e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15f1ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f1f4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x15f1f8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x15f1fc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F1FCu;
    SET_GPR_U32(ctx, 31, 0x15F204u);
    ctx->pc = 0x15F200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1FCu;
            // 0x15f200: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F204u; }
        if (ctx->pc != 0x15F204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F204u; }
        if (ctx->pc != 0x15F204u) { return; }
    }
    ctx->pc = 0x15F204u;
label_15f204:
    // 0x15f204: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x15f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15f208: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15f208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15f20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15f20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f210: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f214: 0x3e00008  jr          $ra
    ctx->pc = 0x15F214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F214u;
            // 0x15f218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F21Cu;
    // 0x15f21c: 0x0  nop
    ctx->pc = 0x15f21cu;
    // NOP
}
