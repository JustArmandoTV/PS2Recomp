#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116678
// Address: 0x116678 - 0x116700
void sub_00116678_0x116678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116678_0x116678");
#endif

    switch (ctx->pc) {
        case 0x116698u: goto label_116698;
        case 0x1166d8u: goto label_1166d8;
        default: break;
    }

    ctx->pc = 0x116678u;

    // 0x116678: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x116678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x11667c: 0xc  syscall     0
    ctx->pc = 0x11667cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116680: 0x3e00008  jr          $ra
    ctx->pc = 0x116680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116688u;
    // 0x116688: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x116688u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x11668c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x11668Cu;
    {
        const bool branch_taken_0x11668c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11668Cu;
            // 0x116690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11668c) {
            ctx->pc = 0x1166B8u;
            goto label_1166b8;
        }
    }
    ctx->pc = 0x116694u;
    // 0x116694: 0x0  nop
    ctx->pc = 0x116694u;
    // NOP
label_116698:
    // 0x116698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x116698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11669c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1166a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1166a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1166a4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1166a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1166a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1166a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1166ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1166acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1166b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1166B0u;
    {
        const bool branch_taken_0x1166b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166b0) {
            ctx->pc = 0x116698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116698;
        }
    }
    ctx->pc = 0x1166B8u;
label_1166b8:
    // 0x1166b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1166B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166B8u;
            // 0x1166bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1166C0u;
    // 0x1166c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1166c4: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1166C4u;
    {
        const bool branch_taken_0x1166c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1166C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166C4u;
            // 0x1166c8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166c4) {
            ctx->pc = 0x1166F4u;
            goto label_1166f4;
        }
    }
    ctx->pc = 0x1166CCu;
    // 0x1166cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1166CCu;
    {
        const bool branch_taken_0x1166cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1166cc) {
            ctx->pc = 0x1166D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1166CCu;
            // 0x1166d0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1166F8u;
            goto label_1166f8;
        }
    }
    ctx->pc = 0x1166D4u;
    // 0x1166d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1166d8:
    // 0x1166d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1166d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1166dc: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1166DCu;
    {
        const bool branch_taken_0x1166dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1166E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166DCu;
            // 0x1166e0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166dc) {
            ctx->pc = 0x1166F4u;
            goto label_1166f4;
        }
    }
    ctx->pc = 0x1166E4u;
    // 0x1166e4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1166E4u;
    {
        const bool branch_taken_0x1166e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166e4) {
            ctx->pc = 0x1166E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1166E4u;
            // 0x1166e8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1166D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1166d8;
        }
    }
    ctx->pc = 0x1166ECu;
    // 0x1166ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1166ECu;
    {
        const bool branch_taken_0x1166ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166ECu;
            // 0x1166f0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166ec) {
            ctx->pc = 0x1166F8u;
            goto label_1166f8;
        }
    }
    ctx->pc = 0x1166F4u;
label_1166f4:
    // 0x1166f4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1166f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1166f8:
    // 0x1166f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1166F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1166F8u;
            // 0x1166fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116700u;
}
