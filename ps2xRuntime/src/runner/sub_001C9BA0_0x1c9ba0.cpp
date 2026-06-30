#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9BA0
// Address: 0x1c9ba0 - 0x1c9bf8
void sub_001C9BA0_0x1c9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9BA0_0x1c9ba0");
#endif

    switch (ctx->pc) {
        case 0x1c9bd0u: goto label_1c9bd0;
        default: break;
    }

    ctx->pc = 0x1c9ba0u;

    // 0x1c9ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9ba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bb0: 0x2e030030  sltiu       $v1, $s0, 0x30
    ctx->pc = 0x1c9bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9bb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9bb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9BB8u;
    {
        const bool branch_taken_0x1c9bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BB8u;
            // 0x1c9bbc: 0x36040700  ori         $a0, $s0, 0x700 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1792);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bb8) {
            ctx->pc = 0x1C9BE8u;
            goto label_1c9be8;
        }
    }
    ctx->pc = 0x1C9BC0u;
    // 0x1c9bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bc8: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9BC8u;
    SET_GPR_U32(ctx, 31, 0x1C9BD0u);
    ctx->pc = 0x1C9BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BC8u;
            // 0x1c9bcc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BD0u; }
        if (ctx->pc != 0x1C9BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BD0u; }
        if (ctx->pc != 0x1C9BD0u) { return; }
    }
    ctx->pc = 0x1C9BD0u;
label_1c9bd0:
    // 0x1c9bd0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9BD0u;
    {
        const bool branch_taken_0x1c9bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bd0) {
            ctx->pc = 0x1C9BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BD0u;
            // 0x1c9bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9BECu;
            goto label_1c9bec;
        }
    }
    ctx->pc = 0x1C9BD8u;
    // 0x1c9bd8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c9bdc: 0x8c83a70c  lw          $v1, -0x58F4($a0)
    ctx->pc = 0x1c9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944524)));
    // 0x1c9be0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1c9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c9be4: 0xa0600080  sb          $zero, 0x80($v1)
    ctx->pc = 0x1c9be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 128), (uint8_t)GPR_U32(ctx, 0));
label_1c9be8:
    // 0x1c9be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9bec:
    // 0x1c9bec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BF0u;
            // 0x1c9bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9BF8u;
}
