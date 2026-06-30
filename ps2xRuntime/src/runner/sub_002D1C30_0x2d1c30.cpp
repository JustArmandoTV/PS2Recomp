#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1C30
// Address: 0x2d1c30 - 0x2d1d00
void sub_002D1C30_0x2d1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C30_0x2d1c30");
#endif

    switch (ctx->pc) {
        case 0x2d1c40u: goto label_2d1c40;
        case 0x2d1c78u: goto label_2d1c78;
        case 0x2d1cd0u: goto label_2d1cd0;
        default: break;
    }

    ctx->pc = 0x2d1c30u;

    // 0x2d1c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C30u;
            // 0x2d1c34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1C38u;
    // 0x2d1c38: 0x0  nop
    ctx->pc = 0x2d1c38u;
    // NOP
    // 0x2d1c3c: 0x0  nop
    ctx->pc = 0x2d1c3cu;
    // NOP
label_2d1c40:
    // 0x2d1c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1c44: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d1c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1c4c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x2d1c4cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d1c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1c54: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d1c54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c58: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x2d1c58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d1c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c60: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x2d1c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2d1c64: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1C64u;
    {
        const bool branch_taken_0x2d1c64 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C64u;
            // 0x2d1c68: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c64) {
            ctx->pc = 0x2D1CA8u;
            goto label_2d1ca8;
        }
    }
    ctx->pc = 0x2D1C6Cu;
    // 0x2d1c6c: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2d1c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1c70: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d1c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c74: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_2d1c78:
    // 0x2d1c78: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x2d1c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d1c7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1C7Cu;
    {
        const bool branch_taken_0x2d1c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C7Cu;
            // 0x2d1c80: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c7c) {
            ctx->pc = 0x2D1C90u;
            goto label_2d1c90;
        }
    }
    ctx->pc = 0x2D1C84u;
    // 0x2d1c84: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d1c88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1C88u;
    {
        const bool branch_taken_0x2d1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C88u;
            // 0x2d1c8c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c88) {
            ctx->pc = 0x2D1CA0u;
            goto label_2d1ca0;
        }
    }
    ctx->pc = 0x2D1C90u;
label_2d1c90:
    // 0x2d1c90: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d1c90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c94: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x2d1c94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2d1c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ca0:
    // 0x2d1ca0: 0x5540fff5  bnel        $t2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D1CA0u;
    {
        const bool branch_taken_0x2d1ca0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ca0) {
            ctx->pc = 0x2D1CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CA0u;
            // 0x2d1ca4: 0x8d44000c  lw          $a0, 0xC($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1c78;
        }
    }
    ctx->pc = 0x2D1CA8u;
label_2d1ca8:
    // 0x2d1ca8: 0x51800007  beql        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1CA8u;
    {
        const bool branch_taken_0x2d1ca8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ca8) {
            ctx->pc = 0x2D1CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CA8u;
            // 0x2d1cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1CC8u;
            goto label_2d1cc8;
        }
    }
    ctx->pc = 0x2D1CB0u;
    // 0x2d1cb0: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2d1cb4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d1cb8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d1cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d1cbc: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1CBCu;
    {
        const bool branch_taken_0x2d1cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cbc) {
            ctx->pc = 0x2D1CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CBCu;
            // 0x2d1cc0: 0xae0c0000  sw          $t4, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1CE4u;
            goto label_2d1ce4;
        }
    }
    ctx->pc = 0x2D1CC4u;
    // 0x2d1cc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1cc8:
    // 0x2d1cc8: 0xc0b6374  jal         func_2D8DD0
    ctx->pc = 0x2D1CC8u;
    SET_GPR_U32(ctx, 31, 0x2D1CD0u);
    ctx->pc = 0x2D1CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CC8u;
            // 0x2d1ccc: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DD0u;
    if (runtime->hasFunction(0x2D8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CD0u; }
        if (ctx->pc != 0x2D1CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8DD0_0x2d8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1CD0u; }
        if (ctx->pc != 0x2D1CD0u) { return; }
    }
    ctx->pc = 0x2D1CD0u;
label_2d1cd0:
    // 0x2d1cd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d1cd4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d1cd8: 0x9063e380  lbu         $v1, -0x1C80($v1)
    ctx->pc = 0x2d1cd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960000)));
    // 0x2d1cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1CDCu;
    {
        const bool branch_taken_0x2d1cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CDCu;
            // 0x2d1ce0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cdc) {
            ctx->pc = 0x2D1CF0u;
            goto label_2d1cf0;
        }
    }
    ctx->pc = 0x2D1CE4u;
label_2d1ce4:
    // 0x2d1ce4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d1ce8: 0x9063e388  lbu         $v1, -0x1C78($v1)
    ctx->pc = 0x2d1ce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x2d1cec: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2d1cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_2d1cf0:
    // 0x2d1cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1CF8u;
            // 0x2d1cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1D00u;
}
