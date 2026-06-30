#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376180
// Address: 0x376180 - 0x3761e0
void sub_00376180_0x376180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376180_0x376180");
#endif

    switch (ctx->pc) {
        case 0x376180u: goto label_376180;
        case 0x376184u: goto label_376184;
        case 0x376188u: goto label_376188;
        case 0x37618cu: goto label_37618c;
        case 0x376190u: goto label_376190;
        case 0x376194u: goto label_376194;
        case 0x376198u: goto label_376198;
        case 0x37619cu: goto label_37619c;
        case 0x3761a0u: goto label_3761a0;
        case 0x3761a4u: goto label_3761a4;
        case 0x3761a8u: goto label_3761a8;
        case 0x3761acu: goto label_3761ac;
        case 0x3761b0u: goto label_3761b0;
        case 0x3761b4u: goto label_3761b4;
        case 0x3761b8u: goto label_3761b8;
        case 0x3761bcu: goto label_3761bc;
        case 0x3761c0u: goto label_3761c0;
        case 0x3761c4u: goto label_3761c4;
        case 0x3761c8u: goto label_3761c8;
        case 0x3761ccu: goto label_3761cc;
        case 0x3761d0u: goto label_3761d0;
        case 0x3761d4u: goto label_3761d4;
        case 0x3761d8u: goto label_3761d8;
        case 0x3761dcu: goto label_3761dc;
        default: break;
    }

    ctx->pc = 0x376180u;

label_376180:
    // 0x376180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_376184:
    // 0x376184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_376188:
    // 0x376188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37618c:
    // 0x37618c: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x37618cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_376190:
    // 0x376190: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x376190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376194:
    // 0x376194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376198:
    // 0x376198: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x376198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37619c:
    // 0x37619c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3761a0:
    // 0x3761a0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3761a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_3761a4:
    // 0x3761a4: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x3761a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3761a8:
    // 0x3761a8: 0xc088b74  jal         func_222DD0
label_3761ac:
    if (ctx->pc == 0x3761ACu) {
        ctx->pc = 0x3761ACu;
            // 0x3761ac: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x3761B0u;
        goto label_3761b0;
    }
    ctx->pc = 0x3761A8u;
    SET_GPR_U32(ctx, 31, 0x3761B0u);
    ctx->pc = 0x3761ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3761A8u;
            // 0x3761ac: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3761B0u; }
        if (ctx->pc != 0x3761B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3761B0u; }
        if (ctx->pc != 0x3761B0u) { return; }
    }
    ctx->pc = 0x3761B0u;
label_3761b0:
    // 0x3761b0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3761b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3761b4:
    // 0x3761b4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3761b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3761b8:
    // 0x3761b8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3761b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3761bc:
    // 0x3761bc: 0x320f809  jalr        $t9
label_3761c0:
    if (ctx->pc == 0x3761C0u) {
        ctx->pc = 0x3761C0u;
            // 0x3761c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3761C4u;
        goto label_3761c4;
    }
    ctx->pc = 0x3761BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3761C4u);
        ctx->pc = 0x3761C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3761BCu;
            // 0x3761c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3761C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3761C4u; }
            if (ctx->pc != 0x3761C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3761C4u;
label_3761c4:
    // 0x3761c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3761c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3761c8:
    // 0x3761c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3761c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3761cc:
    // 0x3761cc: 0x3e00008  jr          $ra
label_3761d0:
    if (ctx->pc == 0x3761D0u) {
        ctx->pc = 0x3761D0u;
            // 0x3761d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3761D4u;
        goto label_3761d4;
    }
    ctx->pc = 0x3761CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3761D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3761CCu;
            // 0x3761d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3761D4u;
label_3761d4:
    // 0x3761d4: 0x0  nop
    ctx->pc = 0x3761d4u;
    // NOP
label_3761d8:
    // 0x3761d8: 0x0  nop
    ctx->pc = 0x3761d8u;
    // NOP
label_3761dc:
    // 0x3761dc: 0x0  nop
    ctx->pc = 0x3761dcu;
    // NOP
}
