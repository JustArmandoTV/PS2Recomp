#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6C68
// Address: 0x1c6c68 - 0x1c6cd8
void sub_001C6C68_0x1c6c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6C68_0x1c6c68");
#endif

    switch (ctx->pc) {
        case 0x1c6c78u: goto label_1c6c78;
        case 0x1c6c90u: goto label_1c6c90;
        default: break;
    }

    ctx->pc = 0x1c6c68u;

    // 0x1c6c68: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c6c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6c6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C70u;
            // 0x1c6c74: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6CC8u;
            goto label_1c6cc8;
        }
    }
    ctx->pc = 0x1C6C78u;
label_1c6c78:
    // 0x1c6c78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c7c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6c80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6C80u;
    {
        const bool branch_taken_0x1c6c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C80u;
            // 0x1c6c84: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c80) {
            ctx->pc = 0x1C6CB4u;
            goto label_1c6cb4;
        }
    }
    ctx->pc = 0x1C6C88u;
    // 0x1c6c88: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1c6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c6c8c: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x1c6c8cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
label_1c6c90:
    // 0x1c6c90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c6c94: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1c6c98: 0x10e3000c  beq         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6C98u;
    {
        const bool branch_taken_0x1c6c98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C6C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C98u;
            // 0x1c6c9c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c98) {
            ctx->pc = 0x1C6CCCu;
            goto label_1c6ccc;
        }
    }
    ctx->pc = 0x1C6CA0u;
    // 0x1c6ca0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c6ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c6ca4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c6ca8: 0x0  nop
    ctx->pc = 0x1c6ca8u;
    // NOP
    // 0x1c6cac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C6CACu;
    {
        const bool branch_taken_0x1c6cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CACu;
            // 0x1c6cb0: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cac) {
            ctx->pc = 0x1C6C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6c90;
        }
    }
    ctx->pc = 0x1C6CB4u;
label_1c6cb4:
    // 0x1c6cb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c6cb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c6cbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6cc0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C6CC0u;
    {
        const bool branch_taken_0x1c6cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CC0u;
            // 0x1c6cc4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cc0) {
            ctx->pc = 0x1C6C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6c78;
        }
    }
    ctx->pc = 0x1C6CC8u;
label_1c6cc8:
    // 0x1c6cc8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1c6cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ccc:
    // 0x1c6ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6CD4u;
    // 0x1c6cd4: 0x0  nop
    ctx->pc = 0x1c6cd4u;
    // NOP
}
