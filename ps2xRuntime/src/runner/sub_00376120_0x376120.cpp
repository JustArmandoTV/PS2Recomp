#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376120
// Address: 0x376120 - 0x376180
void sub_00376120_0x376120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376120_0x376120");
#endif

    switch (ctx->pc) {
        case 0x376120u: goto label_376120;
        case 0x376124u: goto label_376124;
        case 0x376128u: goto label_376128;
        case 0x37612cu: goto label_37612c;
        case 0x376130u: goto label_376130;
        case 0x376134u: goto label_376134;
        case 0x376138u: goto label_376138;
        case 0x37613cu: goto label_37613c;
        case 0x376140u: goto label_376140;
        case 0x376144u: goto label_376144;
        case 0x376148u: goto label_376148;
        case 0x37614cu: goto label_37614c;
        case 0x376150u: goto label_376150;
        case 0x376154u: goto label_376154;
        case 0x376158u: goto label_376158;
        case 0x37615cu: goto label_37615c;
        case 0x376160u: goto label_376160;
        case 0x376164u: goto label_376164;
        case 0x376168u: goto label_376168;
        case 0x37616cu: goto label_37616c;
        case 0x376170u: goto label_376170;
        case 0x376174u: goto label_376174;
        case 0x376178u: goto label_376178;
        case 0x37617cu: goto label_37617c;
        default: break;
    }

    ctx->pc = 0x376120u;

label_376120:
    // 0x376120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_376124:
    // 0x376124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_376128:
    // 0x376128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37612c:
    // 0x37612c: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x37612cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_376130:
    // 0x376130: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x376130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376134:
    // 0x376134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376138:
    // 0x376138: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x376138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37613c:
    // 0x37613c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37613cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_376140:
    // 0x376140: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x376140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_376144:
    // 0x376144: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x376144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_376148:
    // 0x376148: 0xc088b74  jal         func_222DD0
label_37614c:
    if (ctx->pc == 0x37614Cu) {
        ctx->pc = 0x37614Cu;
            // 0x37614c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x376150u;
        goto label_376150;
    }
    ctx->pc = 0x376148u;
    SET_GPR_U32(ctx, 31, 0x376150u);
    ctx->pc = 0x37614Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376148u;
            // 0x37614c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376150u; }
        if (ctx->pc != 0x376150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376150u; }
        if (ctx->pc != 0x376150u) { return; }
    }
    ctx->pc = 0x376150u;
label_376150:
    // 0x376150: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x376150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_376154:
    // 0x376154: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x376154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_376158:
    // 0x376158: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x376158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37615c:
    // 0x37615c: 0x320f809  jalr        $t9
label_376160:
    if (ctx->pc == 0x376160u) {
        ctx->pc = 0x376160u;
            // 0x376160: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x376164u;
        goto label_376164;
    }
    ctx->pc = 0x37615Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376164u);
        ctx->pc = 0x376160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37615Cu;
            // 0x376160: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376164u; }
            if (ctx->pc != 0x376164u) { return; }
        }
        }
    }
    ctx->pc = 0x376164u;
label_376164:
    // 0x376164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_376168:
    // 0x376168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37616c:
    // 0x37616c: 0x3e00008  jr          $ra
label_376170:
    if (ctx->pc == 0x376170u) {
        ctx->pc = 0x376170u;
            // 0x376170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x376174u;
        goto label_376174;
    }
    ctx->pc = 0x37616Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37616Cu;
            // 0x376170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376174u;
label_376174:
    // 0x376174: 0x0  nop
    ctx->pc = 0x376174u;
    // NOP
label_376178:
    // 0x376178: 0x0  nop
    ctx->pc = 0x376178u;
    // NOP
label_37617c:
    // 0x37617c: 0x0  nop
    ctx->pc = 0x37617cu;
    // NOP
}
