#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB220
// Address: 0x2bb220 - 0x2bb270
void sub_002BB220_0x2bb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB220_0x2bb220");
#endif

    switch (ctx->pc) {
        case 0x2bb250u: goto label_2bb250;
        default: break;
    }

    ctx->pc = 0x2bb220u;

    // 0x2bb220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb230: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB230u;
    {
        const bool branch_taken_0x2bb230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb230) {
            ctx->pc = 0x2BB234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB230u;
            // 0x2bb234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB254u;
            goto label_2bb254;
        }
    }
    ctx->pc = 0x2BB238u;
    // 0x2bb238: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2bb238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bb23c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb23cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb240: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB240u;
    {
        const bool branch_taken_0x2bb240 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb240) {
            ctx->pc = 0x2BB250u;
            goto label_2bb250;
        }
    }
    ctx->pc = 0x2BB248u;
    // 0x2bb248: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB248u;
    SET_GPR_U32(ctx, 31, 0x2BB250u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB250u; }
        if (ctx->pc != 0x2BB250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB250u; }
        if (ctx->pc != 0x2BB250u) { return; }
    }
    ctx->pc = 0x2BB250u;
label_2bb250:
    // 0x2bb250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb254:
    // 0x2bb254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb25c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB25Cu;
            // 0x2bb260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB264u;
    // 0x2bb264: 0x0  nop
    ctx->pc = 0x2bb264u;
    // NOP
    // 0x2bb268: 0x0  nop
    ctx->pc = 0x2bb268u;
    // NOP
    // 0x2bb26c: 0x0  nop
    ctx->pc = 0x2bb26cu;
    // NOP
}
