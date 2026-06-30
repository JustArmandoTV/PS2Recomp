#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170A20
// Address: 0x170a20 - 0x170a58
void sub_00170A20_0x170a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A20_0x170a20");
#endif

    switch (ctx->pc) {
        case 0x170a34u: goto label_170a34;
        case 0x170a38u: goto label_170a38;
        case 0x170a40u: goto label_170a40;
        default: break;
    }

    ctx->pc = 0x170a20u;

    // 0x170a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170a28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170a2c: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x170A2Cu;
    SET_GPR_U32(ctx, 31, 0x170A34u);
    ctx->pc = 0x170A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A2Cu;
            // 0x170a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A34u; }
        if (ctx->pc != 0x170A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A34u; }
        if (ctx->pc != 0x170A34u) { return; }
    }
    ctx->pc = 0x170A34u;
label_170a34:
    // 0x170a34: 0x0  nop
    ctx->pc = 0x170a34u;
    // NOP
label_170a38:
    // 0x170a38: 0xc05adda  jal         func_16B768
    ctx->pc = 0x170A38u;
    SET_GPR_U32(ctx, 31, 0x170A40u);
    ctx->pc = 0x16B768u;
    if (runtime->hasFunction(0x16B768u)) {
        auto targetFn = runtime->lookupFunction(0x16B768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A40u; }
        if (ctx->pc != 0x170A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B768_0x16b768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A40u; }
        if (ctx->pc != 0x170A40u) { return; }
    }
    ctx->pc = 0x170A40u;
label_170a40:
    // 0x170a40: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x170a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x170a44: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x170A44u;
    {
        const bool branch_taken_0x170a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A44u;
            // 0x170a48: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a44) {
            ctx->pc = 0x170A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170a38;
        }
    }
    ctx->pc = 0x170A4Cu;
    // 0x170a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a50: 0x3e00008  jr          $ra
    ctx->pc = 0x170A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170A50u;
            // 0x170a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170A58u;
}
