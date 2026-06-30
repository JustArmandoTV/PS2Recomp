#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334C10
// Address: 0x334c10 - 0x334c80
void sub_00334C10_0x334c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334C10_0x334c10");
#endif

    switch (ctx->pc) {
        case 0x334c24u: goto label_334c24;
        default: break;
    }

    ctx->pc = 0x334c10u;

    // 0x334c10: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x334c10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x334c14: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x334C14u;
    {
        const bool branch_taken_0x334c14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334C14u;
            // 0x334c18: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c14) {
            ctx->pc = 0x334C50u;
            goto label_334c50;
        }
    }
    ctx->pc = 0x334C1Cu;
    // 0x334c1c: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x334c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x334c20: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x334c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_334c24:
    // 0x334c24: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x334c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x334c28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334C28u;
    {
        const bool branch_taken_0x334c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334c28) {
            ctx->pc = 0x334C40u;
            goto label_334c40;
        }
    }
    ctx->pc = 0x334C30u;
    // 0x334c30: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x334c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334C34u;
    {
        const bool branch_taken_0x334c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334C34u;
            // 0x334c38: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c34) {
            ctx->pc = 0x334C48u;
            goto label_334c48;
        }
    }
    ctx->pc = 0x334C3Cu;
    // 0x334c3c: 0x0  nop
    ctx->pc = 0x334c3cu;
    // NOP
label_334c40:
    // 0x334c40: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x334c40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x334c44: 0x0  nop
    ctx->pc = 0x334c44u;
    // NOP
label_334c48:
    // 0x334c48: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x334C48u;
    {
        const bool branch_taken_0x334c48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x334c48) {
            ctx->pc = 0x334C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334C48u;
            // 0x334c4c: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334c24;
        }
    }
    ctx->pc = 0x334C50u;
label_334c50:
    // 0x334c50: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x334c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x334c54: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x334C54u;
    {
        const bool branch_taken_0x334c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x334c54) {
            ctx->pc = 0x334C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334C54u;
            // 0x334c58: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334C74u;
            goto label_334c74;
        }
    }
    ctx->pc = 0x334C5Cu;
    // 0x334c5c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x334c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x334c60: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x334c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x334c64: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x334c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x334c68: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x334C68u;
    {
        const bool branch_taken_0x334c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334c68) {
            ctx->pc = 0x334C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334C68u;
            // 0x334c6c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334C78u;
            goto label_334c78;
        }
    }
    ctx->pc = 0x334C70u;
    // 0x334c70: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x334c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_334c74:
    // 0x334c74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x334c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_334c78:
    // 0x334c78: 0x3e00008  jr          $ra
    ctx->pc = 0x334C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334C80u;
}
