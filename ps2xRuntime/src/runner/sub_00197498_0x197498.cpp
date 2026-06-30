#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197498
// Address: 0x197498 - 0x1974f8
void sub_00197498_0x197498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197498_0x197498");
#endif

    switch (ctx->pc) {
        case 0x1974b4u: goto label_1974b4;
        case 0x1974c0u: goto label_1974c0;
        default: break;
    }

    ctx->pc = 0x197498u;

    // 0x197498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19749c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1974a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1974a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1974a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1974a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1974a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1974ac: 0xc065cf0  jal         func_1973C0
    ctx->pc = 0x1974ACu;
    SET_GPR_U32(ctx, 31, 0x1974B4u);
    ctx->pc = 0x1974B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1974ACu;
            // 0x1974b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973C0u;
    if (runtime->hasFunction(0x1973C0u)) {
        auto targetFn = runtime->lookupFunction(0x1973C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1974B4u; }
        if (ctx->pc != 0x1974B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001973C0_0x1973c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1974B4u; }
        if (ctx->pc != 0x1974B4u) { return; }
    }
    ctx->pc = 0x1974B4u;
label_1974b4:
    // 0x1974b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1974b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b8: 0xc065d3e  jal         func_1974F8
    ctx->pc = 0x1974B8u;
    SET_GPR_U32(ctx, 31, 0x1974C0u);
    ctx->pc = 0x1974BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1974B8u;
            // 0x1974bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974F8u;
    if (runtime->hasFunction(0x1974F8u)) {
        auto targetFn = runtime->lookupFunction(0x1974F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1974C0u; }
        if (ctx->pc != 0x1974C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001974F8_0x1974f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1974C0u; }
        if (ctx->pc != 0x1974C0u) { return; }
    }
    ctx->pc = 0x1974C0u;
label_1974c0:
    // 0x1974c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1974c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1974C4u;
    {
        const bool branch_taken_0x1974c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1974C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974C4u;
            // 0x1974c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974c4) {
            ctx->pc = 0x1974E0u;
            goto label_1974e0;
        }
    }
    ctx->pc = 0x1974CCu;
    // 0x1974cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1974ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1974d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1974d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1974d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1974d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1974d8: 0x8065d04  j           func_197410
    ctx->pc = 0x1974D8u;
    ctx->pc = 0x1974DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1974D8u;
            // 0x1974dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00197410_0x197410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1974E0u;
label_1974e0:
    // 0x1974e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1974e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1974e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1974e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1974e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1974e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1974ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1974ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1974F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974ECu;
            // 0x1974f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1974F4u;
    // 0x1974f4: 0x0  nop
    ctx->pc = 0x1974f4u;
    // NOP
}
