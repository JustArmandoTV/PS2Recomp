#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238C20
// Address: 0x238c20 - 0x238cc0
void sub_00238C20_0x238c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C20_0x238c20");
#endif

    switch (ctx->pc) {
        case 0x238c54u: goto label_238c54;
        default: break;
    }

    ctx->pc = 0x238c20u;

    // 0x238c20: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x238c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x238c24: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x238c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x238c28: 0x43402a  slt         $t0, $v0, $v1
    ctx->pc = 0x238c28u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238c2c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x238c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x238c30: 0x51000002  beql        $t0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x238C30u;
    {
        const bool branch_taken_0x238c30 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c30) {
            ctx->pc = 0x238C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238C30u;
            // 0x238c34: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238C3Cu;
            goto label_238c3c;
        }
    }
    ctx->pc = 0x238C38u;
    // 0x238c38: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x238c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238c3c:
    // 0x238c3c: 0x24670060  addiu       $a3, $v1, 0x60
    ctx->pc = 0x238c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x238c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c44: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x238c48: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x238C48u;
    {
        const bool branch_taken_0x238c48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x238C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C48u;
            // 0x238c4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c48) {
            ctx->pc = 0x238C90u;
            goto label_238c90;
        }
    }
    ctx->pc = 0x238C50u;
    // 0x238c50: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x238c50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_238c54:
    // 0x238c54: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x238c58: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x238c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x238c5c: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x238C5Cu;
    {
        const bool branch_taken_0x238c5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x238c5c) {
            ctx->pc = 0x238C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238C5Cu;
            // 0x238c60: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238C80u;
            goto label_238c80;
        }
    }
    ctx->pc = 0x238C64u;
    // 0x238c64: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x238c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x238c68: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x238c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x238c6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x238C6Cu;
    {
        const bool branch_taken_0x238c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c6c) {
            ctx->pc = 0x238C7Cu;
            goto label_238c7c;
        }
    }
    ctx->pc = 0x238C74u;
    // 0x238c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238C74u;
    {
        const bool branch_taken_0x238c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C74u;
            // 0x238c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c74) {
            ctx->pc = 0x238C90u;
            goto label_238c90;
        }
    }
    ctx->pc = 0x238C7Cu;
label_238c7c:
    // 0x238c7c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x238c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_238c80:
    // 0x238c80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x238c80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x238c84: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x238c84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x238c88: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x238C88u;
    {
        const bool branch_taken_0x238c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C88u;
            // 0x238c8c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c88) {
            ctx->pc = 0x238C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238c54;
        }
    }
    ctx->pc = 0x238C90u;
label_238c90:
    // 0x238c90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x238c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x238c94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x238c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x238c98: 0x8182b  sltu        $v1, $zero, $t0
    ctx->pc = 0x238c98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x238c9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x238c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238ca0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x238ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x238ca4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x238CA4u;
    {
        const bool branch_taken_0x238ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238ca4) {
            ctx->pc = 0x238CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238CA4u;
            // 0x238ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238CACu;
            goto label_238cac;
        }
    }
    ctx->pc = 0x238CACu;
label_238cac:
    // 0x238cac: 0x3e00008  jr          $ra
    ctx->pc = 0x238CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CACu;
            // 0x238cb0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238CB4u;
    // 0x238cb4: 0x0  nop
    ctx->pc = 0x238cb4u;
    // NOP
    // 0x238cb8: 0x0  nop
    ctx->pc = 0x238cb8u;
    // NOP
    // 0x238cbc: 0x0  nop
    ctx->pc = 0x238cbcu;
    // NOP
}
