#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A5F8
// Address: 0x12a5f8 - 0x12a660
void sub_0012A5F8_0x12a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A5F8_0x12a5f8");
#endif

    switch (ctx->pc) {
        case 0x12a624u: goto label_12a624;
        default: break;
    }

    ctx->pc = 0x12a5f8u;

    // 0x12a5f8: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x12a5f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12a5fc: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12a600: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x12a600u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12a604: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12A604u;
    {
        const bool branch_taken_0x12a604 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A604u;
            // 0x12a608: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a604) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x12A60Cu;
    // 0x12a60c: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x12a60cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x12a610: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12a614: 0x24af0014  addiu       $t7, $a1, 0x14
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x12a618: 0x8e5821  addu        $t3, $a0, $t6
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x12a61c: 0x1ee2821  addu        $a1, $t7, $t6
    ctx->pc = 0x12a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12a620: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x12a620u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_12a624:
    // 0x12a624: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x12a628: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x12a628u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12a62c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a630: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x12a630u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a634: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12a634u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a638: 0x8b502b  sltu        $t2, $a0, $t3
    ctx->pc = 0x12a638u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12a63c: 0x18d702b  sltu        $t6, $t4, $t5
    ctx->pc = 0x12a63cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12a640: 0x158d0004  bne         $t4, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A640u;
    {
        const bool branch_taken_0x12a640 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x12A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A640u;
            // 0x12a644: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a640) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x12A648u;
    // 0x12a648: 0x5540fff6  bnel        $t2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12A648u;
    {
        const bool branch_taken_0x12a648 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a648) {
            ctx->pc = 0x12A64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A648u;
            // 0x12a64c: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a624;
        }
    }
    ctx->pc = 0x12A650u;
    // 0x12a650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a654:
    // 0x12a654: 0x3e00008  jr          $ra
    ctx->pc = 0x12A654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A65Cu;
    // 0x12a65c: 0x0  nop
    ctx->pc = 0x12a65cu;
    // NOP
}
