#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7E10
// Address: 0x1f7e10 - 0x1f8100
void sub_001F7E10_0x1f7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7E10_0x1f7e10");
#endif

    switch (ctx->pc) {
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e14u: goto label_1f7e14;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e28u: goto label_1f7e28;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e38u: goto label_1f7e38;
        case 0x1f7e3cu: goto label_1f7e3c;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e44u: goto label_1f7e44;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e58u: goto label_1f7e58;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e64u: goto label_1f7e64;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e70u: goto label_1f7e70;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7e7cu: goto label_1f7e7c;
        case 0x1f7e80u: goto label_1f7e80;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e88u: goto label_1f7e88;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7e94u: goto label_1f7e94;
        case 0x1f7e98u: goto label_1f7e98;
        case 0x1f7e9cu: goto label_1f7e9c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7ea4u: goto label_1f7ea4;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7eacu: goto label_1f7eac;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7eb4u: goto label_1f7eb4;
        case 0x1f7eb8u: goto label_1f7eb8;
        case 0x1f7ebcu: goto label_1f7ebc;
        case 0x1f7ec0u: goto label_1f7ec0;
        case 0x1f7ec4u: goto label_1f7ec4;
        case 0x1f7ec8u: goto label_1f7ec8;
        case 0x1f7eccu: goto label_1f7ecc;
        case 0x1f7ed0u: goto label_1f7ed0;
        case 0x1f7ed4u: goto label_1f7ed4;
        case 0x1f7ed8u: goto label_1f7ed8;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ee0u: goto label_1f7ee0;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7ee8u: goto label_1f7ee8;
        case 0x1f7eecu: goto label_1f7eec;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef4u: goto label_1f7ef4;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7efcu: goto label_1f7efc;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f04u: goto label_1f7f04;
        case 0x1f7f08u: goto label_1f7f08;
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f10u: goto label_1f7f10;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f18u: goto label_1f7f18;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f20u: goto label_1f7f20;
        case 0x1f7f24u: goto label_1f7f24;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f30u: goto label_1f7f30;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f38u: goto label_1f7f38;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f40u: goto label_1f7f40;
        case 0x1f7f44u: goto label_1f7f44;
        case 0x1f7f48u: goto label_1f7f48;
        case 0x1f7f4cu: goto label_1f7f4c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f54u: goto label_1f7f54;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f5cu: goto label_1f7f5c;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f64u: goto label_1f7f64;
        case 0x1f7f68u: goto label_1f7f68;
        case 0x1f7f6cu: goto label_1f7f6c;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f74u: goto label_1f7f74;
        case 0x1f7f78u: goto label_1f7f78;
        case 0x1f7f7cu: goto label_1f7f7c;
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f84u: goto label_1f7f84;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f8cu: goto label_1f7f8c;
        case 0x1f7f90u: goto label_1f7f90;
        case 0x1f7f94u: goto label_1f7f94;
        case 0x1f7f98u: goto label_1f7f98;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fa0u: goto label_1f7fa0;
        case 0x1f7fa4u: goto label_1f7fa4;
        case 0x1f7fa8u: goto label_1f7fa8;
        case 0x1f7facu: goto label_1f7fac;
        case 0x1f7fb0u: goto label_1f7fb0;
        case 0x1f7fb4u: goto label_1f7fb4;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fbcu: goto label_1f7fbc;
        case 0x1f7fc0u: goto label_1f7fc0;
        case 0x1f7fc4u: goto label_1f7fc4;
        case 0x1f7fc8u: goto label_1f7fc8;
        case 0x1f7fccu: goto label_1f7fcc;
        case 0x1f7fd0u: goto label_1f7fd0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7fe0u: goto label_1f7fe0;
        case 0x1f7fe4u: goto label_1f7fe4;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7fecu: goto label_1f7fec;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f7ffcu: goto label_1f7ffc;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8004u: goto label_1f8004;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8010u: goto label_1f8010;
        case 0x1f8014u: goto label_1f8014;
        case 0x1f8018u: goto label_1f8018;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8028u: goto label_1f8028;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8038u: goto label_1f8038;
        case 0x1f803cu: goto label_1f803c;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8048u: goto label_1f8048;
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8054u: goto label_1f8054;
        case 0x1f8058u: goto label_1f8058;
        case 0x1f805cu: goto label_1f805c;
        case 0x1f8060u: goto label_1f8060;
        case 0x1f8064u: goto label_1f8064;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80e0u: goto label_1f80e0;
        case 0x1f80e4u: goto label_1f80e4;
        case 0x1f80e8u: goto label_1f80e8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f80f0u: goto label_1f80f0;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80f8u: goto label_1f80f8;
        case 0x1f80fcu: goto label_1f80fc;
        default: break;
    }

    ctx->pc = 0x1f7e10u;

label_1f7e10:
    // 0x1f7e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f7e14:
    // 0x1f7e14: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f7e18:
    // 0x1f7e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f7e1c:
    // 0x1f7e1c: 0x24427ed0  addiu       $v0, $v0, 0x7ED0
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32464));
label_1f7e20:
    // 0x1f7e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7e24:
    // 0x1f7e24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f7e28:
    // 0x1f7e28: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f7e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f7e2c:
    // 0x1f7e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7e30:
    // 0x1f7e30: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e34:
    // 0x1f7e34: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7e38:
    // 0x1f7e38: 0x24429af0  addiu       $v0, $v0, -0x6510
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941424));
label_1f7e3c:
    // 0x1f7e3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f7e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7e40:
    // 0x1f7e40: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1f7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1f7e44:
    // 0x1f7e44: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e48:
    // 0x1f7e48: 0xa3a00051  sb          $zero, 0x51($sp)
    ctx->pc = 0x1f7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
label_1f7e4c:
    // 0x1f7e4c: 0x24429a50  addiu       $v0, $v0, -0x65B0
    ctx->pc = 0x1f7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941264));
label_1f7e50:
    // 0x1f7e50: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1f7e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1f7e54:
    // 0x1f7e54: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e58:
    // 0x1f7e58: 0x24429910  addiu       $v0, $v0, -0x66F0
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940944));
label_1f7e5c:
    // 0x1f7e5c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1f7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1f7e60:
    // 0x1f7e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7e64:
    // 0x1f7e64: 0xc07ff48  jal         func_1FFD20
label_1f7e68:
    if (ctx->pc == 0x1F7E68u) {
        ctx->pc = 0x1F7E68u;
            // 0x1f7e68: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F7E6Cu;
        goto label_1f7e6c;
    }
    ctx->pc = 0x1F7E64u;
    SET_GPR_U32(ctx, 31, 0x1F7E6Cu);
    ctx->pc = 0x1F7E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7E64u;
            // 0x1f7e68: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E6Cu; }
        if (ctx->pc != 0x1F7E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7E6Cu; }
        if (ctx->pc != 0x1F7E6Cu) { return; }
    }
    ctx->pc = 0x1F7E6Cu;
label_1f7e6c:
    // 0x1f7e6c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e70:
    // 0x1f7e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7e74:
    // 0x1f7e74: 0x24428010  addiu       $v0, $v0, -0x7FF0
    ctx->pc = 0x1f7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934544));
label_1f7e78:
    // 0x1f7e78: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f7e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f7e7c:
    // 0x1f7e7c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f7e80:
    // 0x1f7e80: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f7e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7e84:
    // 0x1f7e84: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e88:
    // 0x1f7e88: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1f7e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f7e8c:
    // 0x1f7e8c: 0x244289e0  addiu       $v0, $v0, -0x7620
    ctx->pc = 0x1f7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
label_1f7e90:
    // 0x1f7e90: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1f7e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_1f7e94:
    // 0x1f7e94: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1f7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1f7e98:
    // 0x1f7e98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f7e9c:
    // 0x1f7e9c: 0xa3a00031  sb          $zero, 0x31($sp)
    ctx->pc = 0x1f7e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
label_1f7ea0:
    // 0x1f7ea0: 0x24428570  addiu       $v0, $v0, -0x7A90
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935920));
label_1f7ea4:
    // 0x1f7ea4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f7ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1f7ea8:
    // 0x1f7ea8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f7eac:
    // 0x1f7eac: 0x24420d90  addiu       $v0, $v0, 0xD90
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
label_1f7eb0:
    // 0x1f7eb0: 0xc07ff48  jal         func_1FFD20
label_1f7eb4:
    if (ctx->pc == 0x1F7EB4u) {
        ctx->pc = 0x1F7EB4u;
            // 0x1f7eb4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1F7EB8u;
        goto label_1f7eb8;
    }
    ctx->pc = 0x1F7EB0u;
    SET_GPR_U32(ctx, 31, 0x1F7EB8u);
    ctx->pc = 0x1F7EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EB0u;
            // 0x1f7eb4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EB8u; }
        if (ctx->pc != 0x1F7EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EB8u; }
        if (ctx->pc != 0x1F7EB8u) { return; }
    }
    ctx->pc = 0x1F7EB8u;
label_1f7eb8:
    // 0x1f7eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7ebc:
    // 0x1f7ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7ec0:
    // 0x1f7ec0: 0x3e00008  jr          $ra
label_1f7ec4:
    if (ctx->pc == 0x1F7EC4u) {
        ctx->pc = 0x1F7EC4u;
            // 0x1f7ec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F7EC8u;
        goto label_1f7ec8;
    }
    ctx->pc = 0x1F7EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EC0u;
            // 0x1f7ec4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7EC8u;
label_1f7ec8:
    // 0x1f7ec8: 0x0  nop
    ctx->pc = 0x1f7ec8u;
    // NOP
label_1f7ecc:
    // 0x1f7ecc: 0x0  nop
    ctx->pc = 0x1f7eccu;
    // NOP
label_1f7ed0:
    // 0x1f7ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f7ed4:
    // 0x1f7ed4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f7ed8:
    // 0x1f7ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f7edc:
    // 0x1f7edc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f7ee0:
    // 0x1f7ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7ee4:
    // 0x1f7ee4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1f7ee8:
    // 0x1f7ee8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f7eec:
    // 0x1f7eec: 0xc0a7a88  jal         func_29EA20
label_1f7ef0:
    if (ctx->pc == 0x1F7EF0u) {
        ctx->pc = 0x1F7EF0u;
            // 0x1f7ef0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EF4u;
        goto label_1f7ef4;
    }
    ctx->pc = 0x1F7EECu;
    SET_GPR_U32(ctx, 31, 0x1F7EF4u);
    ctx->pc = 0x1F7EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EECu;
            // 0x1f7ef0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EF4u; }
        if (ctx->pc != 0x1F7EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7EF4u; }
        if (ctx->pc != 0x1F7EF4u) { return; }
    }
    ctx->pc = 0x1F7EF4u;
label_1f7ef4:
    // 0x1f7ef4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f7ef8:
    // 0x1f7ef8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1f7efc:
    if (ctx->pc == 0x1F7EFCu) {
        ctx->pc = 0x1F7EFCu;
            // 0x1f7efc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F7F00u;
        goto label_1f7f00;
    }
    ctx->pc = 0x1F7EF8u;
    {
        const bool branch_taken_0x1f7ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7EF8u;
            // 0x1f7efc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ef8) {
            ctx->pc = 0x1F7F5Cu;
            goto label_1f7f5c;
        }
    }
    ctx->pc = 0x1F7F00u;
label_1f7f00:
    // 0x1f7f00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f7f04:
    // 0x1f7f04: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f7f08:
    // 0x1f7f08: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f7f0c:
    // 0x1f7f0c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f7f10:
    // 0x1f7f10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f7f14:
    // 0x1f7f14: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
label_1f7f18:
    // 0x1f7f18: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f7f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f7f1c:
    // 0x1f7f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7f20:
    // 0x1f7f20: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f7f24:
    // 0x1f7f24: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1f7f24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f7f28:
    // 0x1f7f28: 0x2484d9e0  addiu       $a0, $a0, -0x2620
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957536));
label_1f7f2c:
    // 0x1f7f2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f7f30:
    // 0x1f7f30: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f7f34:
    // 0x1f7f34: 0x2463da20  addiu       $v1, $v1, -0x25E0
    ctx->pc = 0x1f7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957600));
label_1f7f38:
    // 0x1f7f38: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1f7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_1f7f3c:
    // 0x1f7f3c: 0x24a5dd50  addiu       $a1, $a1, -0x22B0
    ctx->pc = 0x1f7f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
label_1f7f40:
    // 0x1f7f40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f7f44:
    // 0x1f7f44: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1f7f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f7f48:
    // 0x1f7f48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f7f4c:
    // 0x1f7f4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f7f50:
    // 0x1f7f50: 0x2463dd90  addiu       $v1, $v1, -0x2270
    ctx->pc = 0x1f7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958480));
label_1f7f54:
    // 0x1f7f54: 0xa444000c  sh          $a0, 0xC($v0)
    ctx->pc = 0x1f7f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
label_1f7f58:
    // 0x1f7f58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f7f5c:
    // 0x1f7f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7f60:
    // 0x1f7f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7f64:
    // 0x1f7f64: 0x3e00008  jr          $ra
label_1f7f68:
    if (ctx->pc == 0x1F7F68u) {
        ctx->pc = 0x1F7F68u;
            // 0x1f7f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F7F6Cu;
        goto label_1f7f6c;
    }
    ctx->pc = 0x1F7F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7F64u;
            // 0x1f7f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7F6Cu;
label_1f7f6c:
    // 0x1f7f6c: 0x0  nop
    ctx->pc = 0x1f7f6cu;
    // NOP
label_1f7f70:
    // 0x1f7f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f7f74:
    // 0x1f7f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f7f78:
    // 0x1f7f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7f7c:
    // 0x1f7f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f80:
    // 0x1f7f80: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1f7f84:
    if (ctx->pc == 0x1F7F84u) {
        ctx->pc = 0x1F7F84u;
            // 0x1f7f84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F88u;
        goto label_1f7f88;
    }
    ctx->pc = 0x1F7F80u;
    {
        const bool branch_taken_0x1f7f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f80) {
            ctx->pc = 0x1F7F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7F80u;
            // 0x1f7f84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8000u;
            goto label_1f8000;
        }
    }
    ctx->pc = 0x1F7F88u;
label_1f7f88:
    // 0x1f7f88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f7f8c:
    // 0x1f7f8c: 0x2442dd50  addiu       $v0, $v0, -0x22B0
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
label_1f7f90:
    // 0x1f7f90: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1f7f94:
    if (ctx->pc == 0x1F7F94u) {
        ctx->pc = 0x1F7F94u;
            // 0x1f7f94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F7F98u;
        goto label_1f7f98;
    }
    ctx->pc = 0x1F7F90u;
    {
        const bool branch_taken_0x1f7f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7F90u;
            // 0x1f7f94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f90) {
            ctx->pc = 0x1F7FD4u;
            goto label_1f7fd4;
        }
    }
    ctx->pc = 0x1F7F98u;
label_1f7f98:
    // 0x1f7f98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f7f9c:
    // 0x1f7f9c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1f7fa0:
    // 0x1f7fa0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f7fa4:
    if (ctx->pc == 0x1F7FA4u) {
        ctx->pc = 0x1F7FA4u;
            // 0x1f7fa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F7FA8u;
        goto label_1f7fa8;
    }
    ctx->pc = 0x1F7FA0u;
    {
        const bool branch_taken_0x1f7fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FA0u;
            // 0x1f7fa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fa0) {
            ctx->pc = 0x1F7FD4u;
            goto label_1f7fd4;
        }
    }
    ctx->pc = 0x1F7FA8u;
label_1f7fa8:
    // 0x1f7fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f7fac:
    // 0x1f7fac: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f7fb0:
    // 0x1f7fb0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f7fb4:
    if (ctx->pc == 0x1F7FB4u) {
        ctx->pc = 0x1F7FB4u;
            // 0x1f7fb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F7FB8u;
        goto label_1f7fb8;
    }
    ctx->pc = 0x1F7FB0u;
    {
        const bool branch_taken_0x1f7fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FB0u;
            // 0x1f7fb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fb0) {
            ctx->pc = 0x1F7FD4u;
            goto label_1f7fd4;
        }
    }
    ctx->pc = 0x1F7FB8u;
label_1f7fb8:
    // 0x1f7fb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f7fbc:
    // 0x1f7fbc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f7fc0:
    // 0x1f7fc0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f7fc4:
    if (ctx->pc == 0x1F7FC4u) {
        ctx->pc = 0x1F7FC4u;
            // 0x1f7fc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F7FC8u;
        goto label_1f7fc8;
    }
    ctx->pc = 0x1F7FC0u;
    {
        const bool branch_taken_0x1f7fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FC0u;
            // 0x1f7fc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fc0) {
            ctx->pc = 0x1F7FD4u;
            goto label_1f7fd4;
        }
    }
    ctx->pc = 0x1F7FC8u;
label_1f7fc8:
    // 0x1f7fc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f7fcc:
    // 0x1f7fcc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f7fd0:
    // 0x1f7fd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f7fd4:
    // 0x1f7fd4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f7fd8:
    // 0x1f7fd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f7fdc:
    // 0x1f7fdc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f7fe0:
    if (ctx->pc == 0x1F7FE0u) {
        ctx->pc = 0x1F7FE4u;
        goto label_1f7fe4;
    }
    ctx->pc = 0x1F7FDCu;
    {
        const bool branch_taken_0x1f7fdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f7fdc) {
            ctx->pc = 0x1F7FFCu;
            goto label_1f7ffc;
        }
    }
    ctx->pc = 0x1F7FE4u;
label_1f7fe4:
    // 0x1f7fe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f7fe8:
    // 0x1f7fe8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f7fe8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f7fec:
    // 0x1f7fec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f7ff0:
    // 0x1f7ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7ff4:
    // 0x1f7ff4: 0xc0a7ab4  jal         func_29EAD0
label_1f7ff8:
    if (ctx->pc == 0x1F7FF8u) {
        ctx->pc = 0x1F7FF8u;
            // 0x1f7ff8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F7FFCu;
        goto label_1f7ffc;
    }
    ctx->pc = 0x1F7FF4u;
    SET_GPR_U32(ctx, 31, 0x1F7FFCu);
    ctx->pc = 0x1F7FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7FF4u;
            // 0x1f7ff8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FFCu; }
        if (ctx->pc != 0x1F7FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7FFCu; }
        if (ctx->pc != 0x1F7FFCu) { return; }
    }
    ctx->pc = 0x1F7FFCu;
label_1f7ffc:
    // 0x1f7ffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8000:
    // 0x1f8000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8004:
    // 0x1f8004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8008:
    // 0x1f8008: 0x3e00008  jr          $ra
label_1f800c:
    if (ctx->pc == 0x1F800Cu) {
        ctx->pc = 0x1F800Cu;
            // 0x1f800c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F8010u;
        goto label_1f8010;
    }
    ctx->pc = 0x1F8008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F800Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8008u;
            // 0x1f800c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8010u;
label_1f8010:
    // 0x1f8010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f8014:
    // 0x1f8014: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f8014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f8018:
    // 0x1f8018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f801c:
    // 0x1f801c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8020:
    // 0x1f8020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8024:
    // 0x1f8024: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1f8024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1f8028:
    // 0x1f8028: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f8028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f802c:
    // 0x1f802c: 0xc0a7a88  jal         func_29EA20
label_1f8030:
    if (ctx->pc == 0x1F8030u) {
        ctx->pc = 0x1F8030u;
            // 0x1f8030: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F8034u;
        goto label_1f8034;
    }
    ctx->pc = 0x1F802Cu;
    SET_GPR_U32(ctx, 31, 0x1F8034u);
    ctx->pc = 0x1F8030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F802Cu;
            // 0x1f8030: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8034u; }
        if (ctx->pc != 0x1F8034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8034u; }
        if (ctx->pc != 0x1F8034u) { return; }
    }
    ctx->pc = 0x1F8034u;
label_1f8034:
    // 0x1f8034: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f8034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f8038:
    // 0x1f8038: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f803c:
    if (ctx->pc == 0x1F803Cu) {
        ctx->pc = 0x1F803Cu;
            // 0x1f803c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F8040u;
        goto label_1f8040;
    }
    ctx->pc = 0x1F8038u;
    {
        const bool branch_taken_0x1f8038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8038u;
            // 0x1f803c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8038) {
            ctx->pc = 0x1F8090u;
            goto label_1f8090;
        }
    }
    ctx->pc = 0x1F8040u;
label_1f8040:
    // 0x1f8040: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f8040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f8044:
    // 0x1f8044: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f8048:
    // 0x1f8048: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x1f8048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_1f804c:
    // 0x1f804c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f804cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f8050:
    // 0x1f8050: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f8050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f8054:
    // 0x1f8054: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x1f8054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_1f8058:
    // 0x1f8058: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f8058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f805c:
    // 0x1f805c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8060:
    // 0x1f8060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f8060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f8064:
    // 0x1f8064: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x1f8064u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_1f8068:
    // 0x1f8068: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x1f8068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
label_1f806c:
    // 0x1f806c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f806cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f8070:
    // 0x1f8070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f8070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f8074:
    // 0x1f8074: 0x24a5da20  addiu       $a1, $a1, -0x25E0
    ctx->pc = 0x1f8074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
label_1f8078:
    // 0x1f8078: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1f8078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_1f807c:
    // 0x1f807c: 0x2484dd50  addiu       $a0, $a0, -0x22B0
    ctx->pc = 0x1f807cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958416));
label_1f8080:
    // 0x1f8080: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f8080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f8084:
    // 0x1f8084: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f8084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f8088:
    // 0x1f8088: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f8088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f808c:
    // 0x1f808c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1f808cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f8090:
    // 0x1f8090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8094:
    // 0x1f8094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8098:
    // 0x1f8098: 0x3e00008  jr          $ra
label_1f809c:
    if (ctx->pc == 0x1F809Cu) {
        ctx->pc = 0x1F809Cu;
            // 0x1f809c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F80A0u;
        goto label_1f80a0;
    }
    ctx->pc = 0x1F8098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8098u;
            // 0x1f809c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F80A0u;
label_1f80a0:
    // 0x1f80a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f80a4:
    // 0x1f80a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f80a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f80a8:
    // 0x1f80a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f80a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f80ac:
    // 0x1f80ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f80b0:
    // 0x1f80b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f80b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f80b4:
    // 0x1f80b4: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x1f80b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1f80b8:
    // 0x1f80b8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_1f80bc:
    if (ctx->pc == 0x1F80BCu) {
        ctx->pc = 0x1F80BCu;
            // 0x1f80bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F80C0u;
        goto label_1f80c0;
    }
    ctx->pc = 0x1F80B8u;
    {
        const bool branch_taken_0x1f80b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F80BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80B8u;
            // 0x1f80bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80b8) {
            ctx->pc = 0x1F80D4u;
            goto label_1f80d4;
        }
    }
    ctx->pc = 0x1F80C0u;
label_1f80c0:
    // 0x1f80c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f80c4:
    // 0x1f80c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f80c8:
    // 0x1f80c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f80cc:
    // 0x1f80cc: 0x320f809  jalr        $t9
label_1f80d0:
    if (ctx->pc == 0x1F80D0u) {
        ctx->pc = 0x1F80D4u;
        goto label_1f80d4;
    }
    ctx->pc = 0x1F80CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F80D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F80D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F80D4u; }
            if (ctx->pc != 0x1F80D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F80D4u;
label_1f80d4:
    // 0x1f80d4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f80d8:
    if (ctx->pc == 0x1F80D8u) {
        ctx->pc = 0x1F80D8u;
            // 0x1f80d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F80DCu;
        goto label_1f80dc;
    }
    ctx->pc = 0x1F80D4u;
    {
        const bool branch_taken_0x1f80d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f80d4) {
            ctx->pc = 0x1F80D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80D4u;
            // 0x1f80d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F80F4u;
            goto label_1f80f4;
        }
    }
    ctx->pc = 0x1F80DCu;
label_1f80dc:
    // 0x1f80dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f80dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f80e0:
    // 0x1f80e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f80e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f80e4:
    // 0x1f80e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f80e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f80e8:
    // 0x1f80e8: 0x320f809  jalr        $t9
label_1f80ec:
    if (ctx->pc == 0x1F80ECu) {
        ctx->pc = 0x1F80ECu;
            // 0x1f80ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F80F0u;
        goto label_1f80f0;
    }
    ctx->pc = 0x1F80E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F80F0u);
        ctx->pc = 0x1F80ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80E8u;
            // 0x1f80ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F80F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F80F0u; }
            if (ctx->pc != 0x1F80F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F80F0u;
label_1f80f0:
    // 0x1f80f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f80f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f80f4:
    // 0x1f80f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f80f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f80f8:
    // 0x1f80f8: 0x3e00008  jr          $ra
label_1f80fc:
    if (ctx->pc == 0x1F80FCu) {
        ctx->pc = 0x1F80FCu;
            // 0x1f80fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F8100u;
        goto label_fallthrough_0x1f80f8;
    }
    ctx->pc = 0x1F80F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F80F8u;
            // 0x1f80fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f80f8:
    ctx->pc = 0x1F8100u;
}
