#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC7A0
// Address: 0x1ac7a0 - 0x1ac7e8
void sub_001AC7A0_0x1ac7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC7A0_0x1ac7a0");
#endif

    switch (ctx->pc) {
        case 0x1ac7c4u: goto label_1ac7c4;
        default: break;
    }

    ctx->pc = 0x1ac7a0u;

    // 0x1ac7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ac7b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac7b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ac7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7bc: 0xc0697a4  jal         func_1A5E90
    ctx->pc = 0x1AC7BCu;
    SET_GPR_U32(ctx, 31, 0x1AC7C4u);
    ctx->pc = 0x1AC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7BCu;
            // 0x1ac7c0: 0x8e052038  lw          $a1, 0x2038($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E90u;
    if (runtime->hasFunction(0x1A5E90u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7C4u; }
        if (ctx->pc != 0x1AC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E90_0x1a5e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7C4u; }
        if (ctx->pc != 0x1AC7C4u) { return; }
    }
    ctx->pc = 0x1AC7C4u;
label_1ac7c4:
    // 0x1ac7c4: 0xde0209a8  ld          $v0, 0x9A8($s0)
    ctx->pc = 0x1ac7c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2472)));
    // 0x1ac7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac7cc: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1ac7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ac7d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac7d4: 0xfe0209a8  sd          $v0, 0x9A8($s0)
    ctx->pc = 0x1ac7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2472), GPR_U64(ctx, 2));
    // 0x1ac7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7DCu;
            // 0x1ac7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC7E4u;
    // 0x1ac7e4: 0x0  nop
    ctx->pc = 0x1ac7e4u;
    // NOP
}
