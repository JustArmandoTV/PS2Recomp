#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323EF0
// Address: 0x323ef0 - 0x323f70
void sub_00323EF0_0x323ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323EF0_0x323ef0");
#endif

    switch (ctx->pc) {
        case 0x323f18u: goto label_323f18;
        default: break;
    }

    ctx->pc = 0x323ef0u;

    // 0x323ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323ef4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323ef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323f10: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x323F10u;
    SET_GPR_U32(ctx, 31, 0x323F18u);
    ctx->pc = 0x323F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323F10u;
            // 0x323f14: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323F18u; }
        if (ctx->pc != 0x323F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323F18u; }
        if (ctx->pc != 0x323F18u) { return; }
    }
    ctx->pc = 0x323F18u;
label_323f18:
    // 0x323f18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x323f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x323f1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x323f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x323f20: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x323f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x323f24: 0x2442e480  addiu       $v0, $v0, -0x1B80
    ctx->pc = 0x323f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x323f28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x323f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x323f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323f30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x323f34: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x323f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x323f38: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x323f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x323f3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f40: 0xa2200058  sb          $zero, 0x58($s1)
    ctx->pc = 0x323f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x323f44: 0xa2200059  sb          $zero, 0x59($s1)
    ctx->pc = 0x323f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x323f48: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x323f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x323f4c: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x323f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x323f50: 0xa224005c  sb          $a0, 0x5C($s1)
    ctx->pc = 0x323f50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 4));
    // 0x323f54: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x323f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x323f58: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x323f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x323f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f68: 0x3e00008  jr          $ra
    ctx->pc = 0x323F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323F68u;
            // 0x323f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323F70u;
}
