#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C43A0
// Address: 0x3c43a0 - 0x3c43f0
void sub_003C43A0_0x3c43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C43A0_0x3c43a0");
#endif

    switch (ctx->pc) {
        case 0x3c43a0u: goto label_3c43a0;
        case 0x3c43a4u: goto label_3c43a4;
        case 0x3c43a8u: goto label_3c43a8;
        case 0x3c43acu: goto label_3c43ac;
        case 0x3c43b0u: goto label_3c43b0;
        case 0x3c43b4u: goto label_3c43b4;
        case 0x3c43b8u: goto label_3c43b8;
        case 0x3c43bcu: goto label_3c43bc;
        case 0x3c43c0u: goto label_3c43c0;
        case 0x3c43c4u: goto label_3c43c4;
        case 0x3c43c8u: goto label_3c43c8;
        case 0x3c43ccu: goto label_3c43cc;
        case 0x3c43d0u: goto label_3c43d0;
        case 0x3c43d4u: goto label_3c43d4;
        case 0x3c43d8u: goto label_3c43d8;
        case 0x3c43dcu: goto label_3c43dc;
        case 0x3c43e0u: goto label_3c43e0;
        case 0x3c43e4u: goto label_3c43e4;
        case 0x3c43e8u: goto label_3c43e8;
        case 0x3c43ecu: goto label_3c43ec;
        default: break;
    }

    ctx->pc = 0x3c43a0u;

label_3c43a0:
    // 0x3c43a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c43a4:
    // 0x3c43a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c43a8:
    // 0x3c43a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c43ac:
    // 0x3c43ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c43acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c43b0:
    // 0x3c43b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c43b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c43b4:
    // 0x3c43b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c43b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c43b8:
    // 0x3c43b8: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3c43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3c43bc:
    // 0x3c43bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c43bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c43c0:
    // 0x3c43c0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x3c43c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_3c43c4:
    // 0x3c43c4: 0x320f809  jalr        $t9
label_3c43c8:
    if (ctx->pc == 0x3C43C8u) {
        ctx->pc = 0x3C43C8u;
            // 0x3c43c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3C43CCu;
        goto label_3c43cc;
    }
    ctx->pc = 0x3C43C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C43CCu);
        ctx->pc = 0x3C43C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C43C4u;
            // 0x3c43c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C43CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C43CCu; }
            if (ctx->pc != 0x3C43CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3C43CCu;
label_3c43cc:
    // 0x3c43cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3c43ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c43d0:
    // 0x3c43d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c43d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c43d4:
    // 0x3c43d4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3c43d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3c43d8:
    // 0x3c43d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c43d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c43dc:
    // 0x3c43dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c43dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c43e0:
    // 0x3c43e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c43e4:
    // 0x3c43e4: 0x3e00008  jr          $ra
label_3c43e8:
    if (ctx->pc == 0x3C43E8u) {
        ctx->pc = 0x3C43E8u;
            // 0x3c43e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C43ECu;
        goto label_3c43ec;
    }
    ctx->pc = 0x3C43E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C43E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C43E4u;
            // 0x3c43e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C43ECu;
label_3c43ec:
    // 0x3c43ec: 0x0  nop
    ctx->pc = 0x3c43ecu;
    // NOP
}
