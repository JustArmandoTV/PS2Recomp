#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C6A0
// Address: 0x15c6a0 - 0x15c700
void sub_0015C6A0_0x15c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C6A0_0x15c6a0");
#endif

    switch (ctx->pc) {
        case 0x15c6b4u: goto label_15c6b4;
        default: break;
    }

    ctx->pc = 0x15c6a0u;

    // 0x15c6a0: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15c6a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15C6A4u;
    {
        const bool branch_taken_0x15c6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c6a4) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C6ACu;
    // 0x15c6ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C6ACu;
    {
        const bool branch_taken_0x15c6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c6ac) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C6B4u;
label_15c6b4:
    // 0x15c6b4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15c6b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15c6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15c6bc: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x15c6c0: 0x0  nop
    ctx->pc = 0x15c6c0u;
    // NOP
    // 0x15c6c4: 0x0  nop
    ctx->pc = 0x15c6c4u;
    // NOP
    // 0x15c6c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C6C8u;
    {
        const bool branch_taken_0x15c6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c6c8) {
            ctx->pc = 0x15C6B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c6b4;
        }
    }
    ctx->pc = 0x15C6D0u;
label_15c6d0:
    // 0x15c6d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x15c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15c6d4: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x15c6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15c6d8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C6D8u;
    {
        const bool branch_taken_0x15c6d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x15C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6D8u;
            // 0x15c6dc: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6d8) {
            ctx->pc = 0x15C6E8u;
            goto label_15c6e8;
        }
    }
    ctx->pc = 0x15C6E0u;
    // 0x15c6e0: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x15c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x15c6e4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x15c6e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_15c6e8:
    // 0x15c6e8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x15c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x15c6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6ECu;
            // 0x15c6f0: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C6F4u;
    // 0x15c6f4: 0x0  nop
    ctx->pc = 0x15c6f4u;
    // NOP
    // 0x15c6f8: 0x0  nop
    ctx->pc = 0x15c6f8u;
    // NOP
    // 0x15c6fc: 0x0  nop
    ctx->pc = 0x15c6fcu;
    // NOP
}
