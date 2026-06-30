#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376260
// Address: 0x376260 - 0x376300
void sub_00376260_0x376260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376260_0x376260");
#endif

    switch (ctx->pc) {
        case 0x376260u: goto label_376260;
        case 0x376264u: goto label_376264;
        case 0x376268u: goto label_376268;
        case 0x37626cu: goto label_37626c;
        case 0x376270u: goto label_376270;
        case 0x376274u: goto label_376274;
        case 0x376278u: goto label_376278;
        case 0x37627cu: goto label_37627c;
        case 0x376280u: goto label_376280;
        case 0x376284u: goto label_376284;
        case 0x376288u: goto label_376288;
        case 0x37628cu: goto label_37628c;
        case 0x376290u: goto label_376290;
        case 0x376294u: goto label_376294;
        case 0x376298u: goto label_376298;
        case 0x37629cu: goto label_37629c;
        case 0x3762a0u: goto label_3762a0;
        case 0x3762a4u: goto label_3762a4;
        case 0x3762a8u: goto label_3762a8;
        case 0x3762acu: goto label_3762ac;
        case 0x3762b0u: goto label_3762b0;
        case 0x3762b4u: goto label_3762b4;
        case 0x3762b8u: goto label_3762b8;
        case 0x3762bcu: goto label_3762bc;
        case 0x3762c0u: goto label_3762c0;
        case 0x3762c4u: goto label_3762c4;
        case 0x3762c8u: goto label_3762c8;
        case 0x3762ccu: goto label_3762cc;
        case 0x3762d0u: goto label_3762d0;
        case 0x3762d4u: goto label_3762d4;
        case 0x3762d8u: goto label_3762d8;
        case 0x3762dcu: goto label_3762dc;
        case 0x3762e0u: goto label_3762e0;
        case 0x3762e4u: goto label_3762e4;
        case 0x3762e8u: goto label_3762e8;
        case 0x3762ecu: goto label_3762ec;
        case 0x3762f0u: goto label_3762f0;
        case 0x3762f4u: goto label_3762f4;
        case 0x3762f8u: goto label_3762f8;
        case 0x3762fcu: goto label_3762fc;
        default: break;
    }

    ctx->pc = 0x376260u;

label_376260:
    // 0x376260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_376264:
    // 0x376264: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x376264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_376268:
    // 0x376268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37626c:
    // 0x37626c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x37626cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_376270:
    // 0x376270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_376274:
    // 0x376274: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x376274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_376278:
    // 0x376278: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x376278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37627c:
    // 0x37627c: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x37627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_376280:
    // 0x376280: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x376280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_376284:
    // 0x376284: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x376284u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_376288:
    // 0x376288: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x376288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_37628c:
    // 0x37628c: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x37628cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_376290:
    // 0x376290: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x376290u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_376294:
    // 0x376294: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x376294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376298:
    // 0x376298: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x376298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37629c:
    // 0x37629c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x37629cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_3762a0:
    // 0x3762a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3762a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3762a4:
    // 0x3762a4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3762a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3762a8:
    // 0x3762a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3762a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3762ac:
    // 0x3762ac: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3762acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3762b0:
    // 0x3762b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3762b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3762b4:
    // 0x3762b4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3762b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3762b8:
    // 0x3762b8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3762b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3762bc:
    // 0x3762bc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3762bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3762c0:
    // 0x3762c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3762c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3762c4:
    // 0x3762c4: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x3762c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3762c8:
    // 0x3762c8: 0xc088b74  jal         func_222DD0
label_3762cc:
    if (ctx->pc == 0x3762CCu) {
        ctx->pc = 0x3762CCu;
            // 0x3762cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3762D0u;
        goto label_3762d0;
    }
    ctx->pc = 0x3762C8u;
    SET_GPR_U32(ctx, 31, 0x3762D0u);
    ctx->pc = 0x3762CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3762C8u;
            // 0x3762cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3762D0u; }
        if (ctx->pc != 0x3762D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3762D0u; }
        if (ctx->pc != 0x3762D0u) { return; }
    }
    ctx->pc = 0x3762D0u;
label_3762d0:
    // 0x3762d0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3762d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3762d4:
    // 0x3762d4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3762d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3762d8:
    // 0x3762d8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3762d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3762dc:
    // 0x3762dc: 0x320f809  jalr        $t9
label_3762e0:
    if (ctx->pc == 0x3762E0u) {
        ctx->pc = 0x3762E0u;
            // 0x3762e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3762E4u;
        goto label_3762e4;
    }
    ctx->pc = 0x3762DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3762E4u);
        ctx->pc = 0x3762E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3762DCu;
            // 0x3762e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3762E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3762E4u; }
            if (ctx->pc != 0x3762E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3762E4u;
label_3762e4:
    // 0x3762e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3762e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3762e8:
    // 0x3762e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3762e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3762ec:
    // 0x3762ec: 0x3e00008  jr          $ra
label_3762f0:
    if (ctx->pc == 0x3762F0u) {
        ctx->pc = 0x3762F0u;
            // 0x3762f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3762F4u;
        goto label_3762f4;
    }
    ctx->pc = 0x3762ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3762ECu;
            // 0x3762f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3762F4u;
label_3762f4:
    // 0x3762f4: 0x0  nop
    ctx->pc = 0x3762f4u;
    // NOP
label_3762f8:
    // 0x3762f8: 0x0  nop
    ctx->pc = 0x3762f8u;
    // NOP
label_3762fc:
    // 0x3762fc: 0x0  nop
    ctx->pc = 0x3762fcu;
    // NOP
}
