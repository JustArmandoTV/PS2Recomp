#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF078
// Address: 0x1af078 - 0x1af0c0
void sub_001AF078_0x1af078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF078_0x1af078");
#endif

    switch (ctx->pc) {
        case 0x1af0a0u: goto label_1af0a0;
        default: break;
    }

    ctx->pc = 0x1af078u;

    // 0x1af078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af080: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1af080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af08c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af090: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1af090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1af094: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1af094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af098: 0xc04a508  jal         func_129420
    ctx->pc = 0x1AF098u;
    SET_GPR_U32(ctx, 31, 0x1AF0A0u);
    ctx->pc = 0x1AF09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF098u;
            // 0x1af09c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A0u; }
        if (ctx->pc != 0x1AF0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0A0u; }
        if (ctx->pc != 0x1AF0A0u) { return; }
    }
    ctx->pc = 0x1AF0A0u;
label_1af0a0:
    // 0x1af0a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1af0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1af0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0a8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1af0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1af0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0B4u;
            // 0x1af0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF0BCu;
    // 0x1af0bc: 0x0  nop
    ctx->pc = 0x1af0bcu;
    // NOP
}
