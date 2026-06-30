#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD698
// Address: 0x1bd698 - 0x1bd770
void sub_001BD698_0x1bd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD698_0x1bd698");
#endif

    switch (ctx->pc) {
        case 0x1bd760u: goto label_1bd760;
        default: break;
    }

    ctx->pc = 0x1bd698u;

    // 0x1bd698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd69c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1bd6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd6a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd6a8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BD6A8u;
    {
        const bool branch_taken_0x1bd6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6A8u;
            // 0x1bd6ac: 0x28620062  slti        $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6a8) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD6B0u;
    // 0x1bd6b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD6B0u;
    {
        const bool branch_taken_0x1bd6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6B0u;
            // 0x1bd6b4: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6b0) {
            ctx->pc = 0x1BD700u;
            goto label_1bd700;
        }
    }
    ctx->pc = 0x1BD6B8u;
    // 0x1bd6b8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1bd6bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BD6BCu;
    {
        const bool branch_taken_0x1bd6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6BCu;
            // 0x1bd6c0: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6bc) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD6C4u;
    // 0x1bd6c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD6C4u;
    {
        const bool branch_taken_0x1bd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6C4u;
            // 0x1bd6c8: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6c4) {
            ctx->pc = 0x1BD6E8u;
            goto label_1bd6e8;
        }
    }
    ctx->pc = 0x1BD6CCu;
    // 0x1bd6cc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bd6d0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BD6D0u;
    {
        const bool branch_taken_0x1bd6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6D0u;
            // 0x1bd6d4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6d0) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD6D8u;
    // 0x1bd6d8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD6D8u;
    {
        const bool branch_taken_0x1bd6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6D8u;
            // 0x1bd6dc: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6d8) {
            ctx->pc = 0x1BD748u;
            goto label_1bd748;
        }
    }
    ctx->pc = 0x1BD6E0u;
    // 0x1bd6e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BD6E0u;
    {
        const bool branch_taken_0x1bd6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6E0u;
            // 0x1bd6e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6e0) {
            ctx->pc = 0x1BD754u;
            goto label_1bd754;
        }
    }
    ctx->pc = 0x1BD6E8u;
label_1bd6e8:
    // 0x1bd6e8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BD6E8u;
    {
        const bool branch_taken_0x1bd6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6E8u;
            // 0x1bd6ec: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6e8) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD6F0u;
    // 0x1bd6f0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD6F0u;
    {
        const bool branch_taken_0x1bd6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6F0u;
            // 0x1bd6f4: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6f0) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD6F8u;
    // 0x1bd6f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD6F8u;
    {
        const bool branch_taken_0x1bd6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD6F8u;
            // 0x1bd6fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6f8) {
            ctx->pc = 0x1BD754u;
            goto label_1bd754;
        }
    }
    ctx->pc = 0x1BD700u;
label_1bd700:
    // 0x1bd700: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BD700u;
    {
        const bool branch_taken_0x1bd700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD700u;
            // 0x1bd704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd700) {
            ctx->pc = 0x1BD764u;
            goto label_1bd764;
        }
    }
    ctx->pc = 0x1BD708u;
    // 0x1bd708: 0x28620102  slti        $v0, $v1, 0x102
    ctx->pc = 0x1bd708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x1bd70c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD70Cu;
    {
        const bool branch_taken_0x1bd70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD70Cu;
            // 0x1bd710: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd70c) {
            ctx->pc = 0x1BD730u;
            goto label_1bd730;
        }
    }
    ctx->pc = 0x1BD714u;
    // 0x1bd714: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1bd718: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD718u;
    {
        const bool branch_taken_0x1bd718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD718u;
            // 0x1bd71c: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd718) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD720u;
    // 0x1bd720: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BD720u;
    {
        const bool branch_taken_0x1bd720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD720u;
            // 0x1bd724: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd720) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD728u;
    // 0x1bd728: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BD728u;
    {
        const bool branch_taken_0x1bd728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD728u;
            // 0x1bd72c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd728) {
            ctx->pc = 0x1BD754u;
            goto label_1bd754;
        }
    }
    ctx->pc = 0x1BD730u;
label_1bd730:
    // 0x1bd730: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BD730u;
    {
        const bool branch_taken_0x1bd730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD730u;
            // 0x1bd734: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd730) {
            ctx->pc = 0x1BD760u;
            goto label_1bd760;
        }
    }
    ctx->pc = 0x1BD738u;
    // 0x1bd738: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD738u;
    {
        const bool branch_taken_0x1bd738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD738u;
            // 0x1bd73c: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd738) {
            ctx->pc = 0x1BD750u;
            goto label_1bd750;
        }
    }
    ctx->pc = 0x1BD740u;
    // 0x1bd740: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD740u;
    {
        const bool branch_taken_0x1bd740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD740u;
            // 0x1bd744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd740) {
            ctx->pc = 0x1BD764u;
            goto label_1bd764;
        }
    }
    ctx->pc = 0x1BD748u;
label_1bd748:
    // 0x1bd748: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD748u;
    {
        const bool branch_taken_0x1bd748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD748u;
            // 0x1bd74c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd748) {
            ctx->pc = 0x1BD764u;
            goto label_1bd764;
        }
    }
    ctx->pc = 0x1BD750u;
label_1bd750:
    // 0x1bd750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bd750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd754:
    // 0x1bd754: 0x24c6b210  addiu       $a2, $a2, -0x4DF0
    ctx->pc = 0x1bd754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947344));
    // 0x1bd758: 0xc06f9cc  jal         func_1BE730
    ctx->pc = 0x1BD758u;
    SET_GPR_U32(ctx, 31, 0x1BD760u);
    ctx->pc = 0x1BD75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD758u;
            // 0x1bd75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD760u; }
        if (ctx->pc != 0x1BD760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD760u; }
        if (ctx->pc != 0x1BD760u) { return; }
    }
    ctx->pc = 0x1BD760u;
label_1bd760:
    // 0x1bd760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd764:
    // 0x1bd764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd768: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD768u;
            // 0x1bd76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD770u;
}
