#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DE90
// Address: 0x22de90 - 0x22df20
void sub_0022DE90_0x22de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DE90_0x22de90");
#endif

    switch (ctx->pc) {
        case 0x22dea0u: goto label_22dea0;
        default: break;
    }

    ctx->pc = 0x22de90u;

    // 0x22de90: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x22de90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x22de94: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22DE94u;
    {
        const bool branch_taken_0x22de94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE94u;
            // 0x22de98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de94) {
            ctx->pc = 0x22DEC8u;
            goto label_22dec8;
        }
    }
    ctx->pc = 0x22DE9Cu;
    // 0x22de9c: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x22de9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_22dea0:
    // 0x22dea0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22dea4: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DEA4u;
    {
        const bool branch_taken_0x22dea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22dea4) {
            ctx->pc = 0x22DEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEA4u;
            // 0x22dea8: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DEB4u;
            goto label_22deb4;
        }
    }
    ctx->pc = 0x22DEACu;
    // 0x22deac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22DEACu;
    {
        const bool branch_taken_0x22deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEACu;
            // 0x22deb0: 0x8c89003c  lw          $t1, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22deac) {
            ctx->pc = 0x22DED0u;
            goto label_22ded0;
        }
    }
    ctx->pc = 0x22DEB4u;
label_22deb4:
    // 0x22deb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22deb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22deb8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22deb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22debc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22DEBCu;
    {
        const bool branch_taken_0x22debc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEBCu;
            // 0x22dec0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22debc) {
            ctx->pc = 0x22DEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22dea0;
        }
    }
    ctx->pc = 0x22DEC4u;
    // 0x22dec4: 0x0  nop
    ctx->pc = 0x22dec4u;
    // NOP
label_22dec8:
    // 0x22dec8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22decc: 0x8c89003c  lw          $t1, 0x3C($a0)
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_22ded0:
    // 0x22ded0: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x22ded0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22ded4: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x22ded8: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x22ded8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x22dedc: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x22dee0: 0x64060010  daddiu      $a2, $zero, 0x10
    ctx->pc = 0x22dee0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x22dee4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x22dee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x22dee8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x22dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x22deec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x22deecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x22def0: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x22def0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22def4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x22def4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x22def8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x22def8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x22defc: 0xa0850027  sb          $a1, 0x27($a0)
    ctx->pc = 0x22defcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 5));
    // 0x22df00: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x22df00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x22df04: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22df04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22df08: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x22df08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x22df0c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF0Cu;
            // 0x22df10: 0xa0830027  sb          $v1, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DF14u;
    // 0x22df14: 0x0  nop
    ctx->pc = 0x22df14u;
    // NOP
    // 0x22df18: 0x0  nop
    ctx->pc = 0x22df18u;
    // NOP
    // 0x22df1c: 0x0  nop
    ctx->pc = 0x22df1cu;
    // NOP
}
