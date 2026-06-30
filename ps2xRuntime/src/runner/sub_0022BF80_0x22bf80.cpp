#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BF80
// Address: 0x22bf80 - 0x22bfe0
void sub_0022BF80_0x22bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BF80_0x22bf80");
#endif

    switch (ctx->pc) {
        case 0x22bf9cu: goto label_22bf9c;
        default: break;
    }

    ctx->pc = 0x22bf80u;

    // 0x22bf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bf84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bf8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bf90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22bf90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf94: 0xc08aecc  jal         func_22BB30
    ctx->pc = 0x22BF94u;
    SET_GPR_U32(ctx, 31, 0x22BF9Cu);
    ctx->pc = 0x22BF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF94u;
            // 0x22bf98: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BB30u;
    if (runtime->hasFunction(0x22BB30u)) {
        auto targetFn = runtime->lookupFunction(0x22BB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF9Cu; }
        if (ctx->pc != 0x22BF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BB30_0x22bb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF9Cu; }
        if (ctx->pc != 0x22BF9Cu) { return; }
    }
    ctx->pc = 0x22BF9Cu;
label_22bf9c:
    // 0x22bf9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22bfa0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x22bfa4: 0x2442ef90  addiu       $v0, $v0, -0x1070
    ctx->pc = 0x22bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x22bfa8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22bfac: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x22bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
    // 0x22bfb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22bfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfb4: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x22bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
    // 0x22bfb8: 0xae230138  sw          $v1, 0x138($s1)
    ctx->pc = 0x22bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
    // 0x22bfbc: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x22bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x22bfc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bfc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFCCu;
            // 0x22bfd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BFD4u;
    // 0x22bfd4: 0x0  nop
    ctx->pc = 0x22bfd4u;
    // NOP
    // 0x22bfd8: 0x0  nop
    ctx->pc = 0x22bfd8u;
    // NOP
    // 0x22bfdc: 0x0  nop
    ctx->pc = 0x22bfdcu;
    // NOP
}
