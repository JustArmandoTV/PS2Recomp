#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169688
// Address: 0x169688 - 0x1696e8
void sub_00169688_0x169688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169688_0x169688");
#endif

    switch (ctx->pc) {
        case 0x1696acu: goto label_1696ac;
        default: break;
    }

    ctx->pc = 0x169688u;

    // 0x169688: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x169688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x16968c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16968cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169690: 0x24c37370  addiu       $v1, $a2, 0x7370
    ctx->pc = 0x169690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x169694: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169698u;
    {
        const bool branch_taken_0x169698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169698u;
            // 0x16969c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169698) {
            ctx->pc = 0x1696A8u;
            goto label_1696a8;
        }
    }
    ctx->pc = 0x1696A0u;
    // 0x1696a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1696A0u;
    {
        const bool branch_taken_0x1696a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696A0u;
            // 0x1696a4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696a0) {
            ctx->pc = 0x1696E0u;
            goto label_1696e0;
        }
    }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1696ac:
    // 0x1696ac: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1696acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1696b0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1696b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1696b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1696B4u;
    {
        const bool branch_taken_0x1696b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696B4u;
            // 0x1696b8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696b4) {
            ctx->pc = 0x1696E0u;
            goto label_1696e0;
        }
    }
    ctx->pc = 0x1696BCu;
    // 0x1696bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1696bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1696c0: 0x24c47370  addiu       $a0, $a2, 0x7370
    ctx->pc = 0x1696c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x1696c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1696c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1696c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1696c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1696cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1696d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1696d4: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1696D4u;
    {
        const bool branch_taken_0x1696d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1696d4) {
            ctx->pc = 0x1696D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1696D4u;
            // 0x1696d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1696ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1696ac;
        }
    }
    ctx->pc = 0x1696DCu;
    // 0x1696dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1696dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1696e0:
    // 0x1696e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1696E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696E0u;
            // 0x1696e4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1696E8u;
}
