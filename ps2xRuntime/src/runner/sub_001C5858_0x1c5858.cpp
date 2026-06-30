#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5858
// Address: 0x1c5858 - 0x1c5928
void sub_001C5858_0x1c5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5858_0x1c5858");
#endif

    switch (ctx->pc) {
        case 0x1c5858u: goto label_1c5858;
        case 0x1c585cu: goto label_1c585c;
        case 0x1c5860u: goto label_1c5860;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c5868u: goto label_1c5868;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5870u: goto label_1c5870;
        case 0x1c5874u: goto label_1c5874;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c587cu: goto label_1c587c;
        case 0x1c5880u: goto label_1c5880;
        case 0x1c5884u: goto label_1c5884;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c588cu: goto label_1c588c;
        case 0x1c5890u: goto label_1c5890;
        case 0x1c5894u: goto label_1c5894;
        case 0x1c5898u: goto label_1c5898;
        case 0x1c589cu: goto label_1c589c;
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58a4u: goto label_1c58a4;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c58acu: goto label_1c58ac;
        case 0x1c58b0u: goto label_1c58b0;
        case 0x1c58b4u: goto label_1c58b4;
        case 0x1c58b8u: goto label_1c58b8;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58c0u: goto label_1c58c0;
        case 0x1c58c4u: goto label_1c58c4;
        case 0x1c58c8u: goto label_1c58c8;
        case 0x1c58ccu: goto label_1c58cc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58d8u: goto label_1c58d8;
        case 0x1c58dcu: goto label_1c58dc;
        case 0x1c58e0u: goto label_1c58e0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f0u: goto label_1c58f0;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c5904u: goto label_1c5904;
        case 0x1c5908u: goto label_1c5908;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c5910u: goto label_1c5910;
        case 0x1c5914u: goto label_1c5914;
        case 0x1c5918u: goto label_1c5918;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5920u: goto label_1c5920;
        case 0x1c5924u: goto label_1c5924;
        default: break;
    }

    ctx->pc = 0x1c5858u;

label_1c5858:
    // 0x1c5858: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c585c:
    // 0x1c585c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c585cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5860:
    // 0x1c5860: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c5864:
    // 0x1c5864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c5868:
    if (ctx->pc == 0x1C5868u) {
        ctx->pc = 0x1C5868u;
            // 0x1c5868: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C586Cu;
        goto label_1c586c;
    }
    ctx->pc = 0x1C5864u;
    {
        const bool branch_taken_0x1c5864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5864u;
            // 0x1c5868: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5864) {
            ctx->pc = 0x1C5890u;
            goto label_1c5890;
        }
    }
    ctx->pc = 0x1C586Cu;
label_1c586c:
    // 0x1c586c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1c586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c5870:
    // 0x1c5870: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c5874:
    if (ctx->pc == 0x1C5874u) {
        ctx->pc = 0x1C5874u;
            // 0x1c5874: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C5878u;
        goto label_1c5878;
    }
    ctx->pc = 0x1C5870u;
    {
        const bool branch_taken_0x1c5870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5870) {
            ctx->pc = 0x1C5874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5870u;
            // 0x1c5874: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5894u;
            goto label_1c5894;
        }
    }
    ctx->pc = 0x1C5878u;
label_1c5878:
    // 0x1c5878: 0x40f809  jalr        $v0
label_1c587c:
    if (ctx->pc == 0x1C587Cu) {
        ctx->pc = 0x1C5880u;
        goto label_1c5880;
    }
    ctx->pc = 0x1C5878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5880u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5880u; }
            if (ctx->pc != 0x1C5880u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5880u;
label_1c5880:
    // 0x1c5880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5884:
    // 0x1c5884: 0x3e00008  jr          $ra
label_1c5888:
    if (ctx->pc == 0x1C5888u) {
        ctx->pc = 0x1C5888u;
            // 0x1c5888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C588Cu;
        goto label_1c588c;
    }
    ctx->pc = 0x1C5884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5884u;
            // 0x1c5888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C588Cu;
label_1c588c:
    // 0x1c588c: 0x0  nop
    ctx->pc = 0x1c588cu;
    // NOP
label_1c5890:
    // 0x1c5890: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c5894:
    // 0x1c5894: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c5898:
    // 0x1c5898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c589c:
    // 0x1c589c: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c58a0:
    // 0x1c58a0: 0x24c6bf40  addiu       $a2, $a2, -0x40C0
    ctx->pc = 0x1c58a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950720));
label_1c58a4:
    // 0x1c58a4: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x1c58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_1c58a8:
    // 0x1c58a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c58a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c58ac:
    // 0x1c58ac: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x1c58acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c58b0:
    // 0x1c58b0: 0x80711fe  j           func_1C47F8
label_1c58b4:
    if (ctx->pc == 0x1C58B4u) {
        ctx->pc = 0x1C58B4u;
            // 0x1c58b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C58B8u;
        goto label_1c58b8;
    }
    ctx->pc = 0x1C58B0u;
    ctx->pc = 0x1C58B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58B0u;
            // 0x1c58b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C58B8u;
label_1c58b8:
    // 0x1c58b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c58bc:
    // 0x1c58bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c58bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c58c0:
    // 0x1c58c0: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c58c4:
    // 0x1c58c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c58c8:
    if (ctx->pc == 0x1C58C8u) {
        ctx->pc = 0x1C58C8u;
            // 0x1c58c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C58CCu;
        goto label_1c58cc;
    }
    ctx->pc = 0x1C58C4u;
    {
        const bool branch_taken_0x1c58c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58C4u;
            // 0x1c58c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58c4) {
            ctx->pc = 0x1C58FCu;
            goto label_1c58fc;
        }
    }
    ctx->pc = 0x1C58CCu;
label_1c58cc:
    // 0x1c58cc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1c58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1c58d0:
    // 0x1c58d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c58d4:
    if (ctx->pc == 0x1C58D4u) {
        ctx->pc = 0x1C58D8u;
        goto label_1c58d8;
    }
    ctx->pc = 0x1C58D0u;
    {
        const bool branch_taken_0x1c58d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c58d0) {
            ctx->pc = 0x1C58E8u;
            goto label_1c58e8;
        }
    }
    ctx->pc = 0x1C58D8u;
label_1c58d8:
    // 0x1c58d8: 0x40f809  jalr        $v0
label_1c58dc:
    if (ctx->pc == 0x1C58DCu) {
        ctx->pc = 0x1C58E0u;
        goto label_1c58e0;
    }
    ctx->pc = 0x1C58D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C58E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C58E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C58E0u; }
            if (ctx->pc != 0x1C58E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C58E0u;
label_1c58e0:
    // 0x1c58e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c58e4:
    if (ctx->pc == 0x1C58E4u) {
        ctx->pc = 0x1C58E4u;
            // 0x1c58e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C58E8u;
        goto label_1c58e8;
    }
    ctx->pc = 0x1C58E0u;
    {
        const bool branch_taken_0x1c58e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58E0u;
            // 0x1c58e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58e0) {
            ctx->pc = 0x1C58F4u;
            goto label_1c58f4;
        }
    }
    ctx->pc = 0x1C58E8u;
label_1c58e8:
    // 0x1c58e8: 0xc071616  jal         func_1C5858
label_1c58ec:
    if (ctx->pc == 0x1C58ECu) {
        ctx->pc = 0x1C58F0u;
        goto label_1c58f0;
    }
    ctx->pc = 0x1C58E8u;
    SET_GPR_U32(ctx, 31, 0x1C58F0u);
    ctx->pc = 0x1C5858u;
    goto label_1c5858;
    ctx->pc = 0x1C58F0u;
label_1c58f0:
    // 0x1c58f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c58f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c58f4:
    // 0x1c58f4: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
label_1c58f8:
    if (ctx->pc == 0x1C58F8u) {
        ctx->pc = 0x1C58F8u;
            // 0x1c58f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C58FCu;
        goto label_1c58fc;
    }
    ctx->pc = 0x1C58F4u;
    {
        const bool branch_taken_0x1c58f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58F4u;
            // 0x1c58f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58f4) {
            ctx->pc = 0x1C591Cu;
            goto label_1c591c;
        }
    }
    ctx->pc = 0x1C58FCu;
label_1c58fc:
    // 0x1c58fc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c5900:
    // 0x1c5900: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c5904:
    // 0x1c5904: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c5908:
    // 0x1c5908: 0x24c6bf50  addiu       $a2, $a2, -0x40B0
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950736));
label_1c590c:
    // 0x1c590c: 0x2405011c  addiu       $a1, $zero, 0x11C
    ctx->pc = 0x1c590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_1c5910:
    // 0x1c5910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5914:
    // 0x1c5914: 0xc0711fe  jal         func_1C47F8
label_1c5918:
    if (ctx->pc == 0x1C5918u) {
        ctx->pc = 0x1C5918u;
            // 0x1c5918: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C591Cu;
        goto label_1c591c;
    }
    ctx->pc = 0x1C5914u;
    SET_GPR_U32(ctx, 31, 0x1C591Cu);
    ctx->pc = 0x1C5918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5914u;
            // 0x1c5918: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C591Cu; }
        if (ctx->pc != 0x1C591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C591Cu; }
        if (ctx->pc != 0x1C591Cu) { return; }
    }
    ctx->pc = 0x1C591Cu;
label_1c591c:
    // 0x1c591c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5920:
    // 0x1c5920: 0x3e00008  jr          $ra
label_1c5924:
    if (ctx->pc == 0x1C5924u) {
        ctx->pc = 0x1C5924u;
            // 0x1c5924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C5928u;
        goto label_fallthrough_0x1c5920;
    }
    ctx->pc = 0x1C5920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5920u;
            // 0x1c5924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c5920:
    ctx->pc = 0x1C5928u;
}
