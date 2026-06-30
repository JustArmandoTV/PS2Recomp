#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001403D0
// Address: 0x1403d0 - 0x140440
void sub_001403D0_0x1403d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001403D0_0x1403d0");
#endif

    switch (ctx->pc) {
        case 0x140400u: goto label_140400;
        case 0x140428u: goto label_140428;
        default: break;
    }

    ctx->pc = 0x1403d0u;

    // 0x1403d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1403d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1403d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1403d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1403dc: 0x8c6357e0  lw          $v1, 0x57E0($v1)
    ctx->pc = 0x1403dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22496)));
    // 0x1403e0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1403E0u;
    {
        const bool branch_taken_0x1403e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e0) {
            ctx->pc = 0x14040Cu;
            goto label_14040c;
        }
    }
    ctx->pc = 0x1403E8u;
    // 0x1403e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1403e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1403ec: 0x8c635848  lw          $v1, 0x5848($v1)
    ctx->pc = 0x1403ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x1403f0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1403F0u;
    {
        const bool branch_taken_0x1403f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403f0) {
            ctx->pc = 0x1403F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403F0u;
            // 0x1403f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140438u;
            goto label_140438;
        }
    }
    ctx->pc = 0x1403F8u;
    // 0x1403f8: 0xc057250  jal         func_15C940
    ctx->pc = 0x1403F8u;
    SET_GPR_U32(ctx, 31, 0x140400u);
    ctx->pc = 0x1403FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1403F8u;
            // 0x1403fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140400u; }
        if (ctx->pc != 0x140400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140400u; }
        if (ctx->pc != 0x140400u) { return; }
    }
    ctx->pc = 0x140400u;
label_140400:
    // 0x140400: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140404u;
            // 0x140408: 0xac605848  sw          $zero, 0x5848($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140404) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x14040Cu;
label_14040c:
    // 0x14040c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140414: 0x8c635848  lw          $v1, 0x5848($v1)
    ctx->pc = 0x140414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x140418: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140418u;
    {
        const bool branch_taken_0x140418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x140418) {
            ctx->pc = 0x140434u;
            goto label_140434;
        }
    }
    ctx->pc = 0x140420u;
    // 0x140420: 0xc057250  jal         func_15C940
    ctx->pc = 0x140420u;
    SET_GPR_U32(ctx, 31, 0x140428u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140428u; }
        if (ctx->pc != 0x140428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140428u; }
        if (ctx->pc != 0x140428u) { return; }
    }
    ctx->pc = 0x140428u;
label_140428:
    // 0x140428: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14042c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14042cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140430: 0xac645848  sw          $a0, 0x5848($v1)
    ctx->pc = 0x140430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22600), GPR_U32(ctx, 4));
label_140434:
    // 0x140434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140438:
    // 0x140438: 0x3e00008  jr          $ra
    ctx->pc = 0x140438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140438u;
            // 0x14043c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140440u;
}
