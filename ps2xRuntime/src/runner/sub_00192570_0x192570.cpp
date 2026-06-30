#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192570
// Address: 0x192570 - 0x1925d8
void sub_00192570_0x192570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192570_0x192570");
#endif

    switch (ctx->pc) {
        case 0x192588u: goto label_192588;
        default: break;
    }

    ctx->pc = 0x192570u;

    // 0x192570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192574: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x192574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x192578: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x192578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19257c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19257Cu;
    {
        const bool branch_taken_0x19257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19257Cu;
            // 0x192580: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19257c) {
            ctx->pc = 0x1925CCu;
            goto label_1925cc;
        }
    }
    ctx->pc = 0x192584u;
    // 0x192584: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x192584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192588:
    // 0x192588: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x192588u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19258c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19258Cu;
    {
        const bool branch_taken_0x19258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19258c) {
            ctx->pc = 0x192590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19258Cu;
            // 0x192590: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1925BCu;
            goto label_1925bc;
        }
    }
    ctx->pc = 0x192594u;
    // 0x192594: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x192594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x192598: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x192598u;
    {
        const bool branch_taken_0x192598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192598) {
            ctx->pc = 0x19259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192598u;
            // 0x19259c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1925BCu;
            goto label_1925bc;
        }
    }
    ctx->pc = 0x1925A0u;
    // 0x1925a0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1925a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1925a4: 0x54480005  bnel        $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1925A4u;
    {
        const bool branch_taken_0x1925a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1925a4) {
            ctx->pc = 0x1925A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1925A4u;
            // 0x1925a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1925BCu;
            goto label_1925bc;
        }
    }
    ctx->pc = 0x1925ACu;
    // 0x1925ac: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1925acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1925b0: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1925B0u;
    {
        const bool branch_taken_0x1925b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1925B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925B0u;
            // 0x1925b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925b0) {
            ctx->pc = 0x1925D0u;
            goto label_1925d0;
        }
    }
    ctx->pc = 0x1925B8u;
    // 0x1925b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1925b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1925bc:
    // 0x1925bc: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1925bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1925c0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1925c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1925c4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1925C4u;
    {
        const bool branch_taken_0x1925c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925C4u;
            // 0x1925c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925c4) {
            ctx->pc = 0x192588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192588;
        }
    }
    ctx->pc = 0x1925CCu;
label_1925cc:
    // 0x1925cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1925ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1925d0:
    // 0x1925d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1925D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1925D8u;
}
