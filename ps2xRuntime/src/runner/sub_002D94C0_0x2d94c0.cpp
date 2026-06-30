#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D94C0
// Address: 0x2d94c0 - 0x2d9ce0
void sub_002D94C0_0x2d94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D94C0_0x2d94c0");
#endif

    switch (ctx->pc) {
        case 0x2d94ccu: goto label_2d94cc;
        default: break;
    }

    ctx->pc = 0x2d94c0u;

    // 0x2d94c0: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x2d94c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d94c4: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x2d94c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2d94c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2d94cc:
    // 0x2d94cc: 0x8c67e390  lw          $a3, -0x1C70($v1)
    ctx->pc = 0x2d94ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x2d94d0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2d94d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2d94d4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2d94d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d94d8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2d94d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2d94dc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x2d94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x2d94e0: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D94E0u;
    {
        const bool branch_taken_0x2d94e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D94E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D94E0u;
            // 0x2d94e4: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94e0) {
            ctx->pc = 0x2D94CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d94cc;
        }
    }
    ctx->pc = 0x2D94E8u;
    // 0x2d94e8: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x2d94e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2d94ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d94ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d94f0: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x2d94f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d94f4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x2d94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x2d94f8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2d94f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d94fc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d9500: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d9504: 0x602027  not         $a0, $v1
    ctx->pc = 0x2d9504u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x2d9508: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2d9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d950c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d9510: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d9510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d9514: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9514u;
            // 0x2d9518: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D951Cu;
    // 0x2d951c: 0x0  nop
    ctx->pc = 0x2d951cu;
    // NOP
    // 0x2d9520: 0x80ae18c  j           func_2B8630
    ctx->pc = 0x2D9520u;
    ctx->pc = 0x2D9524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9520u;
            // 0x2d9524: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8630u;
    {
        auto targetFn = runtime->lookupFunction(0x2B8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9528u;
    // 0x2d9528: 0x0  nop
    ctx->pc = 0x2d9528u;
    // NOP
    // 0x2d952c: 0x0  nop
    ctx->pc = 0x2d952cu;
    // NOP
    // 0x2d9530: 0x80b4298  j           func_2D0A60
    ctx->pc = 0x2D9530u;
    ctx->pc = 0x2D9534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9530u;
            // 0x2d9534: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0A60u;
    {
        auto targetFn = runtime->lookupFunction(0x2D0A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9538u;
    // 0x2d9538: 0x0  nop
    ctx->pc = 0x2d9538u;
    // NOP
    // 0x2d953c: 0x0  nop
    ctx->pc = 0x2d953cu;
    // NOP
    // 0x2d9540: 0x80ae220  j           func_2B8880
    ctx->pc = 0x2D9540u;
    ctx->pc = 0x2D9544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9540u;
            // 0x2d9544: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8880u;
    if (runtime->hasFunction(0x2B8880u)) {
        auto targetFn = runtime->lookupFunction(0x2B8880u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B8880_0x2b8880(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9548u;
    // 0x2d9548: 0x0  nop
    ctx->pc = 0x2d9548u;
    // NOP
    // 0x2d954c: 0x0  nop
    ctx->pc = 0x2d954cu;
    // NOP
    // 0x2d9550: 0x80ae340  j           func_2B8D00
    ctx->pc = 0x2D9550u;
    ctx->pc = 0x2D9554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9550u;
            // 0x2d9554: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D00u;
    {
        auto targetFn = runtime->lookupFunction(0x2B8D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9558u;
    // 0x2d9558: 0x0  nop
    ctx->pc = 0x2d9558u;
    // NOP
    // 0x2d955c: 0x0  nop
    ctx->pc = 0x2d955cu;
    // NOP
    // 0x2d9560: 0x80b4250  j           func_2D0940
    ctx->pc = 0x2D9560u;
    ctx->pc = 0x2D9564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9560u;
            // 0x2d9564: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0940u;
    {
        auto targetFn = runtime->lookupFunction(0x2D0940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9568u;
    // 0x2d9568: 0x0  nop
    ctx->pc = 0x2d9568u;
    // NOP
    // 0x2d956c: 0x0  nop
    ctx->pc = 0x2d956cu;
    // NOP
    // 0x2d9570: 0x80ae3a8  j           func_2B8EA0
    ctx->pc = 0x2D9570u;
    ctx->pc = 0x2D9574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9570u;
            // 0x2d9574: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8EA0u;
    if (runtime->hasFunction(0x2B8EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2B8EA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B8EA0_0x2b8ea0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9578u;
    // 0x2d9578: 0x0  nop
    ctx->pc = 0x2d9578u;
    // NOP
    // 0x2d957c: 0x0  nop
    ctx->pc = 0x2d957cu;
    // NOP
    // 0x2d9580: 0x80ae4c4  j           func_2B9310
    ctx->pc = 0x2D9580u;
    ctx->pc = 0x2D9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9580u;
            // 0x2d9584: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9310u;
    {
        auto targetFn = runtime->lookupFunction(0x2B9310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9588u;
    // 0x2d9588: 0x0  nop
    ctx->pc = 0x2d9588u;
    // NOP
    // 0x2d958c: 0x0  nop
    ctx->pc = 0x2d958cu;
    // NOP
    // 0x2d9590: 0x80ae594  j           func_2B9650
    ctx->pc = 0x2D9590u;
    ctx->pc = 0x2D9594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9590u;
            // 0x2d9594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9650u;
    if (runtime->hasFunction(0x2B9650u)) {
        auto targetFn = runtime->lookupFunction(0x2B9650u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B9650_0x2b9650(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9598u;
    // 0x2d9598: 0x0  nop
    ctx->pc = 0x2d9598u;
    // NOP
    // 0x2d959c: 0x0  nop
    ctx->pc = 0x2d959cu;
    // NOP
    // 0x2d95a0: 0x80aea54  j           func_2BA950
    ctx->pc = 0x2D95A0u;
    ctx->pc = 0x2D95A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95A0u;
            // 0x2d95a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA950u;
    {
        auto targetFn = runtime->lookupFunction(0x2BA950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D95A8u;
    // 0x2d95a8: 0x0  nop
    ctx->pc = 0x2d95a8u;
    // NOP
    // 0x2d95ac: 0x0  nop
    ctx->pc = 0x2d95acu;
    // NOP
    // 0x2d95b0: 0x80ae688  j           func_2B9A20
    ctx->pc = 0x2D95B0u;
    ctx->pc = 0x2D95B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95B0u;
            // 0x2d95b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A20u;
    {
        auto targetFn = runtime->lookupFunction(0x2B9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D95B8u;
    // 0x2d95b8: 0x0  nop
    ctx->pc = 0x2d95b8u;
    // NOP
    // 0x2d95bc: 0x0  nop
    ctx->pc = 0x2d95bcu;
    // NOP
    // 0x2d95c0: 0x80ae730  j           func_2B9CC0
    ctx->pc = 0x2D95C0u;
    ctx->pc = 0x2D95C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95C0u;
            // 0x2d95c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CC0u;
    if (runtime->hasFunction(0x2B9CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B9CC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002B9CC0_0x2b9cc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D95C8u;
    // 0x2d95c8: 0x0  nop
    ctx->pc = 0x2d95c8u;
    // NOP
    // 0x2d95cc: 0x0  nop
    ctx->pc = 0x2d95ccu;
    // NOP
    // 0x2d95d0: 0x80ae8c8  j           func_2BA320
    ctx->pc = 0x2D95D0u;
    ctx->pc = 0x2D95D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95D0u;
            // 0x2d95d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA320u;
    {
        auto targetFn = runtime->lookupFunction(0x2BA320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D95D8u;
    // 0x2d95d8: 0x0  nop
    ctx->pc = 0x2d95d8u;
    // NOP
    // 0x2d95dc: 0x0  nop
    ctx->pc = 0x2d95dcu;
    // NOP
    // 0x2d95e0: 0x80aeb3c  j           func_2BACF0
    ctx->pc = 0x2D95E0u;
    ctx->pc = 0x2D95E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95E0u;
            // 0x2d95e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BACF0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D95E8u;
    // 0x2d95e8: 0x0  nop
    ctx->pc = 0x2d95e8u;
    // NOP
    // 0x2d95ec: 0x0  nop
    ctx->pc = 0x2d95ecu;
    // NOP
    // 0x2d95f0: 0x80b4204  j           func_2D0810
    ctx->pc = 0x2D95F0u;
    ctx->pc = 0x2D95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D95F0u;
            // 0x2d95f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0810u;
    {
        auto targetFn = runtime->lookupFunction(0x2D0810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D95F8u;
    // 0x2d95f8: 0x0  nop
    ctx->pc = 0x2d95f8u;
    // NOP
    // 0x2d95fc: 0x0  nop
    ctx->pc = 0x2d95fcu;
    // NOP
    // 0x2d9600: 0x80aed30  j           func_2BB4C0
    ctx->pc = 0x2D9600u;
    ctx->pc = 0x2D9604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9600u;
            // 0x2d9604: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB4C0u;
    if (runtime->hasFunction(0x2BB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2BB4C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BB4C0_0x2bb4c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9608u;
    // 0x2d9608: 0x0  nop
    ctx->pc = 0x2d9608u;
    // NOP
    // 0x2d960c: 0x0  nop
    ctx->pc = 0x2d960cu;
    // NOP
    // 0x2d9610: 0x80aee40  j           func_2BB900
    ctx->pc = 0x2D9610u;
    ctx->pc = 0x2D9614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9610u;
            // 0x2d9614: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BB900_0x2bb900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9618u;
    // 0x2d9618: 0x0  nop
    ctx->pc = 0x2d9618u;
    // NOP
    // 0x2d961c: 0x0  nop
    ctx->pc = 0x2d961cu;
    // NOP
    // 0x2d9620: 0x80aef14  j           func_2BBC50
    ctx->pc = 0x2D9620u;
    ctx->pc = 0x2D9624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9620u;
            // 0x2d9624: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC50u;
    {
        auto targetFn = runtime->lookupFunction(0x2BBC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9628u;
    // 0x2d9628: 0x0  nop
    ctx->pc = 0x2d9628u;
    // NOP
    // 0x2d962c: 0x0  nop
    ctx->pc = 0x2d962cu;
    // NOP
    // 0x2d9630: 0x80aefbc  j           func_2BBEF0
    ctx->pc = 0x2D9630u;
    ctx->pc = 0x2D9634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9630u;
            // 0x2d9634: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBEF0u;
    if (runtime->hasFunction(0x2BBEF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBEF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BBEF0_0x2bbef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9638u;
    // 0x2d9638: 0x0  nop
    ctx->pc = 0x2d9638u;
    // NOP
    // 0x2d963c: 0x0  nop
    ctx->pc = 0x2d963cu;
    // NOP
    // 0x2d9640: 0x80af0e0  j           func_2BC380
    ctx->pc = 0x2D9640u;
    ctx->pc = 0x2D9644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9640u;
            // 0x2d9644: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC380u;
    {
        auto targetFn = runtime->lookupFunction(0x2BC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9648u;
    // 0x2d9648: 0x0  nop
    ctx->pc = 0x2d9648u;
    // NOP
    // 0x2d964c: 0x0  nop
    ctx->pc = 0x2d964cu;
    // NOP
    // 0x2d9650: 0x80af188  j           func_2BC620
    ctx->pc = 0x2D9650u;
    ctx->pc = 0x2D9654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9650u;
            // 0x2d9654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC620u;
    if (runtime->hasFunction(0x2BC620u)) {
        auto targetFn = runtime->lookupFunction(0x2BC620u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BC620_0x2bc620(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9658u;
    // 0x2d9658: 0x0  nop
    ctx->pc = 0x2d9658u;
    // NOP
    // 0x2d965c: 0x0  nop
    ctx->pc = 0x2d965cu;
    // NOP
    // 0x2d9660: 0x80af298  j           func_2BCA60
    ctx->pc = 0x2D9660u;
    ctx->pc = 0x2D9664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9660u;
            // 0x2d9664: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA60u;
    {
        auto targetFn = runtime->lookupFunction(0x2BCA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9668u;
    // 0x2d9668: 0x0  nop
    ctx->pc = 0x2d9668u;
    // NOP
    // 0x2d966c: 0x0  nop
    ctx->pc = 0x2d966cu;
    // NOP
    // 0x2d9670: 0x80af328  j           func_2BCCA0
    ctx->pc = 0x2D9670u;
    ctx->pc = 0x2D9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9670u;
            // 0x2d9674: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCCA0u;
    if (runtime->hasFunction(0x2BCCA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BCCA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BCCA0_0x2bcca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9678u;
    // 0x2d9678: 0x0  nop
    ctx->pc = 0x2d9678u;
    // NOP
    // 0x2d967c: 0x0  nop
    ctx->pc = 0x2d967cu;
    // NOP
    // 0x2d9680: 0x80af474  j           func_2BD1D0
    ctx->pc = 0x2D9680u;
    ctx->pc = 0x2D9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9680u;
            // 0x2d9684: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD1D0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BD1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9688u;
    // 0x2d9688: 0x0  nop
    ctx->pc = 0x2d9688u;
    // NOP
    // 0x2d968c: 0x0  nop
    ctx->pc = 0x2d968cu;
    // NOP
    // 0x2d9690: 0x80af52c  j           func_2BD4B0
    ctx->pc = 0x2D9690u;
    ctx->pc = 0x2D9694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9690u;
            // 0x2d9694: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BD4B0u;
    if (runtime->hasFunction(0x2BD4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BD4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BD4B0_0x2bd4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9698u;
    // 0x2d9698: 0x0  nop
    ctx->pc = 0x2d9698u;
    // NOP
    // 0x2d969c: 0x0  nop
    ctx->pc = 0x2d969cu;
    // NOP
    // 0x2d96a0: 0x80af684  j           func_2BDA10
    ctx->pc = 0x2D96A0u;
    ctx->pc = 0x2D96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96A0u;
            // 0x2d96a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDA10u;
    {
        auto targetFn = runtime->lookupFunction(0x2BDA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D96A8u;
    // 0x2d96a8: 0x0  nop
    ctx->pc = 0x2d96a8u;
    // NOP
    // 0x2d96ac: 0x0  nop
    ctx->pc = 0x2d96acu;
    // NOP
    // 0x2d96b0: 0x80b41ac  j           func_2D06B0
    ctx->pc = 0x2D96B0u;
    ctx->pc = 0x2D96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96B0u;
            // 0x2d96b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D06B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D96B8u;
    // 0x2d96b8: 0x0  nop
    ctx->pc = 0x2d96b8u;
    // NOP
    // 0x2d96bc: 0x0  nop
    ctx->pc = 0x2d96bcu;
    // NOP
    // 0x2d96c0: 0x80af72c  j           func_2BDCB0
    ctx->pc = 0x2D96C0u;
    ctx->pc = 0x2D96C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96C0u;
            // 0x2d96c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDCB0u;
    if (runtime->hasFunction(0x2BDCB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BDCB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BDCB0_0x2bdcb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D96C8u;
    // 0x2d96c8: 0x0  nop
    ctx->pc = 0x2d96c8u;
    // NOP
    // 0x2d96cc: 0x0  nop
    ctx->pc = 0x2d96ccu;
    // NOP
    // 0x2d96d0: 0x80af6ec  j           func_2BDBB0
    ctx->pc = 0x2D96D0u;
    ctx->pc = 0x2D96D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96D0u;
            // 0x2d96d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDBB0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BDBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D96D8u;
    // 0x2d96d8: 0x0  nop
    ctx->pc = 0x2d96d8u;
    // NOP
    // 0x2d96dc: 0x0  nop
    ctx->pc = 0x2d96dcu;
    // NOP
    // 0x2d96e0: 0x80af880  j           func_2BE200
    ctx->pc = 0x2D96E0u;
    ctx->pc = 0x2D96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96E0u;
            // 0x2d96e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE200u;
    {
        auto targetFn = runtime->lookupFunction(0x2BE200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D96E8u;
    // 0x2d96e8: 0x0  nop
    ctx->pc = 0x2d96e8u;
    // NOP
    // 0x2d96ec: 0x0  nop
    ctx->pc = 0x2d96ecu;
    // NOP
    // 0x2d96f0: 0x80b4174  j           func_2D05D0
    ctx->pc = 0x2D96F0u;
    ctx->pc = 0x2D96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D96F0u;
            // 0x2d96f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D05D0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D05D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D96F8u;
    // 0x2d96f8: 0x0  nop
    ctx->pc = 0x2d96f8u;
    // NOP
    // 0x2d96fc: 0x0  nop
    ctx->pc = 0x2d96fcu;
    // NOP
    // 0x2d9700: 0x80afa44  j           func_2BE910
    ctx->pc = 0x2D9700u;
    ctx->pc = 0x2D9704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9700u;
            // 0x2d9704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE910u;
    {
        auto targetFn = runtime->lookupFunction(0x2BE910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9708u;
    // 0x2d9708: 0x0  nop
    ctx->pc = 0x2d9708u;
    // NOP
    // 0x2d970c: 0x0  nop
    ctx->pc = 0x2d970cu;
    // NOP
    // 0x2d9710: 0x80afad0  j           func_2BEB40
    ctx->pc = 0x2D9710u;
    ctx->pc = 0x2D9714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9710u;
            // 0x2d9714: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB40u;
    if (runtime->hasFunction(0x2BEB40u)) {
        auto targetFn = runtime->lookupFunction(0x2BEB40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BEB40_0x2beb40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9718u;
    // 0x2d9718: 0x0  nop
    ctx->pc = 0x2d9718u;
    // NOP
    // 0x2d971c: 0x0  nop
    ctx->pc = 0x2d971cu;
    // NOP
    // 0x2d9720: 0x80afc0c  j           func_2BF030
    ctx->pc = 0x2D9720u;
    ctx->pc = 0x2D9724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9720u;
            // 0x2d9724: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF030u;
    {
        auto targetFn = runtime->lookupFunction(0x2BF030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9728u;
    // 0x2d9728: 0x0  nop
    ctx->pc = 0x2d9728u;
    // NOP
    // 0x2d972c: 0x0  nop
    ctx->pc = 0x2d972cu;
    // NOP
    // 0x2d9730: 0x80b413c  j           func_2D04F0
    ctx->pc = 0x2D9730u;
    ctx->pc = 0x2D9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9730u;
            // 0x2d9734: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D04F0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D04F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9738u;
    // 0x2d9738: 0x0  nop
    ctx->pc = 0x2d9738u;
    // NOP
    // 0x2d973c: 0x0  nop
    ctx->pc = 0x2d973cu;
    // NOP
    // 0x2d9740: 0x80afca4  j           func_2BF290
    ctx->pc = 0x2D9740u;
    ctx->pc = 0x2D9744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9740u;
            // 0x2d9744: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF290u;
    {
        auto targetFn = runtime->lookupFunction(0x2BF290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9748u;
    // 0x2d9748: 0x0  nop
    ctx->pc = 0x2d9748u;
    // NOP
    // 0x2d974c: 0x0  nop
    ctx->pc = 0x2d974cu;
    // NOP
    // 0x2d9750: 0x80afdb8  j           func_2BF6E0
    ctx->pc = 0x2D9750u;
    ctx->pc = 0x2D9754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9750u;
            // 0x2d9754: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BF6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9758u;
    // 0x2d9758: 0x0  nop
    ctx->pc = 0x2d9758u;
    // NOP
    // 0x2d975c: 0x0  nop
    ctx->pc = 0x2d975cu;
    // NOP
    // 0x2d9760: 0x80afe4c  j           func_2BF930
    ctx->pc = 0x2D9760u;
    ctx->pc = 0x2D9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9760u;
            // 0x2d9764: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF930u;
    {
        auto targetFn = runtime->lookupFunction(0x2BF930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9768u;
    // 0x2d9768: 0x0  nop
    ctx->pc = 0x2d9768u;
    // NOP
    // 0x2d976c: 0x0  nop
    ctx->pc = 0x2d976cu;
    // NOP
    // 0x2d9770: 0x80aff74  j           func_2BFDD0
    ctx->pc = 0x2D9770u;
    ctx->pc = 0x2D9774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9770u;
            // 0x2d9774: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BFDD0u;
    {
        auto targetFn = runtime->lookupFunction(0x2BFDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9778u;
    // 0x2d9778: 0x0  nop
    ctx->pc = 0x2d9778u;
    // NOP
    // 0x2d977c: 0x0  nop
    ctx->pc = 0x2d977cu;
    // NOP
    // 0x2d9780: 0x80b000c  j           func_2C0030
    ctx->pc = 0x2D9780u;
    ctx->pc = 0x2D9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9780u;
            // 0x2d9784: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0030u;
    {
        auto targetFn = runtime->lookupFunction(0x2C0030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9788u;
    // 0x2d9788: 0x0  nop
    ctx->pc = 0x2d9788u;
    // NOP
    // 0x2d978c: 0x0  nop
    ctx->pc = 0x2d978cu;
    // NOP
    // 0x2d9790: 0x80b00e8  j           func_2C03A0
    ctx->pc = 0x2D9790u;
    ctx->pc = 0x2D9794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9790u;
            // 0x2d9794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C03A0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9798u;
    // 0x2d9798: 0x0  nop
    ctx->pc = 0x2d9798u;
    // NOP
    // 0x2d979c: 0x0  nop
    ctx->pc = 0x2d979cu;
    // NOP
    // 0x2d97a0: 0x80b0220  j           func_2C0880
    ctx->pc = 0x2D97A0u;
    ctx->pc = 0x2D97A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97A0u;
            // 0x2d97a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0880u;
    {
        auto targetFn = runtime->lookupFunction(0x2C0880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D97A8u;
    // 0x2d97a8: 0x0  nop
    ctx->pc = 0x2d97a8u;
    // NOP
    // 0x2d97ac: 0x0  nop
    ctx->pc = 0x2d97acu;
    // NOP
    // 0x2d97b0: 0x80b02cc  j           func_2C0B30
    ctx->pc = 0x2D97B0u;
    ctx->pc = 0x2D97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97B0u;
            // 0x2d97b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0B30u;
    if (runtime->hasFunction(0x2C0B30u)) {
        auto targetFn = runtime->lookupFunction(0x2C0B30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C0B30_0x2c0b30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D97B8u;
    // 0x2d97b8: 0x0  nop
    ctx->pc = 0x2d97b8u;
    // NOP
    // 0x2d97bc: 0x0  nop
    ctx->pc = 0x2d97bcu;
    // NOP
    // 0x2d97c0: 0x80b0470  j           func_2C11C0
    ctx->pc = 0x2D97C0u;
    ctx->pc = 0x2D97C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97C0u;
            // 0x2d97c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C11C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C11C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D97C8u;
    // 0x2d97c8: 0x0  nop
    ctx->pc = 0x2d97c8u;
    // NOP
    // 0x2d97cc: 0x0  nop
    ctx->pc = 0x2d97ccu;
    // NOP
    // 0x2d97d0: 0x80b05e4  j           func_2C1790
    ctx->pc = 0x2D97D0u;
    ctx->pc = 0x2D97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97D0u;
            // 0x2d97d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1790u;
    {
        auto targetFn = runtime->lookupFunction(0x2C1790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D97D8u;
    // 0x2d97d8: 0x0  nop
    ctx->pc = 0x2d97d8u;
    // NOP
    // 0x2d97dc: 0x0  nop
    ctx->pc = 0x2d97dcu;
    // NOP
    // 0x2d97e0: 0x80b40b8  j           func_2D02E0
    ctx->pc = 0x2D97E0u;
    ctx->pc = 0x2D97E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97E0u;
            // 0x2d97e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D02E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D02E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D97E8u;
    // 0x2d97e8: 0x0  nop
    ctx->pc = 0x2d97e8u;
    // NOP
    // 0x2d97ec: 0x0  nop
    ctx->pc = 0x2d97ecu;
    // NOP
    // 0x2d97f0: 0x80b078c  j           func_2C1E30
    ctx->pc = 0x2D97F0u;
    ctx->pc = 0x2D97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97F0u;
            // 0x2d97f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E30u;
    {
        auto targetFn = runtime->lookupFunction(0x2C1E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D97F8u;
    // 0x2d97f8: 0x0  nop
    ctx->pc = 0x2d97f8u;
    // NOP
    // 0x2d97fc: 0x0  nop
    ctx->pc = 0x2d97fcu;
    // NOP
    // 0x2d9800: 0x80b4078  j           func_2D01E0
    ctx->pc = 0x2D9800u;
    ctx->pc = 0x2D9804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9800u;
            // 0x2d9804: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D01E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D01E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9808u;
    // 0x2d9808: 0x0  nop
    ctx->pc = 0x2d9808u;
    // NOP
    // 0x2d980c: 0x0  nop
    ctx->pc = 0x2d980cu;
    // NOP
    // 0x2d9810: 0x80b090c  j           func_2C2430
    ctx->pc = 0x2D9810u;
    ctx->pc = 0x2D9814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9810u;
            // 0x2d9814: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2430u;
    {
        auto targetFn = runtime->lookupFunction(0x2C2430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9818u;
    // 0x2d9818: 0x0  nop
    ctx->pc = 0x2d9818u;
    // NOP
    // 0x2d981c: 0x0  nop
    ctx->pc = 0x2d981cu;
    // NOP
    // 0x2d9820: 0x80b404c  j           func_2D0130
    ctx->pc = 0x2D9820u;
    ctx->pc = 0x2D9824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9820u;
            // 0x2d9824: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0130u;
    {
        auto targetFn = runtime->lookupFunction(0x2D0130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9828u;
    // 0x2d9828: 0x0  nop
    ctx->pc = 0x2d9828u;
    // NOP
    // 0x2d982c: 0x0  nop
    ctx->pc = 0x2d982cu;
    // NOP
    // 0x2d9830: 0x80b09c4  j           func_2C2710
    ctx->pc = 0x2D9830u;
    ctx->pc = 0x2D9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9830u;
            // 0x2d9834: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2710u;
    if (runtime->hasFunction(0x2C2710u)) {
        auto targetFn = runtime->lookupFunction(0x2C2710u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C2710_0x2c2710(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9838u;
    // 0x2d9838: 0x0  nop
    ctx->pc = 0x2d9838u;
    // NOP
    // 0x2d983c: 0x0  nop
    ctx->pc = 0x2d983cu;
    // NOP
    // 0x2d9840: 0x80b0b44  j           func_2C2D10
    ctx->pc = 0x2D9840u;
    ctx->pc = 0x2D9844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9840u;
            // 0x2d9844: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D10u;
    {
        auto targetFn = runtime->lookupFunction(0x2C2D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9848u;
    // 0x2d9848: 0x0  nop
    ctx->pc = 0x2d9848u;
    // NOP
    // 0x2d984c: 0x0  nop
    ctx->pc = 0x2d984cu;
    // NOP
    // 0x2d9850: 0x80b4014  j           func_2D0050
    ctx->pc = 0x2D9850u;
    ctx->pc = 0x2D9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9850u;
            // 0x2d9854: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0050u;
    {
        auto targetFn = runtime->lookupFunction(0x2D0050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9858u;
    // 0x2d9858: 0x0  nop
    ctx->pc = 0x2d9858u;
    // NOP
    // 0x2d985c: 0x0  nop
    ctx->pc = 0x2d985cu;
    // NOP
    // 0x2d9860: 0x80b0bd0  j           func_2C2F40
    ctx->pc = 0x2D9860u;
    ctx->pc = 0x2D9864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9860u;
            // 0x2d9864: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F40u;
    if (runtime->hasFunction(0x2C2F40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2F40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C2F40_0x2c2f40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9868u;
    // 0x2d9868: 0x0  nop
    ctx->pc = 0x2d9868u;
    // NOP
    // 0x2d986c: 0x0  nop
    ctx->pc = 0x2d986cu;
    // NOP
    // 0x2d9870: 0x80b0cec  j           func_2C33B0
    ctx->pc = 0x2D9870u;
    ctx->pc = 0x2D9874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9870u;
            // 0x2d9874: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C33B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C33B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9878u;
    // 0x2d9878: 0x0  nop
    ctx->pc = 0x2d9878u;
    // NOP
    // 0x2d987c: 0x0  nop
    ctx->pc = 0x2d987cu;
    // NOP
    // 0x2d9880: 0x80b3fec  j           func_2CFFB0
    ctx->pc = 0x2D9880u;
    ctx->pc = 0x2D9884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9880u;
            // 0x2d9884: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFFB0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9888u;
    // 0x2d9888: 0x0  nop
    ctx->pc = 0x2d9888u;
    // NOP
    // 0x2d988c: 0x0  nop
    ctx->pc = 0x2d988cu;
    // NOP
    // 0x2d9890: 0x80b0d38  j           func_2C34E0
    ctx->pc = 0x2D9890u;
    ctx->pc = 0x2D9894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9890u;
            // 0x2d9894: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C34E0u;
    if (runtime->hasFunction(0x2C34E0u)) {
        auto targetFn = runtime->lookupFunction(0x2C34E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C34E0_0x2c34e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9898u;
    // 0x2d9898: 0x0  nop
    ctx->pc = 0x2d9898u;
    // NOP
    // 0x2d989c: 0x0  nop
    ctx->pc = 0x2d989cu;
    // NOP
    // 0x2d98a0: 0x80b0e58  j           func_2C3960
    ctx->pc = 0x2D98A0u;
    ctx->pc = 0x2D98A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98A0u;
            // 0x2d98a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3960u;
    {
        auto targetFn = runtime->lookupFunction(0x2C3960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D98A8u;
    // 0x2d98a8: 0x0  nop
    ctx->pc = 0x2d98a8u;
    // NOP
    // 0x2d98ac: 0x0  nop
    ctx->pc = 0x2d98acu;
    // NOP
    // 0x2d98b0: 0x80b100c  j           func_2C4030
    ctx->pc = 0x2D98B0u;
    ctx->pc = 0x2D98B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98B0u;
            // 0x2d98b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4030u;
    {
        auto targetFn = runtime->lookupFunction(0x2C4030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D98B8u;
    // 0x2d98b8: 0x0  nop
    ctx->pc = 0x2d98b8u;
    // NOP
    // 0x2d98bc: 0x0  nop
    ctx->pc = 0x2d98bcu;
    // NOP
    // 0x2d98c0: 0x80b10b4  j           func_2C42D0
    ctx->pc = 0x2D98C0u;
    ctx->pc = 0x2D98C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98C0u;
            // 0x2d98c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C42D0u;
    if (runtime->hasFunction(0x2C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C42D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C42D0_0x2c42d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D98C8u;
    // 0x2d98c8: 0x0  nop
    ctx->pc = 0x2d98c8u;
    // NOP
    // 0x2d98cc: 0x0  nop
    ctx->pc = 0x2d98ccu;
    // NOP
    // 0x2d98d0: 0x80b1074  j           func_2C41D0
    ctx->pc = 0x2D98D0u;
    ctx->pc = 0x2D98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98D0u;
            // 0x2d98d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C41D0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C41D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D98D8u;
    // 0x2d98d8: 0x0  nop
    ctx->pc = 0x2d98d8u;
    // NOP
    // 0x2d98dc: 0x0  nop
    ctx->pc = 0x2d98dcu;
    // NOP
    // 0x2d98e0: 0x80b11a0  j           func_2C4680
    ctx->pc = 0x2D98E0u;
    ctx->pc = 0x2D98E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98E0u;
            // 0x2d98e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4680u;
    {
        auto targetFn = runtime->lookupFunction(0x2C4680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D98E8u;
    // 0x2d98e8: 0x0  nop
    ctx->pc = 0x2d98e8u;
    // NOP
    // 0x2d98ec: 0x0  nop
    ctx->pc = 0x2d98ecu;
    // NOP
    // 0x2d98f0: 0x812f988  j           func_4BE620
    ctx->pc = 0x2D98F0u;
    ctx->pc = 0x2D98F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D98F0u;
            // 0x2d98f4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BE620u;
    {
        auto targetFn = runtime->lookupFunction(0x4BE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D98F8u;
    // 0x2d98f8: 0x0  nop
    ctx->pc = 0x2d98f8u;
    // NOP
    // 0x2d98fc: 0x0  nop
    ctx->pc = 0x2d98fcu;
    // NOP
    // 0x2d9900: 0x812f8e0  j           func_4BE380
    ctx->pc = 0x2D9900u;
    ctx->pc = 0x2D9904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9900u;
            // 0x2d9904: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BE380u;
    {
        auto targetFn = runtime->lookupFunction(0x4BE380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9908u;
    // 0x2d9908: 0x0  nop
    ctx->pc = 0x2d9908u;
    // NOP
    // 0x2d990c: 0x0  nop
    ctx->pc = 0x2d990cu;
    // NOP
    // 0x2d9910: 0x812f94c  j           func_4BE530
    ctx->pc = 0x2D9910u;
    ctx->pc = 0x2D9914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9910u;
            // 0x2d9914: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BE530u;
    {
        auto targetFn = runtime->lookupFunction(0x4BE530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9918u;
    // 0x2d9918: 0x0  nop
    ctx->pc = 0x2d9918u;
    // NOP
    // 0x2d991c: 0x0  nop
    ctx->pc = 0x2d991cu;
    // NOP
    // 0x2d9920: 0x80b3f94  j           func_2CFE50
    ctx->pc = 0x2D9920u;
    ctx->pc = 0x2D9924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9920u;
            // 0x2d9924: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE50u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9928u;
    // 0x2d9928: 0x0  nop
    ctx->pc = 0x2d9928u;
    // NOP
    // 0x2d992c: 0x0  nop
    ctx->pc = 0x2d992cu;
    // NOP
    // 0x2d9930: 0x80b3f94  j           func_2CFE50
    ctx->pc = 0x2D9930u;
    ctx->pc = 0x2D9934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9930u;
            // 0x2d9934: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE50u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9938u;
    // 0x2d9938: 0x0  nop
    ctx->pc = 0x2d9938u;
    // NOP
    // 0x2d993c: 0x0  nop
    ctx->pc = 0x2d993cu;
    // NOP
    // 0x2d9940: 0x80b1250  j           func_2C4940
    ctx->pc = 0x2D9940u;
    ctx->pc = 0x2D9944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9940u;
            // 0x2d9944: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (runtime->hasFunction(0x2C4940u)) {
        auto targetFn = runtime->lookupFunction(0x2C4940u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C4940_0x2c4940(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9948u;
    // 0x2d9948: 0x0  nop
    ctx->pc = 0x2d9948u;
    // NOP
    // 0x2d994c: 0x0  nop
    ctx->pc = 0x2d994cu;
    // NOP
    // 0x2d9950: 0x80b13f4  j           func_2C4FD0
    ctx->pc = 0x2D9950u;
    ctx->pc = 0x2D9954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9950u;
            // 0x2d9954: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4FD0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9958u;
    // 0x2d9958: 0x0  nop
    ctx->pc = 0x2d9958u;
    // NOP
    // 0x2d995c: 0x0  nop
    ctx->pc = 0x2d995cu;
    // NOP
    // 0x2d9960: 0x80b149c  j           func_2C5270
    ctx->pc = 0x2D9960u;
    ctx->pc = 0x2D9964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9960u;
            // 0x2d9964: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5270u;
    if (runtime->hasFunction(0x2C5270u)) {
        auto targetFn = runtime->lookupFunction(0x2C5270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C5270_0x2c5270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9968u;
    // 0x2d9968: 0x0  nop
    ctx->pc = 0x2d9968u;
    // NOP
    // 0x2d996c: 0x0  nop
    ctx->pc = 0x2d996cu;
    // NOP
    // 0x2d9970: 0x80b145c  j           func_2C5170
    ctx->pc = 0x2D9970u;
    ctx->pc = 0x2D9974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9970u;
            // 0x2d9974: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5170u;
    {
        auto targetFn = runtime->lookupFunction(0x2C5170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9978u;
    // 0x2d9978: 0x0  nop
    ctx->pc = 0x2d9978u;
    // NOP
    // 0x2d997c: 0x0  nop
    ctx->pc = 0x2d997cu;
    // NOP
    // 0x2d9980: 0x80b158c  j           func_2C5630
    ctx->pc = 0x2D9980u;
    ctx->pc = 0x2D9984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9980u;
            // 0x2d9984: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5630u;
    {
        auto targetFn = runtime->lookupFunction(0x2C5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9988u;
    // 0x2d9988: 0x0  nop
    ctx->pc = 0x2d9988u;
    // NOP
    // 0x2d998c: 0x0  nop
    ctx->pc = 0x2d998cu;
    // NOP
    // 0x2d9990: 0x8119cf0  j           func_4673C0
    ctx->pc = 0x2D9990u;
    ctx->pc = 0x2D9994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9990u;
            // 0x2d9994: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4673C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4673C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9998u;
    // 0x2d9998: 0x0  nop
    ctx->pc = 0x2d9998u;
    // NOP
    // 0x2d999c: 0x0  nop
    ctx->pc = 0x2d999cu;
    // NOP
    // 0x2d99a0: 0x8119c24  j           func_467090
    ctx->pc = 0x2D99A0u;
    ctx->pc = 0x2D99A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99A0u;
            // 0x2d99a4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x467090u;
    {
        auto targetFn = runtime->lookupFunction(0x467090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D99A8u;
    // 0x2d99a8: 0x0  nop
    ctx->pc = 0x2d99a8u;
    // NOP
    // 0x2d99ac: 0x0  nop
    ctx->pc = 0x2d99acu;
    // NOP
    // 0x2d99b0: 0x8119c90  j           func_467240
    ctx->pc = 0x2D99B0u;
    ctx->pc = 0x2D99B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99B0u;
            // 0x2d99b4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x467240u;
    {
        auto targetFn = runtime->lookupFunction(0x467240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D99B8u;
    // 0x2d99b8: 0x0  nop
    ctx->pc = 0x2d99b8u;
    // NOP
    // 0x2d99bc: 0x0  nop
    ctx->pc = 0x2d99bcu;
    // NOP
    // 0x2d99c0: 0x80b3f28  j           func_2CFCA0
    ctx->pc = 0x2D99C0u;
    ctx->pc = 0x2D99C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99C0u;
            // 0x2d99c4: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCA0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D99C8u;
    // 0x2d99c8: 0x0  nop
    ctx->pc = 0x2d99c8u;
    // NOP
    // 0x2d99cc: 0x0  nop
    ctx->pc = 0x2d99ccu;
    // NOP
    // 0x2d99d0: 0x80b3f28  j           func_2CFCA0
    ctx->pc = 0x2D99D0u;
    ctx->pc = 0x2D99D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99D0u;
            // 0x2d99d4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCA0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D99D8u;
    // 0x2d99d8: 0x0  nop
    ctx->pc = 0x2d99d8u;
    // NOP
    // 0x2d99dc: 0x0  nop
    ctx->pc = 0x2d99dcu;
    // NOP
    // 0x2d99e0: 0x80b15f4  j           func_2C57D0
    ctx->pc = 0x2D99E0u;
    ctx->pc = 0x2D99E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99E0u;
            // 0x2d99e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C57D0u;
    if (runtime->hasFunction(0x2C57D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C57D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C57D0_0x2c57d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D99E8u;
    // 0x2d99e8: 0x0  nop
    ctx->pc = 0x2d99e8u;
    // NOP
    // 0x2d99ec: 0x0  nop
    ctx->pc = 0x2d99ecu;
    // NOP
    // 0x2d99f0: 0x80b171c  j           func_2C5C70
    ctx->pc = 0x2D99F0u;
    ctx->pc = 0x2D99F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99F0u;
            // 0x2d99f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C70u;
    {
        auto targetFn = runtime->lookupFunction(0x2C5C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D99F8u;
    // 0x2d99f8: 0x0  nop
    ctx->pc = 0x2d99f8u;
    // NOP
    // 0x2d99fc: 0x0  nop
    ctx->pc = 0x2d99fcu;
    // NOP
    // 0x2d9a00: 0x81132e0  j           func_44CB80
    ctx->pc = 0x2D9A00u;
    ctx->pc = 0x2D9A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A00u;
            // 0x2d9a04: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44CB80u;
    {
        auto targetFn = runtime->lookupFunction(0x44CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A08u;
    // 0x2d9a08: 0x0  nop
    ctx->pc = 0x2d9a08u;
    // NOP
    // 0x2d9a0c: 0x0  nop
    ctx->pc = 0x2d9a0cu;
    // NOP
    // 0x2d9a10: 0x811324c  j           func_44C930
    ctx->pc = 0x2D9A10u;
    ctx->pc = 0x2D9A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A10u;
            // 0x2d9a14: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44C930u;
    {
        auto targetFn = runtime->lookupFunction(0x44C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A18u;
    // 0x2d9a18: 0x0  nop
    ctx->pc = 0x2d9a18u;
    // NOP
    // 0x2d9a1c: 0x0  nop
    ctx->pc = 0x2d9a1cu;
    // NOP
    // 0x2d9a20: 0x811329c  j           func_44CA70
    ctx->pc = 0x2D9A20u;
    ctx->pc = 0x2D9A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A20u;
            // 0x2d9a24: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44CA70u;
    {
        auto targetFn = runtime->lookupFunction(0x44CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A28u;
    // 0x2d9a28: 0x0  nop
    ctx->pc = 0x2d9a28u;
    // NOP
    // 0x2d9a2c: 0x0  nop
    ctx->pc = 0x2d9a2cu;
    // NOP
    // 0x2d9a30: 0x80b3ed4  j           func_2CFB50
    ctx->pc = 0x2D9A30u;
    ctx->pc = 0x2D9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A30u;
            // 0x2d9a34: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB50u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A38u;
    // 0x2d9a38: 0x0  nop
    ctx->pc = 0x2d9a38u;
    // NOP
    // 0x2d9a3c: 0x0  nop
    ctx->pc = 0x2d9a3cu;
    // NOP
    // 0x2d9a40: 0x80b3ed4  j           func_2CFB50
    ctx->pc = 0x2D9A40u;
    ctx->pc = 0x2D9A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A40u;
            // 0x2d9a44: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB50u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A48u;
    // 0x2d9a48: 0x0  nop
    ctx->pc = 0x2d9a48u;
    // NOP
    // 0x2d9a4c: 0x0  nop
    ctx->pc = 0x2d9a4cu;
    // NOP
    // 0x2d9a50: 0x80b17e0  j           func_2C5F80
    ctx->pc = 0x2D9A50u;
    ctx->pc = 0x2D9A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A50u;
            // 0x2d9a54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5F80u;
    if (runtime->hasFunction(0x2C5F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C5F80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C5F80_0x2c5f80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9A58u;
    // 0x2d9a58: 0x0  nop
    ctx->pc = 0x2d9a58u;
    // NOP
    // 0x2d9a5c: 0x0  nop
    ctx->pc = 0x2d9a5cu;
    // NOP
    // 0x2d9a60: 0x80b190c  j           func_2C6430
    ctx->pc = 0x2D9A60u;
    ctx->pc = 0x2D9A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A60u;
            // 0x2d9a64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6430u;
    {
        auto targetFn = runtime->lookupFunction(0x2C6430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A68u;
    // 0x2d9a68: 0x0  nop
    ctx->pc = 0x2d9a68u;
    // NOP
    // 0x2d9a6c: 0x0  nop
    ctx->pc = 0x2d9a6cu;
    // NOP
    // 0x2d9a70: 0x80dbc9c  j           func_36F270
    ctx->pc = 0x2D9A70u;
    ctx->pc = 0x2D9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A70u;
            // 0x2d9a74: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36F270u;
    {
        auto targetFn = runtime->lookupFunction(0x36F270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A78u;
    // 0x2d9a78: 0x0  nop
    ctx->pc = 0x2d9a78u;
    // NOP
    // 0x2d9a7c: 0x0  nop
    ctx->pc = 0x2d9a7cu;
    // NOP
    // 0x2d9a80: 0x80dbbfc  j           func_36EFF0
    ctx->pc = 0x2D9A80u;
    ctx->pc = 0x2D9A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A80u;
            // 0x2d9a84: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36EFF0u;
    {
        auto targetFn = runtime->lookupFunction(0x36EFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A88u;
    // 0x2d9a88: 0x0  nop
    ctx->pc = 0x2d9a88u;
    // NOP
    // 0x2d9a8c: 0x0  nop
    ctx->pc = 0x2d9a8cu;
    // NOP
    // 0x2d9a90: 0x80dbc68  j           func_36F1A0
    ctx->pc = 0x2D9A90u;
    ctx->pc = 0x2D9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A90u;
            // 0x2d9a94: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36F1A0u;
    {
        auto targetFn = runtime->lookupFunction(0x36F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9A98u;
    // 0x2d9a98: 0x0  nop
    ctx->pc = 0x2d9a98u;
    // NOP
    // 0x2d9a9c: 0x0  nop
    ctx->pc = 0x2d9a9cu;
    // NOP
    // 0x2d9aa0: 0x80b3e80  j           func_2CFA00
    ctx->pc = 0x2D9AA0u;
    ctx->pc = 0x2D9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AA0u;
            // 0x2d9aa4: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFA00u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9AA8u;
    // 0x2d9aa8: 0x0  nop
    ctx->pc = 0x2d9aa8u;
    // NOP
    // 0x2d9aac: 0x0  nop
    ctx->pc = 0x2d9aacu;
    // NOP
    // 0x2d9ab0: 0x80b3e80  j           func_2CFA00
    ctx->pc = 0x2D9AB0u;
    ctx->pc = 0x2D9AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AB0u;
            // 0x2d9ab4: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFA00u;
    {
        auto targetFn = runtime->lookupFunction(0x2CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9AB8u;
    // 0x2d9ab8: 0x0  nop
    ctx->pc = 0x2d9ab8u;
    // NOP
    // 0x2d9abc: 0x0  nop
    ctx->pc = 0x2d9abcu;
    // NOP
    // 0x2d9ac0: 0x80b19b4  j           func_2C66D0
    ctx->pc = 0x2D9AC0u;
    ctx->pc = 0x2D9AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AC0u;
            // 0x2d9ac4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C66D0u;
    if (runtime->hasFunction(0x2C66D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C66D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C66D0_0x2c66d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9AC8u;
    // 0x2d9ac8: 0x0  nop
    ctx->pc = 0x2d9ac8u;
    // NOP
    // 0x2d9acc: 0x0  nop
    ctx->pc = 0x2d9accu;
    // NOP
    // 0x2d9ad0: 0x80b1ad4  j           func_2C6B50
    ctx->pc = 0x2D9AD0u;
    ctx->pc = 0x2D9AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AD0u;
            // 0x2d9ad4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B50u;
    {
        auto targetFn = runtime->lookupFunction(0x2C6B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9AD8u;
    // 0x2d9ad8: 0x0  nop
    ctx->pc = 0x2d9ad8u;
    // NOP
    // 0x2d9adc: 0x0  nop
    ctx->pc = 0x2d9adcu;
    // NOP
    // 0x2d9ae0: 0x80b1b60  j           func_2C6D80
    ctx->pc = 0x2D9AE0u;
    ctx->pc = 0x2D9AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AE0u;
            // 0x2d9ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D80u;
    if (runtime->hasFunction(0x2C6D80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6D80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C6D80_0x2c6d80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9AE8u;
    // 0x2d9ae8: 0x0  nop
    ctx->pc = 0x2d9ae8u;
    // NOP
    // 0x2d9aec: 0x0  nop
    ctx->pc = 0x2d9aecu;
    // NOP
    // 0x2d9af0: 0x80b1c6c  j           func_2C71B0
    ctx->pc = 0x2D9AF0u;
    ctx->pc = 0x2D9AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AF0u;
            // 0x2d9af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C71B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C71B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9AF8u;
    // 0x2d9af8: 0x0  nop
    ctx->pc = 0x2d9af8u;
    // NOP
    // 0x2d9afc: 0x0  nop
    ctx->pc = 0x2d9afcu;
    // NOP
    // 0x2d9b00: 0x80b1d14  j           func_2C7450
    ctx->pc = 0x2D9B00u;
    ctx->pc = 0x2D9B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B00u;
            // 0x2d9b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7450u;
    if (runtime->hasFunction(0x2C7450u)) {
        auto targetFn = runtime->lookupFunction(0x2C7450u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C7450_0x2c7450(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9B08u;
    // 0x2d9b08: 0x0  nop
    ctx->pc = 0x2d9b08u;
    // NOP
    // 0x2d9b0c: 0x0  nop
    ctx->pc = 0x2d9b0cu;
    // NOP
    // 0x2d9b10: 0x80b1e20  j           func_2C7880
    ctx->pc = 0x2D9B10u;
    ctx->pc = 0x2D9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B10u;
            // 0x2d9b14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7880u;
    {
        auto targetFn = runtime->lookupFunction(0x2C7880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9B18u;
    // 0x2d9b18: 0x0  nop
    ctx->pc = 0x2d9b18u;
    // NOP
    // 0x2d9b1c: 0x0  nop
    ctx->pc = 0x2d9b1cu;
    // NOP
    // 0x2d9b20: 0x80b1ec8  j           func_2C7B20
    ctx->pc = 0x2D9B20u;
    ctx->pc = 0x2D9B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B20u;
            // 0x2d9b24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B20u;
    if (runtime->hasFunction(0x2C7B20u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C7B20_0x2c7b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9B28u;
    // 0x2d9b28: 0x0  nop
    ctx->pc = 0x2d9b28u;
    // NOP
    // 0x2d9b2c: 0x0  nop
    ctx->pc = 0x2d9b2cu;
    // NOP
    // 0x2d9b30: 0x80b1fd4  j           func_2C7F50
    ctx->pc = 0x2D9B30u;
    ctx->pc = 0x2D9B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B30u;
            // 0x2d9b34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7F50u;
    {
        auto targetFn = runtime->lookupFunction(0x2C7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9B38u;
    // 0x2d9b38: 0x0  nop
    ctx->pc = 0x2d9b38u;
    // NOP
    // 0x2d9b3c: 0x0  nop
    ctx->pc = 0x2d9b3cu;
    // NOP
    // 0x2d9b40: 0x80b207c  j           func_2C81F0
    ctx->pc = 0x2D9B40u;
    ctx->pc = 0x2D9B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B40u;
            // 0x2d9b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81F0u;
    if (runtime->hasFunction(0x2C81F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C81F0_0x2c81f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9B48u;
    // 0x2d9b48: 0x0  nop
    ctx->pc = 0x2d9b48u;
    // NOP
    // 0x2d9b4c: 0x0  nop
    ctx->pc = 0x2d9b4cu;
    // NOP
    // 0x2d9b50: 0x80b2188  j           func_2C8620
    ctx->pc = 0x2D9B50u;
    ctx->pc = 0x2D9B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B50u;
            // 0x2d9b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8620u;
    {
        auto targetFn = runtime->lookupFunction(0x2C8620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9B58u;
    // 0x2d9b58: 0x0  nop
    ctx->pc = 0x2d9b58u;
    // NOP
    // 0x2d9b5c: 0x0  nop
    ctx->pc = 0x2d9b5cu;
    // NOP
    // 0x2d9b60: 0x80b2214  j           func_2C8850
    ctx->pc = 0x2D9B60u;
    ctx->pc = 0x2D9B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B60u;
            // 0x2d9b64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (runtime->hasFunction(0x2C8850u)) {
        auto targetFn = runtime->lookupFunction(0x2C8850u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C8850_0x2c8850(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9B68u;
    // 0x2d9b68: 0x0  nop
    ctx->pc = 0x2d9b68u;
    // NOP
    // 0x2d9b6c: 0x0  nop
    ctx->pc = 0x2d9b6cu;
    // NOP
    // 0x2d9b70: 0x80b2320  j           func_2C8C80
    ctx->pc = 0x2D9B70u;
    ctx->pc = 0x2D9B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B70u;
            // 0x2d9b74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C80u;
    {
        auto targetFn = runtime->lookupFunction(0x2C8C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9B78u;
    // 0x2d9b78: 0x0  nop
    ctx->pc = 0x2d9b78u;
    // NOP
    // 0x2d9b7c: 0x0  nop
    ctx->pc = 0x2d9b7cu;
    // NOP
    // 0x2d9b80: 0x80b23c8  j           func_2C8F20
    ctx->pc = 0x2D9B80u;
    ctx->pc = 0x2D9B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B80u;
            // 0x2d9b84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F20u;
    if (runtime->hasFunction(0x2C8F20u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C8F20_0x2c8f20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9B88u;
    // 0x2d9b88: 0x0  nop
    ctx->pc = 0x2d9b88u;
    // NOP
    // 0x2d9b8c: 0x0  nop
    ctx->pc = 0x2d9b8cu;
    // NOP
    // 0x2d9b90: 0x80b24e8  j           func_2C93A0
    ctx->pc = 0x2D9B90u;
    ctx->pc = 0x2D9B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B90u;
            // 0x2d9b94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C93A0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C93A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9B98u;
    // 0x2d9b98: 0x0  nop
    ctx->pc = 0x2d9b98u;
    // NOP
    // 0x2d9b9c: 0x0  nop
    ctx->pc = 0x2d9b9cu;
    // NOP
    // 0x2d9ba0: 0x80b2590  j           func_2C9640
    ctx->pc = 0x2D9BA0u;
    ctx->pc = 0x2D9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BA0u;
            // 0x2d9ba4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9640u;
    if (runtime->hasFunction(0x2C9640u)) {
        auto targetFn = runtime->lookupFunction(0x2C9640u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C9640_0x2c9640(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9BA8u;
    // 0x2d9ba8: 0x0  nop
    ctx->pc = 0x2d9ba8u;
    // NOP
    // 0x2d9bac: 0x0  nop
    ctx->pc = 0x2d9bacu;
    // NOP
    // 0x2d9bb0: 0x80b2670  j           func_2C99C0
    ctx->pc = 0x2D9BB0u;
    ctx->pc = 0x2D9BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BB0u;
            // 0x2d9bb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C99C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C99C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9BB8u;
    // 0x2d9bb8: 0x0  nop
    ctx->pc = 0x2d9bb8u;
    // NOP
    // 0x2d9bbc: 0x0  nop
    ctx->pc = 0x2d9bbcu;
    // NOP
    // 0x2d9bc0: 0x80b2718  j           func_2C9C60
    ctx->pc = 0x2D9BC0u;
    ctx->pc = 0x2D9BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BC0u;
            // 0x2d9bc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C60u;
    if (runtime->hasFunction(0x2C9C60u)) {
        auto targetFn = runtime->lookupFunction(0x2C9C60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C9C60_0x2c9c60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9BC8u;
    // 0x2d9bc8: 0x0  nop
    ctx->pc = 0x2d9bc8u;
    // NOP
    // 0x2d9bcc: 0x0  nop
    ctx->pc = 0x2d9bccu;
    // NOP
    // 0x2d9bd0: 0x80b2844  j           func_2CA110
    ctx->pc = 0x2D9BD0u;
    ctx->pc = 0x2D9BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BD0u;
            // 0x2d9bd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA110u;
    {
        auto targetFn = runtime->lookupFunction(0x2CA110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9BD8u;
    // 0x2d9bd8: 0x0  nop
    ctx->pc = 0x2d9bd8u;
    // NOP
    // 0x2d9bdc: 0x0  nop
    ctx->pc = 0x2d9bdcu;
    // NOP
    // 0x2d9be0: 0x80b28c8  j           func_2CA320
    ctx->pc = 0x2D9BE0u;
    ctx->pc = 0x2D9BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BE0u;
            // 0x2d9be4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA320u;
    if (runtime->hasFunction(0x2CA320u)) {
        auto targetFn = runtime->lookupFunction(0x2CA320u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CA320_0x2ca320(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9BE8u;
    // 0x2d9be8: 0x0  nop
    ctx->pc = 0x2d9be8u;
    // NOP
    // 0x2d9bec: 0x0  nop
    ctx->pc = 0x2d9becu;
    // NOP
    // 0x2d9bf0: 0x80b29d4  j           func_2CA750
    ctx->pc = 0x2D9BF0u;
    ctx->pc = 0x2D9BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BF0u;
            // 0x2d9bf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA750u;
    {
        auto targetFn = runtime->lookupFunction(0x2CA750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9BF8u;
    // 0x2d9bf8: 0x0  nop
    ctx->pc = 0x2d9bf8u;
    // NOP
    // 0x2d9bfc: 0x0  nop
    ctx->pc = 0x2d9bfcu;
    // NOP
    // 0x2d9c00: 0x80b2a58  j           func_2CA960
    ctx->pc = 0x2D9C00u;
    ctx->pc = 0x2D9C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C00u;
            // 0x2d9c04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA960u;
    if (runtime->hasFunction(0x2CA960u)) {
        auto targetFn = runtime->lookupFunction(0x2CA960u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CA960_0x2ca960(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9C08u;
    // 0x2d9c08: 0x0  nop
    ctx->pc = 0x2d9c08u;
    // NOP
    // 0x2d9c0c: 0x0  nop
    ctx->pc = 0x2d9c0cu;
    // NOP
    // 0x2d9c10: 0x80b2b94  j           func_2CAE50
    ctx->pc = 0x2D9C10u;
    ctx->pc = 0x2D9C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C10u;
            // 0x2d9c14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAE50u;
    {
        auto targetFn = runtime->lookupFunction(0x2CAE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C18u;
    // 0x2d9c18: 0x0  nop
    ctx->pc = 0x2d9c18u;
    // NOP
    // 0x2d9c1c: 0x0  nop
    ctx->pc = 0x2d9c1cu;
    // NOP
    // 0x2d9c20: 0x80b2d50  j           func_2CB540
    ctx->pc = 0x2D9C20u;
    ctx->pc = 0x2D9C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C20u;
            // 0x2d9c24: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB540u;
    {
        auto targetFn = runtime->lookupFunction(0x2CB540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C28u;
    // 0x2d9c28: 0x0  nop
    ctx->pc = 0x2d9c28u;
    // NOP
    // 0x2d9c2c: 0x0  nop
    ctx->pc = 0x2d9c2cu;
    // NOP
    // 0x2d9c30: 0x80b2df8  j           func_2CB7E0
    ctx->pc = 0x2D9C30u;
    ctx->pc = 0x2D9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C30u;
            // 0x2d9c34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E0u;
    if (runtime->hasFunction(0x2CB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB7E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CB7E0_0x2cb7e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9C38u;
    // 0x2d9c38: 0x0  nop
    ctx->pc = 0x2d9c38u;
    // NOP
    // 0x2d9c3c: 0x0  nop
    ctx->pc = 0x2d9c3cu;
    // NOP
    // 0x2d9c40: 0x80b2f20  j           func_2CBC80
    ctx->pc = 0x2D9C40u;
    ctx->pc = 0x2D9C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C40u;
            // 0x2d9c44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC80u;
    {
        auto targetFn = runtime->lookupFunction(0x2CBC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C48u;
    // 0x2d9c48: 0x0  nop
    ctx->pc = 0x2d9c48u;
    // NOP
    // 0x2d9c4c: 0x0  nop
    ctx->pc = 0x2d9c4cu;
    // NOP
    // 0x2d9c50: 0x80b2fc8  j           func_2CBF20
    ctx->pc = 0x2D9C50u;
    ctx->pc = 0x2D9C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C50u;
            // 0x2d9c54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBF20u;
    if (runtime->hasFunction(0x2CBF20u)) {
        auto targetFn = runtime->lookupFunction(0x2CBF20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CBF20_0x2cbf20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9C58u;
    // 0x2d9c58: 0x0  nop
    ctx->pc = 0x2d9c58u;
    // NOP
    // 0x2d9c5c: 0x0  nop
    ctx->pc = 0x2d9c5cu;
    // NOP
    // 0x2d9c60: 0x80b3108  j           func_2CC420
    ctx->pc = 0x2D9C60u;
    ctx->pc = 0x2D9C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C60u;
            // 0x2d9c64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC420u;
    {
        auto targetFn = runtime->lookupFunction(0x2CC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C68u;
    // 0x2d9c68: 0x0  nop
    ctx->pc = 0x2d9c68u;
    // NOP
    // 0x2d9c6c: 0x0  nop
    ctx->pc = 0x2d9c6cu;
    // NOP
    // 0x2d9c70: 0x80b31b0  j           func_2CC6C0
    ctx->pc = 0x2D9C70u;
    ctx->pc = 0x2D9C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C70u;
            // 0x2d9c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC6C0u;
    if (runtime->hasFunction(0x2CC6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC6C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CC6C0_0x2cc6c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9C78u;
    // 0x2d9c78: 0x0  nop
    ctx->pc = 0x2d9c78u;
    // NOP
    // 0x2d9c7c: 0x0  nop
    ctx->pc = 0x2d9c7cu;
    // NOP
    // 0x2d9c80: 0x80b3344  j           func_2CCD10
    ctx->pc = 0x2D9C80u;
    ctx->pc = 0x2D9C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C80u;
            // 0x2d9c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD10u;
    {
        auto targetFn = runtime->lookupFunction(0x2CCD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C88u;
    // 0x2d9c88: 0x0  nop
    ctx->pc = 0x2d9c88u;
    // NOP
    // 0x2d9c8c: 0x0  nop
    ctx->pc = 0x2d9c8cu;
    // NOP
    // 0x2d9c90: 0x80b3ddc  j           func_2CF770
    ctx->pc = 0x2D9C90u;
    ctx->pc = 0x2D9C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C90u;
            // 0x2d9c94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF770u;
    {
        auto targetFn = runtime->lookupFunction(0x2CF770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9C98u;
    // 0x2d9c98: 0x0  nop
    ctx->pc = 0x2d9c98u;
    // NOP
    // 0x2d9c9c: 0x0  nop
    ctx->pc = 0x2d9c9cu;
    // NOP
    // 0x2d9ca0: 0x80b33e8  j           func_2CCFA0
    ctx->pc = 0x2D9CA0u;
    ctx->pc = 0x2D9CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CA0u;
            // 0x2d9ca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCFA0u;
    if (runtime->hasFunction(0x2CCFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CCFA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CCFA0_0x2ccfa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D9CA8u;
    // 0x2d9ca8: 0x0  nop
    ctx->pc = 0x2d9ca8u;
    // NOP
    // 0x2d9cac: 0x0  nop
    ctx->pc = 0x2d9cacu;
    // NOP
    // 0x2d9cb0: 0x80b3d58  j           func_2CF560
    ctx->pc = 0x2D9CB0u;
    ctx->pc = 0x2D9CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CB0u;
            // 0x2d9cb4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF560u;
    {
        auto targetFn = runtime->lookupFunction(0x2CF560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9CB8u;
    // 0x2d9cb8: 0x0  nop
    ctx->pc = 0x2d9cb8u;
    // NOP
    // 0x2d9cbc: 0x0  nop
    ctx->pc = 0x2d9cbcu;
    // NOP
    // 0x2d9cc0: 0x80b3ce0  j           func_2CF380
    ctx->pc = 0x2D9CC0u;
    ctx->pc = 0x2D9CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CC0u;
            // 0x2d9cc4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    {
        auto targetFn = runtime->lookupFunction(0x2CF380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9CC8u;
    // 0x2d9cc8: 0x0  nop
    ctx->pc = 0x2d9cc8u;
    // NOP
    // 0x2d9ccc: 0x0  nop
    ctx->pc = 0x2d9cccu;
    // NOP
    // 0x2d9cd0: 0x80b3cb8  j           func_2CF2E0
    ctx->pc = 0x2D9CD0u;
    ctx->pc = 0x2D9CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CD0u;
            // 0x2d9cd4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF2E0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CF2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2D9CD8u;
    // 0x2d9cd8: 0x0  nop
    ctx->pc = 0x2d9cd8u;
    // NOP
    // 0x2d9cdc: 0x0  nop
    ctx->pc = 0x2d9cdcu;
    // NOP
}
