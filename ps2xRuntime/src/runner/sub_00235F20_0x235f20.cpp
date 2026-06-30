#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235F20
// Address: 0x235f20 - 0x236150
void sub_00235F20_0x235f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235F20_0x235f20");
#endif

    switch (ctx->pc) {
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        default: break;
    }

    ctx->pc = 0x235f20u;

label_235f20:
    // 0x235f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235f24:
    // 0x235f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f28:
    // 0x235f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235f2c:
    // 0x235f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235f30:
    // 0x235f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235f34:
    // 0x235f34: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x235f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_235f38:
    // 0x235f38: 0xc08bd68  jal         func_22F5A0
label_235f3c:
    if (ctx->pc == 0x235F3Cu) {
        ctx->pc = 0x235F3Cu;
            // 0x235f3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235F40u;
        goto label_235f40;
    }
    ctx->pc = 0x235F38u;
    SET_GPR_U32(ctx, 31, 0x235F40u);
    ctx->pc = 0x235F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235F38u;
            // 0x235f3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5A0u;
    if (runtime->hasFunction(0x22F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235F40u; }
        if (ctx->pc != 0x235F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F5A0_0x22f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235F40u; }
        if (ctx->pc != 0x235F40u) { return; }
    }
    ctx->pc = 0x235F40u;
label_235f40:
    // 0x235f40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x235f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_235f44:
    // 0x235f44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x235f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_235f48:
    // 0x235f48: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_235f4c:
    if (ctx->pc == 0x235F4Cu) {
        ctx->pc = 0x235F4Cu;
            // 0x235f4c: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x235F50u;
        goto label_235f50;
    }
    ctx->pc = 0x235F48u;
    {
        const bool branch_taken_0x235f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x235f48) {
            ctx->pc = 0x235F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235F48u;
            // 0x235f4c: 0xc6030014  lwc1        $f3, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x235F9Cu;
            goto label_235f9c;
        }
    }
    ctx->pc = 0x235F50u;
label_235f50:
    // 0x235f50: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x235f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_235f54:
    // 0x235f54: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x235f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235f58:
    // 0x235f58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235f5c:
    // 0x235f5c: 0x0  nop
    ctx->pc = 0x235f5cu;
    // NOP
label_235f60:
    // 0x235f60: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x235f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_235f64:
    // 0x235f64: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x235f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_235f68:
    // 0x235f68: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x235f68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_235f6c:
    // 0x235f6c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x235f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_235f70:
    // 0x235f70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_235f74:
    if (ctx->pc == 0x235F74u) {
        ctx->pc = 0x235F74u;
            // 0x235f74: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x235F78u;
        goto label_235f78;
    }
    ctx->pc = 0x235F70u;
    {
        const bool branch_taken_0x235f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235F70u;
            // 0x235f74: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f70) {
            ctx->pc = 0x235F80u;
            goto label_235f80;
        }
    }
    ctx->pc = 0x235F78u;
label_235f78:
    // 0x235f78: 0x10000006  b           . + 4 + (0x6 << 2)
label_235f7c:
    if (ctx->pc == 0x235F7Cu) {
        ctx->pc = 0x235F7Cu;
            // 0x235f7c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x235F80u;
        goto label_235f80;
    }
    ctx->pc = 0x235F78u;
    {
        const bool branch_taken_0x235f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235F78u;
            // 0x235f7c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f78) {
            ctx->pc = 0x235F94u;
            goto label_235f94;
        }
    }
    ctx->pc = 0x235F80u;
label_235f80:
    // 0x235f80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235f84:
    // 0x235f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235f88:
    // 0x235f88: 0x0  nop
    ctx->pc = 0x235f88u;
    // NOP
label_235f8c:
    // 0x235f8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x235f8cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_235f90:
    // 0x235f90: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x235f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_235f94:
    // 0x235f94: 0x10000013  b           . + 4 + (0x13 << 2)
label_235f98:
    if (ctx->pc == 0x235F98u) {
        ctx->pc = 0x235F98u;
            // 0x235f98: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x235F9Cu;
        goto label_235f9c;
    }
    ctx->pc = 0x235F94u;
    {
        const bool branch_taken_0x235f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235F94u;
            // 0x235f98: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f94) {
            ctx->pc = 0x235FE4u;
            goto label_235fe4;
        }
    }
    ctx->pc = 0x235F9Cu;
label_235f9c:
    // 0x235f9c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x235f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235fa0:
    // 0x235fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235fa4:
    // 0x235fa4: 0x0  nop
    ctx->pc = 0x235fa4u;
    // NOP
label_235fa8:
    // 0x235fa8: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x235fa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_235fac:
    // 0x235fac: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x235facu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_235fb0:
    // 0x235fb0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x235fb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_235fb4:
    // 0x235fb4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x235fb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_235fb8:
    // 0x235fb8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x235fb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_235fbc:
    // 0x235fbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_235fc0:
    if (ctx->pc == 0x235FC0u) {
        ctx->pc = 0x235FC0u;
            // 0x235fc0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x235FC4u;
        goto label_235fc4;
    }
    ctx->pc = 0x235FBCu;
    {
        const bool branch_taken_0x235fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235FBCu;
            // 0x235fc0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fbc) {
            ctx->pc = 0x235FCCu;
            goto label_235fcc;
        }
    }
    ctx->pc = 0x235FC4u;
label_235fc4:
    // 0x235fc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_235fc8:
    if (ctx->pc == 0x235FC8u) {
        ctx->pc = 0x235FC8u;
            // 0x235fc8: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x235FCCu;
        goto label_235fcc;
    }
    ctx->pc = 0x235FC4u;
    {
        const bool branch_taken_0x235fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235FC4u;
            // 0x235fc8: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fc4) {
            ctx->pc = 0x235FE0u;
            goto label_235fe0;
        }
    }
    ctx->pc = 0x235FCCu;
label_235fcc:
    // 0x235fcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235fd0:
    // 0x235fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235fd4:
    // 0x235fd4: 0x0  nop
    ctx->pc = 0x235fd4u;
    // NOP
label_235fd8:
    // 0x235fd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x235fd8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_235fdc:
    // 0x235fdc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x235fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_235fe0:
    // 0x235fe0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x235fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235fe4:
    // 0x235fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235fe8:
    // 0x235fe8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x235fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_235fec:
    // 0x235fec: 0x320f809  jalr        $t9
label_235ff0:
    if (ctx->pc == 0x235FF0u) {
        ctx->pc = 0x235FF0u;
            // 0x235ff0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235FF4u;
        goto label_235ff4;
    }
    ctx->pc = 0x235FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235FF4u);
        ctx->pc = 0x235FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235FECu;
            // 0x235ff0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235FF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235FF4u; }
            if (ctx->pc != 0x235FF4u) { return; }
        }
        }
    }
    ctx->pc = 0x235FF4u;
label_235ff4:
    // 0x235ff4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235ff8:
    // 0x235ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235ffc:
    // 0x235ffc: 0x8c42ea20  lw          $v0, -0x15E0($v0)
    ctx->pc = 0x235ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961696)));
label_236000:
    // 0x236000: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x236000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236004:
    // 0x236004: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
label_236008:
    if (ctx->pc == 0x236008u) {
        ctx->pc = 0x236008u;
            // 0x236008: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x23600Cu;
        goto label_23600c;
    }
    ctx->pc = 0x236004u;
    {
        const bool branch_taken_0x236004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x236004) {
            ctx->pc = 0x236008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236004u;
            // 0x236008: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23605Cu;
            goto label_23605c;
        }
    }
    ctx->pc = 0x23600Cu;
label_23600c:
    // 0x23600c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236010:
    // 0x236010: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x236010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236014:
    // 0x236014: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236018:
    // 0x236018: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23601c:
    // 0x23601c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x23601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_236020:
    // 0x236020: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_236024:
    // 0x236024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236028:
    if (ctx->pc == 0x236028u) {
        ctx->pc = 0x236028u;
            // 0x236028: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x23602Cu;
        goto label_23602c;
    }
    ctx->pc = 0x236024u;
    {
        const bool branch_taken_0x236024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236024u;
            // 0x236028: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236024) {
            ctx->pc = 0x236054u;
            goto label_236054;
        }
    }
    ctx->pc = 0x23602Cu;
label_23602c:
    // 0x23602c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236030:
    // 0x236030: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236034:
    // 0x236034: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x236034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
label_236038:
    // 0x236038: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23603c:
    // 0x23603c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236040:
    // 0x236040: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236044:
    // 0x236044: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236048:
    // 0x236048: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_23604c:
    // 0x23604c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x23604cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236050:
    // 0x236050: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236054:
    // 0x236054: 0x10000037  b           . + 4 + (0x37 << 2)
label_236058:
    if (ctx->pc == 0x236058u) {
        ctx->pc = 0x236058u;
            // 0x236058: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x23605Cu;
        goto label_23605c;
    }
    ctx->pc = 0x236054u;
    {
        const bool branch_taken_0x236054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236054u;
            // 0x236058: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236054) {
            ctx->pc = 0x236134u;
            goto label_236134;
        }
    }
    ctx->pc = 0x23605Cu;
label_23605c:
    // 0x23605c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236060:
    // 0x236060: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
label_236064:
    if (ctx->pc == 0x236064u) {
        ctx->pc = 0x236064u;
            // 0x236064: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x236068u;
        goto label_236068;
    }
    ctx->pc = 0x236060u;
    {
        const bool branch_taken_0x236060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236060) {
            ctx->pc = 0x236064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236060u;
            // 0x236064: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236130u;
            goto label_236130;
        }
    }
    ctx->pc = 0x236068u;
label_236068:
    // 0x236068: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x236068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23606c:
    // 0x23606c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x23606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_236070:
    // 0x236070: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x236070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_236074:
    // 0x236074: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x236074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_236078:
    // 0x236078: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x236078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23607c:
    // 0x23607c: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_236080:
    // 0x236080: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
label_236084:
    if (ctx->pc == 0x236084u) {
        ctx->pc = 0x236084u;
            // 0x236084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x236088u;
        goto label_236088;
    }
    ctx->pc = 0x236080u;
    {
        const bool branch_taken_0x236080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236080) {
            ctx->pc = 0x236084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236080u;
            // 0x236084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236128u;
            goto label_236128;
        }
    }
    ctx->pc = 0x236088u;
label_236088:
    // 0x236088: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23608c:
    // 0x23608c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_236090:
    // 0x236090: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_236094:
    // 0x236094: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x236094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_236098:
    // 0x236098: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x236098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_23609c:
    // 0x23609c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x23609cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2360a0:
    // 0x2360a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2360a4:
    if (ctx->pc == 0x2360A4u) {
        ctx->pc = 0x2360A4u;
            // 0x2360a4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2360A8u;
        goto label_2360a8;
    }
    ctx->pc = 0x2360A0u;
    {
        const bool branch_taken_0x2360a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360A0u;
            // 0x2360a4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a0) {
            ctx->pc = 0x2360D0u;
            goto label_2360d0;
        }
    }
    ctx->pc = 0x2360A8u;
label_2360a8:
    // 0x2360a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2360a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2360ac:
    // 0x2360ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2360acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2360b0:
    // 0x2360b0: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x2360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
label_2360b4:
    // 0x2360b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2360b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2360b8:
    // 0x2360b8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2360bc:
    // 0x2360bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2360bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2360c0:
    // 0x2360c0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2360c4:
    // 0x2360c4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2360c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2360c8:
    // 0x2360c8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2360c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2360cc:
    // 0x2360cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2360ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2360d0:
    // 0x2360d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2360d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2360d4:
    // 0x2360d4: 0xc08e948  jal         func_23A520
label_2360d8:
    if (ctx->pc == 0x2360D8u) {
        ctx->pc = 0x2360D8u;
            // 0x2360d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2360DCu;
        goto label_2360dc;
    }
    ctx->pc = 0x2360D4u;
    SET_GPR_U32(ctx, 31, 0x2360DCu);
    ctx->pc = 0x2360D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2360D4u;
            // 0x2360d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A520u;
    if (runtime->hasFunction(0x23A520u)) {
        auto targetFn = runtime->lookupFunction(0x23A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360DCu; }
        if (ctx->pc != 0x2360DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A520_0x23a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360DCu; }
        if (ctx->pc != 0x2360DCu) { return; }
    }
    ctx->pc = 0x2360DCu;
label_2360dc:
    // 0x2360dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2360dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2360e0:
    // 0x2360e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2360e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2360e4:
    // 0x2360e4: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2360e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2360e8:
    // 0x2360e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2360ec:
    // 0x2360ec: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2360f0:
    // 0x2360f0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2360f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2360f4:
    // 0x2360f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2360f8:
    if (ctx->pc == 0x2360F8u) {
        ctx->pc = 0x2360F8u;
            // 0x2360f8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2360FCu;
        goto label_2360fc;
    }
    ctx->pc = 0x2360F4u;
    {
        const bool branch_taken_0x2360f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360F4u;
            // 0x2360f8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360f4) {
            ctx->pc = 0x236124u;
            goto label_236124;
        }
    }
    ctx->pc = 0x2360FCu;
label_2360fc:
    // 0x2360fc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2360fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_236100:
    // 0x236100: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x236100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_236104:
    // 0x236104: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x236104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
label_236108:
    // 0x236108: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x236108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23610c:
    // 0x23610c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_236110:
    // 0x236110: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x236110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_236114:
    // 0x236114: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x236114u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_236118:
    // 0x236118: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x236118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_23611c:
    // 0x23611c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x23611cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_236120:
    // 0x236120: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x236120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_236124:
    // 0x236124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236128:
    // 0x236128: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x236128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_23612c:
    // 0x23612c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x23612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_236130:
    // 0x236130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236134:
    // 0x236134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236138:
    // 0x236138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23613c:
    // 0x23613c: 0x3e00008  jr          $ra
label_236140:
    if (ctx->pc == 0x236140u) {
        ctx->pc = 0x236140u;
            // 0x236140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x236144u;
        goto label_236144;
    }
    ctx->pc = 0x23613Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23613Cu;
            // 0x236140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236144u;
label_236144:
    // 0x236144: 0x0  nop
    ctx->pc = 0x236144u;
    // NOP
label_236148:
    // 0x236148: 0x0  nop
    ctx->pc = 0x236148u;
    // NOP
label_23614c:
    // 0x23614c: 0x0  nop
    ctx->pc = 0x23614cu;
    // NOP
}
