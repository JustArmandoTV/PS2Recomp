#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A65C0
// Address: 0x1a65c0 - 0x1a6610
void sub_001A65C0_0x1a65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A65C0_0x1a65c0");
#endif

    switch (ctx->pc) {
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65f8u: goto label_1a65f8;
        default: break;
    }

    ctx->pc = 0x1a65c0u;

    // 0x1a65c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a65c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a65c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a65c8: 0xc069616  jal         func_1A5858
    ctx->pc = 0x1A65C8u;
    SET_GPR_U32(ctx, 31, 0x1A65D0u);
    ctx->pc = 0x1A65CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65C8u;
            // 0x1a65cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65D0u; }
        if (ctx->pc != 0x1A65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65D0u; }
        if (ctx->pc != 0x1A65D0u) { return; }
    }
    ctx->pc = 0x1A65D0u;
label_1a65d0:
    // 0x1a65d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a65d4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a65d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a65d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a65dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A65E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A65E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65E0u;
            // 0x1a65e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A65E8u;
    // 0x1a65e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a65ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a65ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a65f0: 0xc069610  jal         func_1A5840
    ctx->pc = 0x1A65F0u;
    SET_GPR_U32(ctx, 31, 0x1A65F8u);
    ctx->pc = 0x1A65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A65F0u;
            // 0x1a65f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5840u;
    if (runtime->hasFunction(0x1A5840u)) {
        auto targetFn = runtime->lookupFunction(0x1A5840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65F8u; }
        if (ctx->pc != 0x1A65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5840_0x1a5840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65F8u; }
        if (ctx->pc != 0x1A65F8u) { return; }
    }
    ctx->pc = 0x1A65F8u;
label_1a65f8:
    // 0x1a65f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a65fc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a6600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a6600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6604: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6608: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A660Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6608u;
            // 0x1a660c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6610u;
}
