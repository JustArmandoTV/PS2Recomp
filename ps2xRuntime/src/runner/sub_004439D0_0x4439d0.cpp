#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004439D0
// Address: 0x4439d0 - 0x443a20
void sub_004439D0_0x4439d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004439D0_0x4439d0");
#endif

    switch (ctx->pc) {
        case 0x4439f4u: goto label_4439f4;
        case 0x443a04u: goto label_443a04;
        default: break;
    }

    ctx->pc = 0x4439d0u;

    // 0x4439d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4439d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4439d4: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x4439d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4439d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4439d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4439dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4439dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4439e0: 0x8c820290  lw          $v0, 0x290($a0)
    ctx->pc = 0x4439e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x4439e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4439e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439e8: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x4439e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x4439ec: 0xc04cc90  jal         func_133240
    ctx->pc = 0x4439ECu;
    SET_GPR_U32(ctx, 31, 0x4439F4u);
    ctx->pc = 0x4439F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4439ECu;
            // 0x4439f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4439F4u; }
        if (ctx->pc != 0x4439F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4439F4u; }
        if (ctx->pc != 0x4439F4u) { return; }
    }
    ctx->pc = 0x4439F4u;
label_4439f4:
    // 0x4439f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4439f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4439f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439fc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4439FCu;
    SET_GPR_U32(ctx, 31, 0x443A04u);
    ctx->pc = 0x443A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4439FCu;
            // 0x443a00: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443A04u; }
        if (ctx->pc != 0x443A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443A04u; }
        if (ctx->pc != 0x443A04u) { return; }
    }
    ctx->pc = 0x443A04u;
label_443a04:
    // 0x443a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x443A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A0Cu;
            // 0x443a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A14u;
    // 0x443a14: 0x0  nop
    ctx->pc = 0x443a14u;
    // NOP
    // 0x443a18: 0x0  nop
    ctx->pc = 0x443a18u;
    // NOP
    // 0x443a1c: 0x0  nop
    ctx->pc = 0x443a1cu;
    // NOP
}
