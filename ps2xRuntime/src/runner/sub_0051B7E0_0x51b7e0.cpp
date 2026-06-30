#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B7E0
// Address: 0x51b7e0 - 0x51b830
void sub_0051B7E0_0x51b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B7E0_0x51b7e0");
#endif

    switch (ctx->pc) {
        case 0x51b7f4u: goto label_51b7f4;
        default: break;
    }

    ctx->pc = 0x51b7e0u;

    // 0x51b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b7ec: 0xc147228  jal         func_51C8A0
    ctx->pc = 0x51B7ECu;
    SET_GPR_U32(ctx, 31, 0x51B7F4u);
    ctx->pc = 0x51B7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B7ECu;
            // 0x51b7f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C8A0u;
    if (runtime->hasFunction(0x51C8A0u)) {
        auto targetFn = runtime->lookupFunction(0x51C8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7F4u; }
        if (ctx->pc != 0x51B7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C8A0_0x51c8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B7F4u; }
        if (ctx->pc != 0x51B7F4u) { return; }
    }
    ctx->pc = 0x51B7F4u;
label_51b7f4:
    // 0x51b7f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b7f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b7fc: 0x24635a78  addiu       $v1, $v1, 0x5A78
    ctx->pc = 0x51b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23160));
    // 0x51b800: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51b800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51b804: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x51b804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x51b808: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x51b808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x51b80c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x51b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x51b810: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x51b810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x51b814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b81c: 0x3e00008  jr          $ra
    ctx->pc = 0x51B81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B81Cu;
            // 0x51b820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B824u;
    // 0x51b824: 0x0  nop
    ctx->pc = 0x51b824u;
    // NOP
    // 0x51b828: 0x0  nop
    ctx->pc = 0x51b828u;
    // NOP
    // 0x51b82c: 0x0  nop
    ctx->pc = 0x51b82cu;
    // NOP
}
