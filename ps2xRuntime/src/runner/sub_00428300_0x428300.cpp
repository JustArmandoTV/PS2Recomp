#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428300
// Address: 0x428300 - 0x428350
void sub_00428300_0x428300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428300_0x428300");
#endif

    switch (ctx->pc) {
        case 0x42832cu: goto label_42832c;
        default: break;
    }

    ctx->pc = 0x428300u;

    // 0x428300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x428300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x428304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x428308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x428308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42830c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42830cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x428314: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x428314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x428318: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x428318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x42831c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42831cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428320: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x428320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x428324: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x428324u;
    SET_GPR_U32(ctx, 31, 0x42832Cu);
    ctx->pc = 0x428328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x428324u;
            // 0x428328: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42832Cu; }
        if (ctx->pc != 0x42832Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42832Cu; }
        if (ctx->pc != 0x42832Cu) { return; }
    }
    ctx->pc = 0x42832Cu;
label_42832c:
    // 0x42832c: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x42832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x428330: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x428330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x428334: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x428334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x428338: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x428338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x42833c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428344: 0x3e00008  jr          $ra
    ctx->pc = 0x428344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428344u;
            // 0x428348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42834Cu;
    // 0x42834c: 0x0  nop
    ctx->pc = 0x42834cu;
    // NOP
}
