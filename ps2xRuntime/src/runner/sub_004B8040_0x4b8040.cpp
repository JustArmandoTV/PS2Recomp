#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8040
// Address: 0x4b8040 - 0x4b8140
void sub_004B8040_0x4b8040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8040_0x4b8040");
#endif

    switch (ctx->pc) {
        case 0x4b8040u: goto label_4b8040;
        case 0x4b8044u: goto label_4b8044;
        case 0x4b8048u: goto label_4b8048;
        case 0x4b804cu: goto label_4b804c;
        case 0x4b8050u: goto label_4b8050;
        case 0x4b8054u: goto label_4b8054;
        case 0x4b8058u: goto label_4b8058;
        case 0x4b805cu: goto label_4b805c;
        case 0x4b8060u: goto label_4b8060;
        case 0x4b8064u: goto label_4b8064;
        case 0x4b8068u: goto label_4b8068;
        case 0x4b806cu: goto label_4b806c;
        case 0x4b8070u: goto label_4b8070;
        case 0x4b8074u: goto label_4b8074;
        case 0x4b8078u: goto label_4b8078;
        case 0x4b807cu: goto label_4b807c;
        case 0x4b8080u: goto label_4b8080;
        case 0x4b8084u: goto label_4b8084;
        case 0x4b8088u: goto label_4b8088;
        case 0x4b808cu: goto label_4b808c;
        case 0x4b8090u: goto label_4b8090;
        case 0x4b8094u: goto label_4b8094;
        case 0x4b8098u: goto label_4b8098;
        case 0x4b809cu: goto label_4b809c;
        case 0x4b80a0u: goto label_4b80a0;
        case 0x4b80a4u: goto label_4b80a4;
        case 0x4b80a8u: goto label_4b80a8;
        case 0x4b80acu: goto label_4b80ac;
        case 0x4b80b0u: goto label_4b80b0;
        case 0x4b80b4u: goto label_4b80b4;
        case 0x4b80b8u: goto label_4b80b8;
        case 0x4b80bcu: goto label_4b80bc;
        case 0x4b80c0u: goto label_4b80c0;
        case 0x4b80c4u: goto label_4b80c4;
        case 0x4b80c8u: goto label_4b80c8;
        case 0x4b80ccu: goto label_4b80cc;
        case 0x4b80d0u: goto label_4b80d0;
        case 0x4b80d4u: goto label_4b80d4;
        case 0x4b80d8u: goto label_4b80d8;
        case 0x4b80dcu: goto label_4b80dc;
        case 0x4b80e0u: goto label_4b80e0;
        case 0x4b80e4u: goto label_4b80e4;
        case 0x4b80e8u: goto label_4b80e8;
        case 0x4b80ecu: goto label_4b80ec;
        case 0x4b80f0u: goto label_4b80f0;
        case 0x4b80f4u: goto label_4b80f4;
        case 0x4b80f8u: goto label_4b80f8;
        case 0x4b80fcu: goto label_4b80fc;
        case 0x4b8100u: goto label_4b8100;
        case 0x4b8104u: goto label_4b8104;
        case 0x4b8108u: goto label_4b8108;
        case 0x4b810cu: goto label_4b810c;
        case 0x4b8110u: goto label_4b8110;
        case 0x4b8114u: goto label_4b8114;
        case 0x4b8118u: goto label_4b8118;
        case 0x4b811cu: goto label_4b811c;
        case 0x4b8120u: goto label_4b8120;
        case 0x4b8124u: goto label_4b8124;
        case 0x4b8128u: goto label_4b8128;
        case 0x4b812cu: goto label_4b812c;
        case 0x4b8130u: goto label_4b8130;
        case 0x4b8134u: goto label_4b8134;
        case 0x4b8138u: goto label_4b8138;
        case 0x4b813cu: goto label_4b813c;
        default: break;
    }

    ctx->pc = 0x4b8040u;

label_4b8040:
    // 0x4b8040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b8040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b8044:
    // 0x4b8044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b8044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b8048:
    // 0x4b8048: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4b8048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b804c:
    // 0x4b804c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8050:
    // 0x4b8050: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4b8050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b8054:
    // 0x4b8054: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x4b8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8058:
    // 0x4b8058: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x4b8058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b805c:
    // 0x4b805c: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x4b805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8060:
    // 0x4b8060: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x4b8060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4b8064:
    // 0x4b8064: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4b8064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4b8068:
    // 0x4b8068: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x4b8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b806c:
    // 0x4b806c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x4b806cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_4b8070:
    // 0x4b8070: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x4b8070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_4b8074:
    // 0x4b8074: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x4b8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4b8078:
    // 0x4b8078: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x4b8078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b807c:
    // 0x4b807c: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x4b807cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b8080:
    // 0x4b8080: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_4b8084:
    if (ctx->pc == 0x4B8084u) {
        ctx->pc = 0x4B8084u;
            // 0x4b8084: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x4B8088u;
        goto label_4b8088;
    }
    ctx->pc = 0x4B8080u;
    {
        const bool branch_taken_0x4b8080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B8084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8080u;
            // 0x4b8084: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8080) {
            ctx->pc = 0x4B80A4u;
            goto label_4b80a4;
        }
    }
    ctx->pc = 0x4B8088u;
label_4b8088:
    // 0x4b8088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b8088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b808c:
    // 0x4b808c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b808cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b8090:
    // 0x4b8090: 0x0  nop
    ctx->pc = 0x4b8090u;
    // NOP
label_4b8094:
    // 0x4b8094: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x4b8094u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
label_4b8098:
    // 0x4b8098: 0x0  nop
    ctx->pc = 0x4b8098u;
    // NOP
label_4b809c:
    // 0x4b809c: 0x0  nop
    ctx->pc = 0x4b809cu;
    // NOP
label_4b80a0:
    // 0x4b80a0: 0x0  nop
    ctx->pc = 0x4b80a0u;
    // NOP
label_4b80a4:
    // 0x4b80a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4b80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b80a8:
    // 0x4b80a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b80ac:
    // 0x4b80ac: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x4b80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b80b0:
    // 0x4b80b0: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4b80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b80b4:
    // 0x4b80b4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x4b80b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b80b8:
    // 0x4b80b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b80b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b80bc:
    // 0x4b80bc: 0x46030182  mul.s       $f6, $f0, $f3
    ctx->pc = 0x4b80bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4b80c0:
    // 0x4b80c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b80c4:
    // 0x4b80c4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4b80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b80c8:
    // 0x4b80c8: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x4b80c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_4b80cc:
    // 0x4b80cc: 0x46030902  mul.s       $f4, $f1, $f3
    ctx->pc = 0x4b80ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_4b80d0:
    // 0x4b80d0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x4b80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b80d4:
    // 0x4b80d4: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x4b80d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b80d8:
    // 0x4b80d8: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x4b80d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4b80dc:
    // 0x4b80dc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x4b80dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4b80e0:
    // 0x4b80e0: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x4b80e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4b80e4:
    // 0x4b80e4: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x4b80e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4b80e8:
    // 0x4b80e8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x4b80e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b80ec:
    // 0x4b80ec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4b80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b80f0:
    // 0x4b80f0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x4b80f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_4b80f4:
    // 0x4b80f4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4b80f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b80f8:
    // 0x4b80f8: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4b80f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4b80fc:
    // 0x4b80fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4b80fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b8100:
    // 0x4b8100: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4b8100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4b8104:
    // 0x4b8104: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4b8104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4b8108:
    // 0x4b8108: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4b8108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b810c:
    // 0x4b810c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4b810cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4b8110:
    // 0x4b8110: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x4b8110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4b8114:
    // 0x4b8114: 0xc088b74  jal         func_222DD0
label_4b8118:
    if (ctx->pc == 0x4B8118u) {
        ctx->pc = 0x4B8118u;
            // 0x4b8118: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x4B811Cu;
        goto label_4b811c;
    }
    ctx->pc = 0x4B8114u;
    SET_GPR_U32(ctx, 31, 0x4B811Cu);
    ctx->pc = 0x4B8118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8114u;
            // 0x4b8118: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B811Cu; }
        if (ctx->pc != 0x4B811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B811Cu; }
        if (ctx->pc != 0x4B811Cu) { return; }
    }
    ctx->pc = 0x4B811Cu;
label_4b811c:
    // 0x4b811c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4b811cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b8120:
    // 0x4b8120: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4b8120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4b8124:
    // 0x4b8124: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b8124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b8128:
    // 0x4b8128: 0x320f809  jalr        $t9
label_4b812c:
    if (ctx->pc == 0x4B812Cu) {
        ctx->pc = 0x4B812Cu;
            // 0x4b812c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B8130u;
        goto label_4b8130;
    }
    ctx->pc = 0x4B8128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B8130u);
        ctx->pc = 0x4B812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8128u;
            // 0x4b812c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B8130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B8130u; }
            if (ctx->pc != 0x4B8130u) { return; }
        }
        }
    }
    ctx->pc = 0x4B8130u;
label_4b8130:
    // 0x4b8130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8134:
    // 0x4b8134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8138:
    // 0x4b8138: 0x3e00008  jr          $ra
label_4b813c:
    if (ctx->pc == 0x4B813Cu) {
        ctx->pc = 0x4B813Cu;
            // 0x4b813c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B8140u;
        goto label_fallthrough_0x4b8138;
    }
    ctx->pc = 0x4B8138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8138u;
            // 0x4b813c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b8138:
    ctx->pc = 0x4B8140u;
}
