#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329B60
// Address: 0x329b60 - 0x329bc0
void sub_00329B60_0x329b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329B60_0x329b60");
#endif

    switch (ctx->pc) {
        case 0x329b74u: goto label_329b74;
        default: break;
    }

    ctx->pc = 0x329b60u;

    // 0x329b60: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x329b64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x329b64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b68: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x329b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x329b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b70: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x329b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_329b74:
    // 0x329b74: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x329b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x329b78: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x329b7c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x329b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x329b80: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x329b80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x329b84: 0x169182a  slt         $v1, $t3, $t1
    ctx->pc = 0x329b84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x329b88: 0x94880002  lhu         $t0, 0x2($a0)
    ctx->pc = 0x329b88u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x329b8c: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x329b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x329b90: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x329b90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x329b94: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x329b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x329b98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x329b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x329b9c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x329b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x329ba0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x329ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x329ba4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x329ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x329ba8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x329ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x329bac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x329bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x329bb0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x329BB0u;
    {
        const bool branch_taken_0x329bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329BB0u;
            // 0x329bb4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bb0) {
            ctx->pc = 0x329B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329b74;
        }
    }
    ctx->pc = 0x329BB8u;
    // 0x329bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x329BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329BC0u;
}
