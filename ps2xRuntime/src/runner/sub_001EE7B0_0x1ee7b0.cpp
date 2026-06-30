#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE7B0
// Address: 0x1ee7b0 - 0x1ee800
void sub_001EE7B0_0x1ee7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE7B0_0x1ee7b0");
#endif

    switch (ctx->pc) {
        case 0x1ee7e8u: goto label_1ee7e8;
        default: break;
    }

    ctx->pc = 0x1ee7b0u;

    // 0x1ee7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee7b4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1ee7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee7bc: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ee7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
    // 0x1ee7c0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1ee7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1ee7c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ee7c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ee7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7cc: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1ee7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1ee7d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7d4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1ee7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1ee7d8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ee7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7dc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee7e0: 0xc07d5b0  jal         func_1F56C0
    ctx->pc = 0x1EE7E0u;
    SET_GPR_U32(ctx, 31, 0x1EE7E8u);
    ctx->pc = 0x1EE7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7E0u;
            // 0x1ee7e4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F56C0u;
    if (runtime->hasFunction(0x1F56C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F56C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7E8u; }
        if (ctx->pc != 0x1EE7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F56C0_0x1f56c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7E8u; }
        if (ctx->pc != 0x1EE7E8u) { return; }
    }
    ctx->pc = 0x1EE7E8u;
label_1ee7e8:
    // 0x1ee7e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ee7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ee7ec: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
    // 0x1ee7f0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ee7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1ee7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7F8u;
            // 0x1ee7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE800u;
}
