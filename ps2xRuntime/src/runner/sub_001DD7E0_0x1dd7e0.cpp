#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD7E0
// Address: 0x1dd7e0 - 0x1dd850
void sub_001DD7E0_0x1dd7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD7E0_0x1dd7e0");
#endif

    switch (ctx->pc) {
        case 0x1dd808u: goto label_1dd808;
        case 0x1dd824u: goto label_1dd824;
        default: break;
    }

    ctx->pc = 0x1dd7e0u;

    // 0x1dd7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd7e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dd7e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dd7ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd7f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dd7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd7f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dd7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd800: 0xc040180  jal         func_100600
    ctx->pc = 0x1DD800u;
    SET_GPR_U32(ctx, 31, 0x1DD808u);
    ctx->pc = 0x1DD804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD800u;
            // 0x1dd804: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD808u; }
        if (ctx->pc != 0x1DD808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD808u; }
        if (ctx->pc != 0x1DD808u) { return; }
    }
    ctx->pc = 0x1DD808u;
label_1dd808:
    // 0x1dd808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd80c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD80Cu;
    {
        const bool branch_taken_0x1dd80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd80c) {
            ctx->pc = 0x1DD810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD80Cu;
            // 0x1dd810: 0xae440d70  sw          $a0, 0xD70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3440), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD82Cu;
            goto label_1dd82c;
        }
    }
    ctx->pc = 0x1DD814u;
    // 0x1dd814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd818: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dd818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd81c: 0xc0bf29c  jal         func_2FCA70
    ctx->pc = 0x1DD81Cu;
    SET_GPR_U32(ctx, 31, 0x1DD824u);
    ctx->pc = 0x1DD820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD81Cu;
            // 0x1dd820: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA70u;
    if (runtime->hasFunction(0x2FCA70u)) {
        auto targetFn = runtime->lookupFunction(0x2FCA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD824u; }
        if (ctx->pc != 0x1DD824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCA70_0x2fca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD824u; }
        if (ctx->pc != 0x1DD824u) { return; }
    }
    ctx->pc = 0x1DD824u;
label_1dd824:
    // 0x1dd824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd828: 0xae440d70  sw          $a0, 0xD70($s2)
    ctx->pc = 0x1dd828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3440), GPR_U32(ctx, 4));
label_1dd82c:
    // 0x1dd82c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd83c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD83Cu;
            // 0x1dd840: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD844u;
    // 0x1dd844: 0x0  nop
    ctx->pc = 0x1dd844u;
    // NOP
    // 0x1dd848: 0x0  nop
    ctx->pc = 0x1dd848u;
    // NOP
    // 0x1dd84c: 0x0  nop
    ctx->pc = 0x1dd84cu;
    // NOP
}
