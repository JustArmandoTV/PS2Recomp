#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295110
// Address: 0x295110 - 0x295140
void sub_00295110_0x295110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295110_0x295110");
#endif

    switch (ctx->pc) {
        case 0x29512cu: goto label_29512c;
        default: break;
    }

    ctx->pc = 0x295110u;

    // 0x295110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295118: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x295118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29511c: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x29511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295120: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x295120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x295124: 0xc08af48  jal         func_22BD20
    ctx->pc = 0x295124u;
    SET_GPR_U32(ctx, 31, 0x29512Cu);
    ctx->pc = 0x295128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295124u;
            // 0x295128: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29512Cu; }
        if (ctx->pc != 0x29512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29512Cu; }
        if (ctx->pc != 0x29512Cu) { return; }
    }
    ctx->pc = 0x29512Cu;
label_29512c:
    // 0x29512c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295130: 0x3e00008  jr          $ra
    ctx->pc = 0x295130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295130u;
            // 0x295134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295138u;
    // 0x295138: 0x0  nop
    ctx->pc = 0x295138u;
    // NOP
    // 0x29513c: 0x0  nop
    ctx->pc = 0x29513cu;
    // NOP
}
