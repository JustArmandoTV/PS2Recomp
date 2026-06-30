#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051E030
// Address: 0x51e030 - 0x51e080
void sub_0051E030_0x51e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051E030_0x51e030");
#endif

    switch (ctx->pc) {
        case 0x51e044u: goto label_51e044;
        case 0x51e04cu: goto label_51e04c;
        case 0x51e06cu: goto label_51e06c;
        default: break;
    }

    ctx->pc = 0x51e030u;

    // 0x51e030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x51e034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51e038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51e038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51e03c: 0xc1477c0  jal         func_51DF00
    ctx->pc = 0x51E03Cu;
    SET_GPR_U32(ctx, 31, 0x51E044u);
    ctx->pc = 0x51E040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E03Cu;
            // 0x51e040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51DF00u;
    if (runtime->hasFunction(0x51DF00u)) {
        auto targetFn = runtime->lookupFunction(0x51DF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E044u; }
        if (ctx->pc != 0x51E044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051DF00_0x51df00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E044u; }
        if (ctx->pc != 0x51E044u) { return; }
    }
    ctx->pc = 0x51E044u;
label_51e044:
    // 0x51e044: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x51E044u;
    SET_GPR_U32(ctx, 31, 0x51E04Cu);
    ctx->pc = 0x51E048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E044u;
            // 0x51e048: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E04Cu; }
        if (ctx->pc != 0x51E04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E04Cu; }
        if (ctx->pc != 0x51E04Cu) { return; }
    }
    ctx->pc = 0x51E04Cu;
label_51e04c:
    // 0x51e04c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x51e050: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51e050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x51e054: 0x7842ce60  lq          $v0, -0x31A0($v0)
    ctx->pc = 0x51e054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 4294954592)));
    // 0x51e058: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x51e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x51e05c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x51e05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x51e060: 0x24a5c480  addiu       $a1, $a1, -0x3B80
    ctx->pc = 0x51e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
    // 0x51e064: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x51E064u;
    SET_GPR_U32(ctx, 31, 0x51E06Cu);
    ctx->pc = 0x51E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51E064u;
            // 0x51e068: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E06Cu; }
        if (ctx->pc != 0x51E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51E06Cu; }
        if (ctx->pc != 0x51E06Cu) { return; }
    }
    ctx->pc = 0x51E06Cu;
label_51e06c:
    // 0x51e06c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51e06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51e070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51e070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51e074: 0x3e00008  jr          $ra
    ctx->pc = 0x51E074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E074u;
            // 0x51e078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E07Cu;
    // 0x51e07c: 0x0  nop
    ctx->pc = 0x51e07cu;
    // NOP
}
