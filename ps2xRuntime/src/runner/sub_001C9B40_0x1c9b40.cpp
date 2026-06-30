#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9B40
// Address: 0x1c9b40 - 0x1c9ba0
void sub_001C9B40_0x1c9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9B40_0x1c9b40");
#endif

    switch (ctx->pc) {
        case 0x1c9b70u: goto label_1c9b70;
        default: break;
    }

    ctx->pc = 0x1c9b40u;

    // 0x1c9b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b50: 0x2e030030  sltiu       $v1, $s0, 0x30
    ctx->pc = 0x1c9b50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9b54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b58: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9B58u;
    {
        const bool branch_taken_0x1c9b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B58u;
            // 0x1c9b5c: 0x36040a00  ori         $a0, $s0, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2560);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b58) {
            ctx->pc = 0x1C9B8Cu;
            goto label_1c9b8c;
        }
    }
    ctx->pc = 0x1C9B60u;
    // 0x1c9b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b68: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9B68u;
    SET_GPR_U32(ctx, 31, 0x1C9B70u);
    ctx->pc = 0x1C9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B68u;
            // 0x1c9b6c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B70u; }
        if (ctx->pc != 0x1C9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B70u; }
        if (ctx->pc != 0x1C9B70u) { return; }
    }
    ctx->pc = 0x1C9B70u;
label_1c9b70:
    // 0x1c9b70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9B70u;
    {
        const bool branch_taken_0x1c9b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b70) {
            ctx->pc = 0x1C9B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B70u;
            // 0x1c9b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B90u;
            goto label_1c9b90;
        }
    }
    ctx->pc = 0x1C9B78u;
    // 0x1c9b78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c9b7c: 0x8c64a70c  lw          $a0, -0x58F4($v1)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944524)));
    // 0x1c9b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b84: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1c9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c9b88: 0xa0830080  sb          $v1, 0x80($a0)
    ctx->pc = 0x1c9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 3));
label_1c9b8c:
    // 0x1c9b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9b90:
    // 0x1c9b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B94u;
            // 0x1c9b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9B9Cu;
    // 0x1c9b9c: 0x0  nop
    ctx->pc = 0x1c9b9cu;
    // NOP
}
