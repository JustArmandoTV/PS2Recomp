#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030AF30
// Address: 0x30af30 - 0x30afd0
void sub_0030AF30_0x30af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AF30_0x30af30");
#endif

    switch (ctx->pc) {
        case 0x30af40u: goto label_30af40;
        case 0x30af58u: goto label_30af58;
        default: break;
    }

    ctx->pc = 0x30af30u;

    // 0x30af30: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x30af30u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af34: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x30af34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af38: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30af3c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x30af3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_30af40:
    // 0x30af40: 0x8d680154  lw          $t0, 0x154($t3)
    ctx->pc = 0x30af40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 340)));
    // 0x30af44: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30AF44u;
    {
        const bool branch_taken_0x30af44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af44) {
            ctx->pc = 0x30AFA8u;
            goto label_30afa8;
        }
    }
    ctx->pc = 0x30AF4Cu;
    // 0x30af4c: 0x8d0d0030  lw          $t5, 0x30($t0)
    ctx->pc = 0x30af4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x30af50: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x30af50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af54: 0x8d0a0028  lw          $t2, 0x28($t0)
    ctx->pc = 0x30af54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_30af58:
    // 0x30af58: 0x8da80080  lw          $t0, 0x80($t5)
    ctx->pc = 0x30af58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 128)));
    // 0x30af5c: 0x1506000e  bne         $t0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x30AF5Cu;
    {
        const bool branch_taken_0x30af5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x30af5c) {
            ctx->pc = 0x30AF98u;
            goto label_30af98;
        }
    }
    ctx->pc = 0x30AF64u;
    // 0x30af64: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30AF64u;
    {
        const bool branch_taken_0x30af64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30af64) {
            ctx->pc = 0x30AF88u;
            goto label_30af88;
        }
    }
    ctx->pc = 0x30AF6Cu;
    // 0x30af6c: 0x8ce9f2b0  lw          $t1, -0xD50($a3)
    ctx->pc = 0x30af6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963888)));
    // 0x30af70: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x30af74: 0x1204827  not         $t1, $t1
    ctx->pc = 0x30af74u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
    // 0x30af78: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x30af78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x30af7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30AF7Cu;
    {
        const bool branch_taken_0x30af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AF7Cu;
            // 0x30af80: 0xada80000  sw          $t0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30af7c) {
            ctx->pc = 0x30AF98u;
            goto label_30af98;
        }
    }
    ctx->pc = 0x30AF84u;
    // 0x30af84: 0x0  nop
    ctx->pc = 0x30af84u;
    // NOP
label_30af88:
    // 0x30af88: 0x8c69f2b8  lw          $t1, -0xD48($v1)
    ctx->pc = 0x30af88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963896)));
    // 0x30af8c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x30af8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x30af90: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x30af90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x30af94: 0xada80000  sw          $t0, 0x0($t5)
    ctx->pc = 0x30af94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 8));
label_30af98:
    // 0x30af98: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x30af98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x30af9c: 0x18a402a  slt         $t0, $t4, $t2
    ctx->pc = 0x30af9cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x30afa0: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30AFA0u;
    {
        const bool branch_taken_0x30afa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFA0u;
            // 0x30afa4: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afa0) {
            ctx->pc = 0x30AF58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30af58;
        }
    }
    ctx->pc = 0x30AFA8u;
label_30afa8:
    // 0x30afa8: 0x8c880454  lw          $t0, 0x454($a0)
    ctx->pc = 0x30afa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
    // 0x30afac: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30afacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x30afb0: 0x1c8402a  slt         $t0, $t6, $t0
    ctx->pc = 0x30afb0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30afb4: 0x1500ffe2  bnez        $t0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x30AFB4u;
    {
        const bool branch_taken_0x30afb4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AFB4u;
            // 0x30afb8: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30afb4) {
            ctx->pc = 0x30AF40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30af40;
        }
    }
    ctx->pc = 0x30AFBCu;
    // 0x30afbc: 0x3e00008  jr          $ra
    ctx->pc = 0x30AFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AFC4u;
    // 0x30afc4: 0x0  nop
    ctx->pc = 0x30afc4u;
    // NOP
    // 0x30afc8: 0x0  nop
    ctx->pc = 0x30afc8u;
    // NOP
    // 0x30afcc: 0x0  nop
    ctx->pc = 0x30afccu;
    // NOP
}
