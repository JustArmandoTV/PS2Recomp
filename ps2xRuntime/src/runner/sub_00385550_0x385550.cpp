#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385550
// Address: 0x385550 - 0x385590
void sub_00385550_0x385550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385550_0x385550");
#endif

    switch (ctx->pc) {
        case 0x385574u: goto label_385574;
        default: break;
    }

    ctx->pc = 0x385550u;

    // 0x385550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x385554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x385558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38555c: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x38555cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x385560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x385564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385568: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x385568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x38556c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x38556Cu;
    SET_GPR_U32(ctx, 31, 0x385574u);
    ctx->pc = 0x385570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38556Cu;
            // 0x385570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385574u; }
        if (ctx->pc != 0x385574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385574u; }
        if (ctx->pc != 0x385574u) { return; }
    }
    ctx->pc = 0x385574u;
label_385574:
    // 0x385574: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x385574u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x385578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38557c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38557cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385580: 0x3e00008  jr          $ra
    ctx->pc = 0x385580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385580u;
            // 0x385584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385588u;
    // 0x385588: 0x0  nop
    ctx->pc = 0x385588u;
    // NOP
    // 0x38558c: 0x0  nop
    ctx->pc = 0x38558cu;
    // NOP
}
