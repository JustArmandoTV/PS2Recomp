#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004437B0
// Address: 0x4437b0 - 0x443850
void sub_004437B0_0x4437b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004437B0_0x4437b0");
#endif

    switch (ctx->pc) {
        case 0x4437b0u: goto label_4437b0;
        case 0x4437b4u: goto label_4437b4;
        case 0x4437b8u: goto label_4437b8;
        case 0x4437bcu: goto label_4437bc;
        case 0x4437c0u: goto label_4437c0;
        case 0x4437c4u: goto label_4437c4;
        case 0x4437c8u: goto label_4437c8;
        case 0x4437ccu: goto label_4437cc;
        case 0x4437d0u: goto label_4437d0;
        case 0x4437d4u: goto label_4437d4;
        case 0x4437d8u: goto label_4437d8;
        case 0x4437dcu: goto label_4437dc;
        case 0x4437e0u: goto label_4437e0;
        case 0x4437e4u: goto label_4437e4;
        case 0x4437e8u: goto label_4437e8;
        case 0x4437ecu: goto label_4437ec;
        case 0x4437f0u: goto label_4437f0;
        case 0x4437f4u: goto label_4437f4;
        case 0x4437f8u: goto label_4437f8;
        case 0x4437fcu: goto label_4437fc;
        case 0x443800u: goto label_443800;
        case 0x443804u: goto label_443804;
        case 0x443808u: goto label_443808;
        case 0x44380cu: goto label_44380c;
        case 0x443810u: goto label_443810;
        case 0x443814u: goto label_443814;
        case 0x443818u: goto label_443818;
        case 0x44381cu: goto label_44381c;
        case 0x443820u: goto label_443820;
        case 0x443824u: goto label_443824;
        case 0x443828u: goto label_443828;
        case 0x44382cu: goto label_44382c;
        case 0x443830u: goto label_443830;
        case 0x443834u: goto label_443834;
        case 0x443838u: goto label_443838;
        case 0x44383cu: goto label_44383c;
        case 0x443840u: goto label_443840;
        case 0x443844u: goto label_443844;
        case 0x443848u: goto label_443848;
        case 0x44384cu: goto label_44384c;
        default: break;
    }

    ctx->pc = 0x4437b0u;

label_4437b0:
    // 0x4437b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4437b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4437b4:
    // 0x4437b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4437b8:
    // 0x4437b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4437b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4437bc:
    // 0x4437bc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4437bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4437c0:
    // 0x4437c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4437c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4437c4:
    // 0x4437c4: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x4437c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4437c8:
    // 0x4437c8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4437c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4437cc:
    // 0x4437cc: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x4437ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4437d0:
    // 0x4437d0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x4437d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4437d4:
    // 0x4437d4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x4437d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4437d8:
    // 0x4437d8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4437d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_4437dc:
    // 0x4437dc: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x4437dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4437e0:
    // 0x4437e0: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x4437e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4437e4:
    // 0x4437e4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4437e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4437e8:
    // 0x4437e8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4437e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4437ec:
    // 0x4437ec: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x4437ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_4437f0:
    // 0x4437f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4437f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4437f4:
    // 0x4437f4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4437f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4437f8:
    // 0x4437f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4437f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4437fc:
    // 0x4437fc: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4437fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_443800:
    // 0x443800: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x443800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_443804:
    // 0x443804: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x443804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_443808:
    // 0x443808: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x443808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_44380c:
    // 0x44380c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x44380cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_443810:
    // 0x443810: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x443810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_443814:
    // 0x443814: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x443814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_443818:
    // 0x443818: 0xc088b74  jal         func_222DD0
label_44381c:
    if (ctx->pc == 0x44381Cu) {
        ctx->pc = 0x44381Cu;
            // 0x44381c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443820u;
        goto label_443820;
    }
    ctx->pc = 0x443818u;
    SET_GPR_U32(ctx, 31, 0x443820u);
    ctx->pc = 0x44381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443818u;
            // 0x44381c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443820u; }
        if (ctx->pc != 0x443820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443820u; }
        if (ctx->pc != 0x443820u) { return; }
    }
    ctx->pc = 0x443820u;
label_443820:
    // 0x443820: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x443820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_443824:
    // 0x443824: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x443824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_443828:
    // 0x443828: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x443828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_44382c:
    // 0x44382c: 0x320f809  jalr        $t9
label_443830:
    if (ctx->pc == 0x443830u) {
        ctx->pc = 0x443830u;
            // 0x443830: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x443834u;
        goto label_443834;
    }
    ctx->pc = 0x44382Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x443834u);
        ctx->pc = 0x443830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44382Cu;
            // 0x443830: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x443834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x443834u; }
            if (ctx->pc != 0x443834u) { return; }
        }
        }
    }
    ctx->pc = 0x443834u;
label_443834:
    // 0x443834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_443838:
    // 0x443838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44383c:
    // 0x44383c: 0x3e00008  jr          $ra
label_443840:
    if (ctx->pc == 0x443840u) {
        ctx->pc = 0x443840u;
            // 0x443840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x443844u;
        goto label_443844;
    }
    ctx->pc = 0x44383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44383Cu;
            // 0x443840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443844u;
label_443844:
    // 0x443844: 0x0  nop
    ctx->pc = 0x443844u;
    // NOP
label_443848:
    // 0x443848: 0x0  nop
    ctx->pc = 0x443848u;
    // NOP
label_44384c:
    // 0x44384c: 0x0  nop
    ctx->pc = 0x44384cu;
    // NOP
}
