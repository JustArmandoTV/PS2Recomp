#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6930
// Address: 0x2b6930 - 0x2b6970
void sub_002B6930_0x2b6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6930_0x2b6930");
#endif

    switch (ctx->pc) {
        case 0x2b6950u: goto label_2b6950;
        default: break;
    }

    ctx->pc = 0x2b6930u;

    // 0x2b6930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b693c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6948: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B6948u;
    SET_GPR_U32(ctx, 31, 0x2B6950u);
    ctx->pc = 0x2B694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6948u;
            // 0x2b694c: 0xe48c0010  swc1        $f12, 0x10($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6950u; }
        if (ctx->pc != 0x2B6950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6950u; }
        if (ctx->pc != 0x2B6950u) { return; }
    }
    ctx->pc = 0x2B6950u;
label_2b6950:
    // 0x2b6950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b695c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B695Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B695Cu;
            // 0x2b6960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6964u;
    // 0x2b6964: 0x0  nop
    ctx->pc = 0x2b6964u;
    // NOP
    // 0x2b6968: 0x0  nop
    ctx->pc = 0x2b6968u;
    // NOP
    // 0x2b696c: 0x0  nop
    ctx->pc = 0x2b696cu;
    // NOP
}
