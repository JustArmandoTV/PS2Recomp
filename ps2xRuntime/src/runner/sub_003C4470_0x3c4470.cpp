#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4470
// Address: 0x3c4470 - 0x3c44c0
void sub_003C4470_0x3c4470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4470_0x3c4470");
#endif

    switch (ctx->pc) {
        case 0x3c44a4u: goto label_3c44a4;
        default: break;
    }

    ctx->pc = 0x3c4470u;

    // 0x3c4470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c4470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c4474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c4474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c4478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c447c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c4480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4484: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3c4484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c4488: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x3c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x3c448c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3c448cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4490: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3c4490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4494: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3c4494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4498: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3c4498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c449c: 0xc0ee398  jal         func_3B8E60
    ctx->pc = 0x3C449Cu;
    SET_GPR_U32(ctx, 31, 0x3C44A4u);
    ctx->pc = 0x3C44A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C449Cu;
            // 0x3c44a0: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C44A4u; }
        if (ctx->pc != 0x3C44A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C44A4u; }
        if (ctx->pc != 0x3C44A4u) { return; }
    }
    ctx->pc = 0x3C44A4u;
label_3c44a4:
    // 0x3c44a4: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x3c44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x3c44a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c44a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c44ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c44acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c44b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c44b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c44b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C44B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C44B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C44B4u;
            // 0x3c44b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C44BCu;
    // 0x3c44bc: 0x0  nop
    ctx->pc = 0x3c44bcu;
    // NOP
}
