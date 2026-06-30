#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B4E8
// Address: 0x17b4e8 - 0x17b5d0
void sub_0017B4E8_0x17b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B4E8_0x17b4e8");
#endif

    switch (ctx->pc) {
        case 0x17b518u: goto label_17b518;
        case 0x17b558u: goto label_17b558;
        case 0x17b568u: goto label_17b568;
        case 0x17b5c0u: goto label_17b5c0;
        default: break;
    }

    ctx->pc = 0x17b4e8u;

    // 0x17b4e8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b4ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b4f0: 0x246343f4  addiu       $v1, $v1, 0x43F4
    ctx->pc = 0x17b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17396));
    // 0x17b4f4: 0x244243f0  addiu       $v0, $v0, 0x43F0
    ctx->pc = 0x17b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17392));
    // 0x17b4f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b4fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x17b500: 0x3e00008  jr          $ra
    ctx->pc = 0x17B500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B500u;
            // 0x17b504: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B508u;
    // 0x17b508: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b50c: 0x246343f4  addiu       $v1, $v1, 0x43F4
    ctx->pc = 0x17b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17396));
    // 0x17b510: 0x3e00008  jr          $ra
    ctx->pc = 0x17B510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B510u;
            // 0x17b514: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B518u;
label_17b518:
    // 0x17b518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b51c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b528: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B528u;
    {
        const bool branch_taken_0x17b528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B528u;
            // 0x17b52c: 0xac4443f8  sw          $a0, 0x43F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b528) {
            ctx->pc = 0x17B548u;
            goto label_17b548;
        }
    }
    ctx->pc = 0x17B530u;
    // 0x17b530: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b538: 0x24845a98  addiu       $a0, $a0, 0x5A98
    ctx->pc = 0x17b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23192));
    // 0x17b53c: 0x8043c12  j           func_10F048
    ctx->pc = 0x17B53Cu;
    ctx->pc = 0x17B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B53Cu;
            // 0x17b540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F048_0x10f048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17B544u;
    // 0x17b544: 0x0  nop
    ctx->pc = 0x17b544u;
    // NOP
label_17b548:
    // 0x17b548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b54c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B54Cu;
            // 0x17b550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B554u;
    // 0x17b554: 0x0  nop
    ctx->pc = 0x17b554u;
    // NOP
label_17b558:
    // 0x17b558: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B55Cu;
            // 0x17b560: 0x8c6243f8  lw          $v0, 0x43F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17400)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B564u;
    // 0x17b564: 0x0  nop
    ctx->pc = 0x17b564u;
    // NOP
label_17b568:
    // 0x17b568: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b56c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x17b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17b570: 0x246343cc  addiu       $v1, $v1, 0x43CC
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17356));
    // 0x17b574: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17b578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b57c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x17b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x17b580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b588: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17b588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17b58c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b590: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B590u;
    {
        const bool branch_taken_0x17b590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B590u;
            // 0x17b594: 0xacc243fc  sw          $v0, 0x43FC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 17404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b590) {
            ctx->pc = 0x17B5B0u;
            goto label_17b5b0;
        }
    }
    ctx->pc = 0x17B598u;
    // 0x17b598: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17b59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5a0: 0x24845ab8  addiu       $a0, $a0, 0x5AB8
    ctx->pc = 0x17b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23224));
    // 0x17b5a4: 0x8043c12  j           func_10F048
    ctx->pc = 0x17B5A4u;
    ctx->pc = 0x17B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5A4u;
            // 0x17b5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F048_0x10f048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17B5ACu;
    // 0x17b5ac: 0x0  nop
    ctx->pc = 0x17b5acu;
    // NOP
label_17b5b0:
    // 0x17b5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5B4u;
            // 0x17b5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B5BCu;
    // 0x17b5bc: 0x0  nop
    ctx->pc = 0x17b5bcu;
    // NOP
label_17b5c0:
    // 0x17b5c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5C4u;
            // 0x17b5c8: 0x8c6243fc  lw          $v0, 0x43FC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17404)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B5CCu;
    // 0x17b5cc: 0x0  nop
    ctx->pc = 0x17b5ccu;
    // NOP
}
