#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001814C8
// Address: 0x1814c8 - 0x181520
void sub_001814C8_0x1814c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001814C8_0x1814c8");
#endif

    switch (ctx->pc) {
        case 0x1814ecu: goto label_1814ec;
        default: break;
    }

    ctx->pc = 0x1814c8u;

    // 0x1814c8: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x1814cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1814ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814d0: 0x24c3b4f8  addiu       $v1, $a2, -0x4B08
    ctx->pc = 0x1814d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
    // 0x1814d4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1814d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1814D8u;
    {
        const bool branch_taken_0x1814d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1814DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814D8u;
            // 0x1814dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814d8) {
            ctx->pc = 0x1814E8u;
            goto label_1814e8;
        }
    }
    ctx->pc = 0x1814E0u;
    // 0x1814e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1814E0u;
    {
        const bool branch_taken_0x1814e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814E0u;
            // 0x1814e4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814e0) {
            ctx->pc = 0x181518u;
            goto label_181518;
        }
    }
    ctx->pc = 0x1814E8u;
label_1814e8:
    // 0x1814e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1814ec:
    // 0x1814ec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1814f0: 0x28a30028  slti        $v1, $a1, 0x28
    ctx->pc = 0x1814f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1814f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1814F4u;
    {
        const bool branch_taken_0x1814f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814F4u;
            // 0x1814f8: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814f4) {
            ctx->pc = 0x181518u;
            goto label_181518;
        }
    }
    ctx->pc = 0x1814FCu;
    // 0x1814fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x181500: 0x24c3b4f8  addiu       $v1, $a2, -0x4B08
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
    // 0x181504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x181504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181508: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x181508u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18150c: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18150Cu;
    {
        const bool branch_taken_0x18150c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18150c) {
            ctx->pc = 0x181510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18150Cu;
            // 0x181510: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1814ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1814ec;
        }
    }
    ctx->pc = 0x181514u;
    // 0x181514: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x181514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181518:
    // 0x181518: 0x3e00008  jr          $ra
    ctx->pc = 0x181518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18151Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181518u;
            // 0x18151c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181520u;
}
