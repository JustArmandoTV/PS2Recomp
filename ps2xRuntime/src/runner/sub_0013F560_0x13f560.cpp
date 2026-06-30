#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F560
// Address: 0x13f560 - 0x13f5c0
void sub_0013F560_0x13f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F560_0x13f560");
#endif

    ctx->pc = 0x13f560u;

    // 0x13f560: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13f564: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13f564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13f568: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13F568u;
    {
        const bool branch_taken_0x13f568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f568) {
            ctx->pc = 0x13F56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F568u;
            // 0x13f56c: 0x41a02  srl         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F598u;
            goto label_13f598;
        }
    }
    ctx->pc = 0x13F570u;
    // 0x13f570: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x13f570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x13f574: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f578: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x13f578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x13f57c: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x13f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x13f580: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f584: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13f584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13f588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f590: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F590u;
    {
        const bool branch_taken_0x13f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F590u;
            // 0x13f594: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f590) {
            ctx->pc = 0x13F5ACu;
            goto label_13f5ac;
        }
    }
    ctx->pc = 0x13F598u;
label_13f598:
    // 0x13f598: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f59c: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x13f5a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f5a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f5a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f5ac:
    // 0x13f5ac: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x13f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x13f5b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f5b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f5b8: 0x8057548  j           func_15D520
    ctx->pc = 0x13F5B8u;
    ctx->pc = 0x13F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F5B8u;
            // 0x13f5bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (runtime->hasFunction(0x15D520u)) {
        auto targetFn = runtime->lookupFunction(0x15D520u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015D520_0x15d520(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13F5C0u;
}
