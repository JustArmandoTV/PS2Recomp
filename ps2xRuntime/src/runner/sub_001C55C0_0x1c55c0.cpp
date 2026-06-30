#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C55C0
// Address: 0x1c55c0 - 0x1c5608
void sub_001C55C0_0x1c55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C55C0_0x1c55c0");
#endif

    ctx->pc = 0x1c55c0u;

    // 0x1c55c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c55c4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1c55c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c55c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c55cc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1c55ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c55d0: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c55d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c55d8: 0x8c451ff8  lw          $a1, 0x1FF8($v0)
    ctx->pc = 0x1c55d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8184)));
    // 0x1c55dc: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c55e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c55e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c55e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c55e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c55e8: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c55ec: 0x804a508  j           func_129420
    ctx->pc = 0x1C55ECu;
    ctx->pc = 0x1C55F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55ECu;
            // 0x1c55f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C55F4u;
    // 0x1c55f4: 0x0  nop
    ctx->pc = 0x1c55f4u;
    // NOP
    // 0x1c55f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C55F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C55FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55F8u;
            // 0x1c55fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5600u;
    // 0x1c5600: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5608u;
}
