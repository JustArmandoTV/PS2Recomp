#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5290
// Address: 0x2f5290 - 0x2f52f0
void sub_002F5290_0x2f5290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5290_0x2f5290");
#endif

    switch (ctx->pc) {
        case 0x2f52b4u: goto label_2f52b4;
        default: break;
    }

    ctx->pc = 0x2f5290u;

    // 0x2f5290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5298: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f5298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f529c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f52a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2f52a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2f52a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f52a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2f52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2f52ac: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2F52ACu;
    SET_GPR_U32(ctx, 31, 0x2F52B4u);
    ctx->pc = 0x2F52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52ACu;
            // 0x2f52b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52B4u; }
        if (ctx->pc != 0x2F52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52B4u; }
        if (ctx->pc != 0x2F52B4u) { return; }
    }
    ctx->pc = 0x2F52B4u;
label_2f52b4:
    // 0x2f52b4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2f52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2f52b8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2f52b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2f52bc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2f52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2f52c0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2f52c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2f52c4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2f52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2f52c8: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2f52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2f52cc: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2f52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x2f52d0: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x2f52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2f52d4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2f52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2f52d8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2f52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2f52dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f52dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f52e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f52e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f52e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52E4u;
            // 0x2f52e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F52ECu;
    // 0x2f52ec: 0x0  nop
    ctx->pc = 0x2f52ecu;
    // NOP
}
