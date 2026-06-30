#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B24A0
// Address: 0x1b24a0 - 0x1b24e8
void sub_001B24A0_0x1b24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B24A0_0x1b24a0");
#endif

    ctx->pc = 0x1b24a0u;

    // 0x1b24a0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1b24a4: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x1b24a8: 0x8c44add4  lw          $a0, -0x522C($v0)
    ctx->pc = 0x1b24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946260)));
    // 0x1b24ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b24acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b24b0: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x1b24b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x1b24b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B24B4u;
    {
        const bool branch_taken_0x1b24b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24B4u;
            // 0x1b24b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24b4) {
            ctx->pc = 0x1B24D8u;
            goto label_1b24d8;
        }
    }
    ctx->pc = 0x1B24BCu;
    // 0x1b24bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b24c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b24c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24c8: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x1b24c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x1b24cc: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B24CCu;
    ctx->pc = 0x1B24D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24CCu;
            // 0x1b24d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B24D4u;
    // 0x1b24d4: 0x0  nop
    ctx->pc = 0x1b24d4u;
    // NOP
label_1b24d8:
    // 0x1b24d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B24DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24DCu;
            // 0x1b24e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B24E4u;
    // 0x1b24e4: 0x0  nop
    ctx->pc = 0x1b24e4u;
    // NOP
}
