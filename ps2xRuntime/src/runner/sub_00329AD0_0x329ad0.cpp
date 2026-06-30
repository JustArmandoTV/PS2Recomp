#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329AD0
// Address: 0x329ad0 - 0x329b60
void sub_00329AD0_0x329ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329AD0_0x329ad0");
#endif

    switch (ctx->pc) {
        case 0x329af0u: goto label_329af0;
        default: break;
    }

    ctx->pc = 0x329ad0u;

    // 0x329ad0: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x329ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x329ad4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x329ad4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ad8: 0x8c890030  lw          $t1, 0x30($a0)
    ctx->pc = 0x329ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x329adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x329adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ae0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x329ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x329ae4: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x329ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x329ae8: 0x34648d7f  ori         $a0, $v1, 0x8D7F
    ctx->pc = 0x329ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36223);
    // 0x329aec: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x329aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_329af0:
    // 0x329af0: 0x3c01005b  lui         $at, 0x5B
    ctx->pc = 0x329af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)91 << 16));
    // 0x329af4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x329af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x329af8: 0x34218d80  ori         $at, $at, 0x8D80
    ctx->pc = 0x329af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36224);
    // 0x329afc: 0x90670001  lbu         $a3, 0x1($v1)
    ctx->pc = 0x329afcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x329b00: 0x94680002  lhu         $t0, 0x2($v1)
    ctx->pc = 0x329b00u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x329b04: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x329b08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x329b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x329b0c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x329b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x329b10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x329b14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x329b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x329b18: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x329b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x329b1c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x329b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x329b20: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x329b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x329b24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x329b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x329b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329b2c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x329b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x329b30: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x329B30u;
    {
        const bool branch_taken_0x329b30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b30) {
            ctx->pc = 0x329B40u;
            goto label_329b40;
        }
    }
    ctx->pc = 0x329B38u;
    // 0x329b38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x329b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b3c: 0x0  nop
    ctx->pc = 0x329b3cu;
    // NOP
label_329b40:
    // 0x329b40: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x329b40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x329b44: 0x169182a  slt         $v1, $t3, $t1
    ctx->pc = 0x329b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x329b48: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x329B48u;
    {
        const bool branch_taken_0x329b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b48) {
            ctx->pc = 0x329B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329B48u;
            // 0x329b4c: 0xb1880  sll         $v1, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_329af0;
        }
    }
    ctx->pc = 0x329B50u;
    // 0x329b50: 0x3e00008  jr          $ra
    ctx->pc = 0x329B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x329B58u;
    // 0x329b58: 0x0  nop
    ctx->pc = 0x329b58u;
    // NOP
    // 0x329b5c: 0x0  nop
    ctx->pc = 0x329b5cu;
    // NOP
}
