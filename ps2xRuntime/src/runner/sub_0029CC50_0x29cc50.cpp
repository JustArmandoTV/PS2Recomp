#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CC50
// Address: 0x29cc50 - 0x29cca0
void sub_0029CC50_0x29cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC50_0x29cc50");
#endif

    switch (ctx->pc) {
        case 0x29cc78u: goto label_29cc78;
        default: break;
    }

    ctx->pc = 0x29cc50u;

    // 0x29cc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29cc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29cc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29cc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29cc60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29cc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29cc70: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x29CC70u;
    SET_GPR_U32(ctx, 31, 0x29CC78u);
    ctx->pc = 0x29CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC70u;
            // 0x29cc74: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC78u; }
        if (ctx->pc != 0x29CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC78u; }
        if (ctx->pc != 0x29CC78u) { return; }
    }
    ctx->pc = 0x29CC78u;
label_29cc78:
    // 0x29cc78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29cc7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29cc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29cc84: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x29cc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29cc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc90: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC90u;
            // 0x29cc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CC98u;
    // 0x29cc98: 0x0  nop
    ctx->pc = 0x29cc98u;
    // NOP
    // 0x29cc9c: 0x0  nop
    ctx->pc = 0x29cc9cu;
    // NOP
}
