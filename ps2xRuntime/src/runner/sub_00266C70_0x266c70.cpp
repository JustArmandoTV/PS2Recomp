#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266C70
// Address: 0x266c70 - 0x266e20
void sub_00266C70_0x266c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C70_0x266c70");
#endif

    switch (ctx->pc) {
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        default: break;
    }

    ctx->pc = 0x266c70u;

label_266c70:
    // 0x266c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x266c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_266c74:
    // 0x266c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x266c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_266c78:
    // 0x266c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_266c7c:
    // 0x266c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_266c80:
    // 0x266c80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x266c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_266c84:
    // 0x266c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_266c88:
    // 0x266c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x266c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_266c8c:
    // 0x266c8c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x266c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_266c90:
    // 0x266c90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x266c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_266c94:
    // 0x266c94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266c94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266c98:
    // 0x266c98: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266c9c:
    // 0x266c9c: 0x320f809  jalr        $t9
label_266ca0:
    if (ctx->pc == 0x266CA0u) {
        ctx->pc = 0x266CA0u;
            // 0x266ca0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x266CA4u;
        goto label_266ca4;
    }
    ctx->pc = 0x266C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266CA4u);
        ctx->pc = 0x266CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266C9Cu;
            // 0x266ca0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266CA4u; }
            if (ctx->pc != 0x266CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x266CA4u;
label_266ca4:
    // 0x266ca4: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x266ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266ca8:
    // 0x266ca8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x266ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_266cac:
    // 0x266cac: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x266cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266cb0:
    // 0x266cb0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266cb4:
    // 0x266cb4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x266cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266cb8:
    // 0x266cb8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x266cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266cbc:
    // 0x266cbc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x266cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266cc0:
    // 0x266cc0: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x266cc0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
label_266cc4:
    // 0x266cc4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x266cc4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_266cc8:
    // 0x266cc8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x266cc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_266ccc:
    // 0x266ccc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x266cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_266cd0:
    // 0x266cd0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x266cd0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_266cd4:
    // 0x266cd4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x266cd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_266cd8:
    // 0x266cd8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x266cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_266cdc:
    // 0x266cdc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x266cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_266ce0:
    // 0x266ce0: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x266ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266ce4:
    // 0x266ce4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x266ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266ce8:
    // 0x266ce8: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x266ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266cec:
    // 0x266cec: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x266cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_266cf0:
    // 0x266cf0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x266cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_266cf4:
    // 0x266cf4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x266cf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_266cf8:
    // 0x266cf8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x266cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_266cfc:
    // 0x266cfc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x266cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_266d00:
    // 0x266d00: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x266d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266d04:
    // 0x266d04: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x266d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266d08:
    // 0x266d08: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x266d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266d0c:
    // 0x266d0c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x266d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_266d10:
    // 0x266d10: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x266d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_266d14:
    // 0x266d14: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x266d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_266d18:
    // 0x266d18: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x266d18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_266d1c:
    // 0x266d1c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x266d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_266d20:
    // 0x266d20: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x266d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_266d24:
    // 0x266d24: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_266d28:
    // 0x266d28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x266d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_266d2c:
    // 0x266d2c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266d30:
    // 0x266d30: 0x320f809  jalr        $t9
label_266d34:
    if (ctx->pc == 0x266D34u) {
        ctx->pc = 0x266D34u;
            // 0x266d34: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x266D38u;
        goto label_266d38;
    }
    ctx->pc = 0x266D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266D38u);
        ctx->pc = 0x266D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266D30u;
            // 0x266d34: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266D38u; }
            if (ctx->pc != 0x266D38u) { return; }
        }
        }
    }
    ctx->pc = 0x266D38u;
label_266d38:
    // 0x266d38: 0xc6070020  lwc1        $f7, 0x20($s0)
    ctx->pc = 0x266d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_266d3c:
    // 0x266d3c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x266d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266d40:
    // 0x266d40: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x266d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_266d44:
    // 0x266d44: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x266d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266d48:
    // 0x266d48: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x266d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266d4c:
    // 0x266d4c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x266d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266d50:
    // 0x266d50: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x266d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266d54:
    // 0x266d54: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x266d54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_266d58:
    // 0x266d58: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x266d58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_266d5c:
    // 0x266d5c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x266d5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_266d60:
    // 0x266d60: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x266d60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_266d64:
    // 0x266d64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x266d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_266d68:
    // 0x266d68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x266d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_266d6c:
    // 0x266d6c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x266d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266d70:
    // 0x266d70: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x266d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266d74:
    // 0x266d74: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x266d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266d78:
    // 0x266d78: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x266d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266d7c:
    // 0x266d7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x266d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266d80:
    // 0x266d80: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x266d80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_266d84:
    // 0x266d84: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x266d84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_266d88:
    // 0x266d88: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x266d88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_266d8c:
    // 0x266d8c: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x266d8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_266d90:
    // 0x266d90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x266d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_266d94:
    // 0x266d94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x266d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_266d98:
    // 0x266d98: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x266d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266d9c:
    // 0x266d9c: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x266d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266da0:
    // 0x266da0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x266da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266da4:
    // 0x266da4: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x266da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266da8:
    // 0x266da8: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x266da8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_266dac:
    // 0x266dac: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x266dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_266db0:
    // 0x266db0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x266db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_266db4:
    // 0x266db4: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x266db4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_266db8:
    // 0x266db8: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x266db8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_266dbc:
    // 0x266dbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x266dbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_266dc0:
    // 0x266dc0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x266dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_266dc4:
    // 0x266dc4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x266dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266dc8:
    // 0x266dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266dcc:
    // 0x266dcc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x266dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_266dd0:
    // 0x266dd0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x266dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266dd4:
    // 0x266dd4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x266dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266dd8:
    // 0x266dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266ddc:
    // 0x266ddc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x266ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_266de0:
    // 0x266de0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x266de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266de4:
    // 0x266de4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x266de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266de8:
    // 0x266de8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266dec:
    // 0x266dec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x266decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_266df0:
    // 0x266df0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x266df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266df4:
    // 0x266df4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x266df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266df8:
    // 0x266df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266dfc:
    // 0x266dfc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x266dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_266e00:
    // 0x266e00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_266e04:
    // 0x266e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_266e08:
    // 0x266e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_266e0c:
    // 0x266e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_266e10:
    // 0x266e10: 0x3e00008  jr          $ra
label_266e14:
    if (ctx->pc == 0x266E14u) {
        ctx->pc = 0x266E14u;
            // 0x266e14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x266E18u;
        goto label_266e18;
    }
    ctx->pc = 0x266E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E10u;
            // 0x266e14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0x0  nop
    ctx->pc = 0x266e18u;
    // NOP
label_266e1c:
    // 0x266e1c: 0x0  nop
    ctx->pc = 0x266e1cu;
    // NOP
}
