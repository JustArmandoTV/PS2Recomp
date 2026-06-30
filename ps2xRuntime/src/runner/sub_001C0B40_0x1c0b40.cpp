#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0B40
// Address: 0x1c0b40 - 0x1c0b88
void sub_001C0B40_0x1c0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0B40_0x1c0b40");
#endif

    switch (ctx->pc) {
        case 0x1c0b70u: goto label_1c0b70;
        default: break;
    }

    ctx->pc = 0x1c0b40u;

    // 0x1c0b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0b50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0B50u;
    {
        const bool branch_taken_0x1c0b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B50u;
            // 0x1c0b54: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b50) {
            ctx->pc = 0x1C0B74u;
            goto label_1c0b74;
        }
    }
    ctx->pc = 0x1C0B58u;
    // 0x1c0b58: 0x86090036  lh          $t1, 0x36($s0)
    ctx->pc = 0x1c0b58u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1c0b5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0b60: 0x51230005  beql        $t1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0B60u;
    {
        const bool branch_taken_0x1c0b60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0b60) {
            ctx->pc = 0x1C0B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B60u;
            // 0x1c0b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B78u;
            goto label_1c0b78;
        }
    }
    ctx->pc = 0x1C0B68u;
    // 0x1c0b68: 0xc07028e  jal         func_1C0A38
    ctx->pc = 0x1C0B68u;
    SET_GPR_U32(ctx, 31, 0x1C0B70u);
    ctx->pc = 0x1C0A38u;
    if (runtime->hasFunction(0x1C0A38u)) {
        auto targetFn = runtime->lookupFunction(0x1C0A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B70u; }
        if (ctx->pc != 0x1C0B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0A38_0x1c0a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B70u; }
        if (ctx->pc != 0x1C0B70u) { return; }
    }
    ctx->pc = 0x1C0B70u;
label_1c0b70:
    // 0x1c0b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b74:
    // 0x1c0b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0b78:
    // 0x1c0b78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0B7Cu;
            // 0x1c0b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0B84u;
    // 0x1c0b84: 0x0  nop
    ctx->pc = 0x1c0b84u;
    // NOP
}
