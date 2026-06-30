#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D8B0
// Address: 0x36d8b0 - 0x36d900
void sub_0036D8B0_0x36d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D8B0_0x36d8b0");
#endif

    switch (ctx->pc) {
        case 0x36d8e8u: goto label_36d8e8;
        default: break;
    }

    ctx->pc = 0x36d8b0u;

    // 0x36d8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36d8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36d8bc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x36d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x36d8c0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x36D8C0u;
    {
        const bool branch_taken_0x36d8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D8C0u;
            // 0x36d8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d8c0) {
            ctx->pc = 0x36D8ECu;
            goto label_36d8ec;
        }
    }
    ctx->pc = 0x36D8C8u;
    // 0x36d8c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x36d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36d8cc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D8CCu;
    {
        const bool branch_taken_0x36d8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d8cc) {
            ctx->pc = 0x36D8D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36D8CCu;
            // 0x36d8d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36D8F0u;
            goto label_36d8f0;
        }
    }
    ctx->pc = 0x36D8D4u;
    // 0x36d8d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36d8d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36d8dc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x36d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x36d8e0: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x36D8E0u;
    SET_GPR_U32(ctx, 31, 0x36D8E8u);
    ctx->pc = 0x36D8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D8E0u;
            // 0x36d8e4: 0x8c647378  lw          $a0, 0x7378($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D8E8u; }
        if (ctx->pc != 0x36D8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D8E8u; }
        if (ctx->pc != 0x36D8E8u) { return; }
    }
    ctx->pc = 0x36D8E8u;
label_36d8e8:
    // 0x36d8e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_36d8ec:
    // 0x36d8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36d8f0:
    // 0x36d8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D8F4u;
            // 0x36d8f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D8FCu;
    // 0x36d8fc: 0x0  nop
    ctx->pc = 0x36d8fcu;
    // NOP
}
