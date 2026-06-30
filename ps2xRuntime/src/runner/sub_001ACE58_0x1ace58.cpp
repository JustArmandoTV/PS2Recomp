#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACE58
// Address: 0x1ace58 - 0x1ace98
void sub_001ACE58_0x1ace58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACE58_0x1ace58");
#endif

    switch (ctx->pc) {
        case 0x1ace88u: goto label_1ace88;
        default: break;
    }

    ctx->pc = 0x1ace58u;

    // 0x1ace58: 0x3c02055d  lui         $v0, 0x55D
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1373 << 16));
    // 0x1ace5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ace60: 0x34424a80  ori         $v0, $v0, 0x4A80
    ctx->pc = 0x1ace60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19072);
    // 0x1ace64: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1ace64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ace68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ace68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ace6c: 0x1812  mflo        $v1
    ctx->pc = 0x1ace6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1ace70: 0x2010  mfhi        $a0
    ctx->pc = 0x1ace70u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ace74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ace74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ace78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ace78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ace7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ace7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ace80: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1ACE80u;
    SET_GPR_U32(ctx, 31, 0x1ACE88u);
    ctx->pc = 0x1ACE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE80u;
            // 0x1ace84: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE88u; }
        if (ctx->pc != 0x1ACE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE88u; }
        if (ctx->pc != 0x1ACE88u) { return; }
    }
    ctx->pc = 0x1ACE88u;
label_1ace88:
    // 0x1ace88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ace88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE8Cu;
            // 0x1ace90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACE94u;
    // 0x1ace94: 0x0  nop
    ctx->pc = 0x1ace94u;
    // NOP
}
