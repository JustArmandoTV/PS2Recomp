#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BAC70
// Address: 0x3bac70 - 0x3bacb0
void sub_003BAC70_0x3bac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAC70_0x3bac70");
#endif

    switch (ctx->pc) {
        case 0x3bac98u: goto label_3bac98;
        default: break;
    }

    ctx->pc = 0x3bac70u;

    // 0x3bac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bac74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bac78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bac7c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3bac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bac80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAC80u;
    {
        const bool branch_taken_0x3bac80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC80u;
            // 0x3bac84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac80) {
            ctx->pc = 0x3BAC9Cu;
            goto label_3bac9c;
        }
    }
    ctx->pc = 0x3BAC88u;
    // 0x3bac88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3bac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3bac8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3bac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3bac90: 0xc08c8fc  jal         func_2323F0
    ctx->pc = 0x3BAC90u;
    SET_GPR_U32(ctx, 31, 0x3BAC98u);
    ctx->pc = 0x3BAC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BAC90u;
            // 0x3bac94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC98u; }
        if (ctx->pc != 0x3BAC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BAC98u; }
        if (ctx->pc != 0x3BAC98u) { return; }
    }
    ctx->pc = 0x3BAC98u;
label_3bac98:
    // 0x3bac98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3bac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3bac9c:
    // 0x3bac9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3baca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3baca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3baca4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BACA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BACA4u;
            // 0x3baca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BACACu;
    // 0x3bacac: 0x0  nop
    ctx->pc = 0x3bacacu;
    // NOP
}
