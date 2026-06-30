#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00507DA0
// Address: 0x507da0 - 0x5080c0
void sub_00507DA0_0x507da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507DA0_0x507da0");
#endif

    switch (ctx->pc) {
        case 0x507da0u: goto label_507da0;
        case 0x507da4u: goto label_507da4;
        case 0x507da8u: goto label_507da8;
        case 0x507dacu: goto label_507dac;
        case 0x507db0u: goto label_507db0;
        case 0x507db4u: goto label_507db4;
        case 0x507db8u: goto label_507db8;
        case 0x507dbcu: goto label_507dbc;
        case 0x507dc0u: goto label_507dc0;
        case 0x507dc4u: goto label_507dc4;
        case 0x507dc8u: goto label_507dc8;
        case 0x507dccu: goto label_507dcc;
        case 0x507dd0u: goto label_507dd0;
        case 0x507dd4u: goto label_507dd4;
        case 0x507dd8u: goto label_507dd8;
        case 0x507ddcu: goto label_507ddc;
        case 0x507de0u: goto label_507de0;
        case 0x507de4u: goto label_507de4;
        case 0x507de8u: goto label_507de8;
        case 0x507decu: goto label_507dec;
        case 0x507df0u: goto label_507df0;
        case 0x507df4u: goto label_507df4;
        case 0x507df8u: goto label_507df8;
        case 0x507dfcu: goto label_507dfc;
        case 0x507e00u: goto label_507e00;
        case 0x507e04u: goto label_507e04;
        case 0x507e08u: goto label_507e08;
        case 0x507e0cu: goto label_507e0c;
        case 0x507e10u: goto label_507e10;
        case 0x507e14u: goto label_507e14;
        case 0x507e18u: goto label_507e18;
        case 0x507e1cu: goto label_507e1c;
        case 0x507e20u: goto label_507e20;
        case 0x507e24u: goto label_507e24;
        case 0x507e28u: goto label_507e28;
        case 0x507e2cu: goto label_507e2c;
        case 0x507e30u: goto label_507e30;
        case 0x507e34u: goto label_507e34;
        case 0x507e38u: goto label_507e38;
        case 0x507e3cu: goto label_507e3c;
        case 0x507e40u: goto label_507e40;
        case 0x507e44u: goto label_507e44;
        case 0x507e48u: goto label_507e48;
        case 0x507e4cu: goto label_507e4c;
        case 0x507e50u: goto label_507e50;
        case 0x507e54u: goto label_507e54;
        case 0x507e58u: goto label_507e58;
        case 0x507e5cu: goto label_507e5c;
        case 0x507e60u: goto label_507e60;
        case 0x507e64u: goto label_507e64;
        case 0x507e68u: goto label_507e68;
        case 0x507e6cu: goto label_507e6c;
        case 0x507e70u: goto label_507e70;
        case 0x507e74u: goto label_507e74;
        case 0x507e78u: goto label_507e78;
        case 0x507e7cu: goto label_507e7c;
        case 0x507e80u: goto label_507e80;
        case 0x507e84u: goto label_507e84;
        case 0x507e88u: goto label_507e88;
        case 0x507e8cu: goto label_507e8c;
        case 0x507e90u: goto label_507e90;
        case 0x507e94u: goto label_507e94;
        case 0x507e98u: goto label_507e98;
        case 0x507e9cu: goto label_507e9c;
        case 0x507ea0u: goto label_507ea0;
        case 0x507ea4u: goto label_507ea4;
        case 0x507ea8u: goto label_507ea8;
        case 0x507eacu: goto label_507eac;
        case 0x507eb0u: goto label_507eb0;
        case 0x507eb4u: goto label_507eb4;
        case 0x507eb8u: goto label_507eb8;
        case 0x507ebcu: goto label_507ebc;
        case 0x507ec0u: goto label_507ec0;
        case 0x507ec4u: goto label_507ec4;
        case 0x507ec8u: goto label_507ec8;
        case 0x507eccu: goto label_507ecc;
        case 0x507ed0u: goto label_507ed0;
        case 0x507ed4u: goto label_507ed4;
        case 0x507ed8u: goto label_507ed8;
        case 0x507edcu: goto label_507edc;
        case 0x507ee0u: goto label_507ee0;
        case 0x507ee4u: goto label_507ee4;
        case 0x507ee8u: goto label_507ee8;
        case 0x507eecu: goto label_507eec;
        case 0x507ef0u: goto label_507ef0;
        case 0x507ef4u: goto label_507ef4;
        case 0x507ef8u: goto label_507ef8;
        case 0x507efcu: goto label_507efc;
        case 0x507f00u: goto label_507f00;
        case 0x507f04u: goto label_507f04;
        case 0x507f08u: goto label_507f08;
        case 0x507f0cu: goto label_507f0c;
        case 0x507f10u: goto label_507f10;
        case 0x507f14u: goto label_507f14;
        case 0x507f18u: goto label_507f18;
        case 0x507f1cu: goto label_507f1c;
        case 0x507f20u: goto label_507f20;
        case 0x507f24u: goto label_507f24;
        case 0x507f28u: goto label_507f28;
        case 0x507f2cu: goto label_507f2c;
        case 0x507f30u: goto label_507f30;
        case 0x507f34u: goto label_507f34;
        case 0x507f38u: goto label_507f38;
        case 0x507f3cu: goto label_507f3c;
        case 0x507f40u: goto label_507f40;
        case 0x507f44u: goto label_507f44;
        case 0x507f48u: goto label_507f48;
        case 0x507f4cu: goto label_507f4c;
        case 0x507f50u: goto label_507f50;
        case 0x507f54u: goto label_507f54;
        case 0x507f58u: goto label_507f58;
        case 0x507f5cu: goto label_507f5c;
        case 0x507f60u: goto label_507f60;
        case 0x507f64u: goto label_507f64;
        case 0x507f68u: goto label_507f68;
        case 0x507f6cu: goto label_507f6c;
        case 0x507f70u: goto label_507f70;
        case 0x507f74u: goto label_507f74;
        case 0x507f78u: goto label_507f78;
        case 0x507f7cu: goto label_507f7c;
        case 0x507f80u: goto label_507f80;
        case 0x507f84u: goto label_507f84;
        case 0x507f88u: goto label_507f88;
        case 0x507f8cu: goto label_507f8c;
        case 0x507f90u: goto label_507f90;
        case 0x507f94u: goto label_507f94;
        case 0x507f98u: goto label_507f98;
        case 0x507f9cu: goto label_507f9c;
        case 0x507fa0u: goto label_507fa0;
        case 0x507fa4u: goto label_507fa4;
        case 0x507fa8u: goto label_507fa8;
        case 0x507facu: goto label_507fac;
        case 0x507fb0u: goto label_507fb0;
        case 0x507fb4u: goto label_507fb4;
        case 0x507fb8u: goto label_507fb8;
        case 0x507fbcu: goto label_507fbc;
        case 0x507fc0u: goto label_507fc0;
        case 0x507fc4u: goto label_507fc4;
        case 0x507fc8u: goto label_507fc8;
        case 0x507fccu: goto label_507fcc;
        case 0x507fd0u: goto label_507fd0;
        case 0x507fd4u: goto label_507fd4;
        case 0x507fd8u: goto label_507fd8;
        case 0x507fdcu: goto label_507fdc;
        case 0x507fe0u: goto label_507fe0;
        case 0x507fe4u: goto label_507fe4;
        case 0x507fe8u: goto label_507fe8;
        case 0x507fecu: goto label_507fec;
        case 0x507ff0u: goto label_507ff0;
        case 0x507ff4u: goto label_507ff4;
        case 0x507ff8u: goto label_507ff8;
        case 0x507ffcu: goto label_507ffc;
        case 0x508000u: goto label_508000;
        case 0x508004u: goto label_508004;
        case 0x508008u: goto label_508008;
        case 0x50800cu: goto label_50800c;
        case 0x508010u: goto label_508010;
        case 0x508014u: goto label_508014;
        case 0x508018u: goto label_508018;
        case 0x50801cu: goto label_50801c;
        case 0x508020u: goto label_508020;
        case 0x508024u: goto label_508024;
        case 0x508028u: goto label_508028;
        case 0x50802cu: goto label_50802c;
        case 0x508030u: goto label_508030;
        case 0x508034u: goto label_508034;
        case 0x508038u: goto label_508038;
        case 0x50803cu: goto label_50803c;
        case 0x508040u: goto label_508040;
        case 0x508044u: goto label_508044;
        case 0x508048u: goto label_508048;
        case 0x50804cu: goto label_50804c;
        case 0x508050u: goto label_508050;
        case 0x508054u: goto label_508054;
        case 0x508058u: goto label_508058;
        case 0x50805cu: goto label_50805c;
        case 0x508060u: goto label_508060;
        case 0x508064u: goto label_508064;
        case 0x508068u: goto label_508068;
        case 0x50806cu: goto label_50806c;
        case 0x508070u: goto label_508070;
        case 0x508074u: goto label_508074;
        case 0x508078u: goto label_508078;
        case 0x50807cu: goto label_50807c;
        case 0x508080u: goto label_508080;
        case 0x508084u: goto label_508084;
        case 0x508088u: goto label_508088;
        case 0x50808cu: goto label_50808c;
        case 0x508090u: goto label_508090;
        case 0x508094u: goto label_508094;
        case 0x508098u: goto label_508098;
        case 0x50809cu: goto label_50809c;
        case 0x5080a0u: goto label_5080a0;
        case 0x5080a4u: goto label_5080a4;
        case 0x5080a8u: goto label_5080a8;
        case 0x5080acu: goto label_5080ac;
        case 0x5080b0u: goto label_5080b0;
        case 0x5080b4u: goto label_5080b4;
        case 0x5080b8u: goto label_5080b8;
        case 0x5080bcu: goto label_5080bc;
        default: break;
    }

    ctx->pc = 0x507da0u;

label_507da0:
    // 0x507da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x507da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_507da4:
    // 0x507da4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x507da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_507da8:
    // 0x507da8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x507da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_507dac:
    // 0x507dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x507dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_507db0:
    // 0x507db0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x507db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_507db4:
    // 0x507db4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x507db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_507db8:
    // 0x507db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507dbc:
    // 0x507dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507dc0:
    // 0x507dc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x507dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_507dc4:
    // 0x507dc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x507dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_507dc8:
    // 0x507dc8: 0xc10ca68  jal         func_4329A0
label_507dcc:
    if (ctx->pc == 0x507DCCu) {
        ctx->pc = 0x507DCCu;
            // 0x507dcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x507DD0u;
        goto label_507dd0;
    }
    ctx->pc = 0x507DC8u;
    SET_GPR_U32(ctx, 31, 0x507DD0u);
    ctx->pc = 0x507DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507DC8u;
            // 0x507dcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507DD0u; }
        if (ctx->pc != 0x507DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507DD0u; }
        if (ctx->pc != 0x507DD0u) { return; }
    }
    ctx->pc = 0x507DD0u;
label_507dd0:
    // 0x507dd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x507dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_507dd4:
    // 0x507dd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x507dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_507dd8:
    // 0x507dd8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x507dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_507ddc:
    // 0x507ddc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x507ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_507de0:
    // 0x507de0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x507de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_507de4:
    // 0x507de4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x507de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_507de8:
    // 0x507de8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x507de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_507dec:
    // 0x507dec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x507decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_507df0:
    // 0x507df0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x507df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_507df4:
    // 0x507df4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x507df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_507df8:
    // 0x507df8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x507df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_507dfc:
    // 0x507dfc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x507dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_507e00:
    // 0x507e00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x507e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_507e04:
    // 0x507e04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x507e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_507e08:
    // 0x507e08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x507e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_507e0c:
    // 0x507e0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x507e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_507e10:
    // 0x507e10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x507e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_507e14:
    // 0x507e14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x507e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_507e18:
    // 0x507e18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x507e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_507e1c:
    // 0x507e1c: 0xc0582cc  jal         func_160B30
label_507e20:
    if (ctx->pc == 0x507E20u) {
        ctx->pc = 0x507E20u;
            // 0x507e20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x507E24u;
        goto label_507e24;
    }
    ctx->pc = 0x507E1Cu;
    SET_GPR_U32(ctx, 31, 0x507E24u);
    ctx->pc = 0x507E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507E1Cu;
            // 0x507e20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507E24u; }
        if (ctx->pc != 0x507E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507E24u; }
        if (ctx->pc != 0x507E24u) { return; }
    }
    ctx->pc = 0x507E24u;
label_507e24:
    // 0x507e24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507e28:
    // 0x507e28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x507e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_507e2c:
    // 0x507e2c: 0x24634fa8  addiu       $v1, $v1, 0x4FA8
    ctx->pc = 0x507e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20392));
label_507e30:
    // 0x507e30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x507e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_507e34:
    // 0x507e34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x507e34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_507e38:
    // 0x507e38: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x507e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_507e3c:
    // 0x507e3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507e40:
    // 0x507e40: 0xac44aaf8  sw          $a0, -0x5508($v0)
    ctx->pc = 0x507e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945528), GPR_U32(ctx, 4));
label_507e44:
    // 0x507e44: 0x24634fc0  addiu       $v1, $v1, 0x4FC0
    ctx->pc = 0x507e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20416));
label_507e48:
    // 0x507e48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507e4c:
    // 0x507e4c: 0x24424ff8  addiu       $v0, $v0, 0x4FF8
    ctx->pc = 0x507e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20472));
label_507e50:
    // 0x507e50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x507e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_507e54:
    // 0x507e54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x507e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_507e58:
    // 0x507e58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x507e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_507e5c:
    // 0x507e5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x507e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_507e60:
    // 0x507e60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x507e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_507e64:
    // 0x507e64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x507e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_507e68:
    // 0x507e68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x507e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_507e6c:
    // 0x507e6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x507e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_507e70:
    // 0x507e70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x507e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_507e74:
    // 0x507e74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x507e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_507e78:
    // 0x507e78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x507e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_507e7c:
    // 0x507e7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x507e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_507e80:
    // 0x507e80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x507e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_507e84:
    // 0x507e84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_507e88:
    if (ctx->pc == 0x507E88u) {
        ctx->pc = 0x507E8Cu;
        goto label_507e8c;
    }
    ctx->pc = 0x507E84u;
    {
        const bool branch_taken_0x507e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x507e84) {
            ctx->pc = 0x507F18u;
            goto label_507f18;
        }
    }
    ctx->pc = 0x507E8Cu;
label_507e8c:
    // 0x507e8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x507e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_507e90:
    // 0x507e90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x507e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_507e94:
    // 0x507e94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x507e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_507e98:
    // 0x507e98: 0xc040138  jal         func_1004E0
label_507e9c:
    if (ctx->pc == 0x507E9Cu) {
        ctx->pc = 0x507E9Cu;
            // 0x507e9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x507EA0u;
        goto label_507ea0;
    }
    ctx->pc = 0x507E98u;
    SET_GPR_U32(ctx, 31, 0x507EA0u);
    ctx->pc = 0x507E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507E98u;
            // 0x507e9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EA0u; }
        if (ctx->pc != 0x507EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EA0u; }
        if (ctx->pc != 0x507EA0u) { return; }
    }
    ctx->pc = 0x507EA0u;
label_507ea0:
    // 0x507ea0: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x507ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_507ea4:
    // 0x507ea4: 0x3c060050  lui         $a2, 0x50
    ctx->pc = 0x507ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
label_507ea8:
    // 0x507ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x507ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_507eac:
    // 0x507eac: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x507eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
label_507eb0:
    // 0x507eb0: 0x24c67b10  addiu       $a2, $a2, 0x7B10
    ctx->pc = 0x507eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31504));
label_507eb4:
    // 0x507eb4: 0x240703c0  addiu       $a3, $zero, 0x3C0
    ctx->pc = 0x507eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
label_507eb8:
    // 0x507eb8: 0xc040840  jal         func_102100
label_507ebc:
    if (ctx->pc == 0x507EBCu) {
        ctx->pc = 0x507EBCu;
            // 0x507ebc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507EC0u;
        goto label_507ec0;
    }
    ctx->pc = 0x507EB8u;
    SET_GPR_U32(ctx, 31, 0x507EC0u);
    ctx->pc = 0x507EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507EB8u;
            // 0x507ebc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EC0u; }
        if (ctx->pc != 0x507EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EC0u; }
        if (ctx->pc != 0x507EC0u) { return; }
    }
    ctx->pc = 0x507EC0u;
label_507ec0:
    // 0x507ec0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x507ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_507ec4:
    // 0x507ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x507ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_507ec8:
    // 0x507ec8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x507ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_507ecc:
    // 0x507ecc: 0xc0788fc  jal         func_1E23F0
label_507ed0:
    if (ctx->pc == 0x507ED0u) {
        ctx->pc = 0x507ED0u;
            // 0x507ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507ED4u;
        goto label_507ed4;
    }
    ctx->pc = 0x507ECCu;
    SET_GPR_U32(ctx, 31, 0x507ED4u);
    ctx->pc = 0x507ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507ECCu;
            // 0x507ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507ED4u; }
        if (ctx->pc != 0x507ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507ED4u; }
        if (ctx->pc != 0x507ED4u) { return; }
    }
    ctx->pc = 0x507ED4u;
label_507ed4:
    // 0x507ed4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x507ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_507ed8:
    // 0x507ed8: 0xc0788fc  jal         func_1E23F0
label_507edc:
    if (ctx->pc == 0x507EDCu) {
        ctx->pc = 0x507EDCu;
            // 0x507edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507EE0u;
        goto label_507ee0;
    }
    ctx->pc = 0x507ED8u;
    SET_GPR_U32(ctx, 31, 0x507EE0u);
    ctx->pc = 0x507EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507ED8u;
            // 0x507edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EE0u; }
        if (ctx->pc != 0x507EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507EE0u; }
        if (ctx->pc != 0x507EE0u) { return; }
    }
    ctx->pc = 0x507EE0u;
label_507ee0:
    // 0x507ee0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x507ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_507ee4:
    // 0x507ee4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x507ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_507ee8:
    // 0x507ee8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x507ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_507eec:
    // 0x507eec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x507eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_507ef0:
    // 0x507ef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x507ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_507ef4:
    // 0x507ef4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x507ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_507ef8:
    // 0x507ef8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x507ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_507efc:
    // 0x507efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x507efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_507f00:
    // 0x507f00: 0xc0a997c  jal         func_2A65F0
label_507f04:
    if (ctx->pc == 0x507F04u) {
        ctx->pc = 0x507F04u;
            // 0x507f04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x507F08u;
        goto label_507f08;
    }
    ctx->pc = 0x507F00u;
    SET_GPR_U32(ctx, 31, 0x507F08u);
    ctx->pc = 0x507F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507F00u;
            // 0x507f04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F08u; }
        if (ctx->pc != 0x507F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F08u; }
        if (ctx->pc != 0x507F08u) { return; }
    }
    ctx->pc = 0x507F08u;
label_507f08:
    // 0x507f08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x507f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_507f0c:
    // 0x507f0c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x507f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_507f10:
    // 0x507f10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_507f14:
    if (ctx->pc == 0x507F14u) {
        ctx->pc = 0x507F14u;
            // 0x507f14: 0x265203c0  addiu       $s2, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->pc = 0x507F18u;
        goto label_507f18;
    }
    ctx->pc = 0x507F10u;
    {
        const bool branch_taken_0x507f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x507F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507F10u;
            // 0x507f14: 0x265203c0  addiu       $s2, $s2, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507f10) {
            ctx->pc = 0x507EE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_507ee4;
        }
    }
    ctx->pc = 0x507F18u;
label_507f18:
    // 0x507f18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x507f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_507f1c:
    // 0x507f1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x507f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_507f20:
    // 0x507f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x507f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_507f24:
    // 0x507f24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x507f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_507f28:
    // 0x507f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507f2c:
    // 0x507f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507f30:
    // 0x507f30: 0x3e00008  jr          $ra
label_507f34:
    if (ctx->pc == 0x507F34u) {
        ctx->pc = 0x507F34u;
            // 0x507f34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x507F38u;
        goto label_507f38;
    }
    ctx->pc = 0x507F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507F30u;
            // 0x507f34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507F38u;
label_507f38:
    // 0x507f38: 0x0  nop
    ctx->pc = 0x507f38u;
    // NOP
label_507f3c:
    // 0x507f3c: 0x0  nop
    ctx->pc = 0x507f3cu;
    // NOP
label_507f40:
    // 0x507f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_507f44:
    // 0x507f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_507f48:
    // 0x507f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507f4c:
    // 0x507f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507f50:
    // 0x507f50: 0xc0b1370  jal         func_2C4DC0
label_507f54:
    if (ctx->pc == 0x507F54u) {
        ctx->pc = 0x507F54u;
            // 0x507f54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507F58u;
        goto label_507f58;
    }
    ctx->pc = 0x507F50u;
    SET_GPR_U32(ctx, 31, 0x507F58u);
    ctx->pc = 0x507F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507F50u;
            // 0x507f54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F58u; }
        if (ctx->pc != 0x507F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F58u; }
        if (ctx->pc != 0x507F58u) { return; }
    }
    ctx->pc = 0x507F58u;
label_507f58:
    // 0x507f58: 0xc140c98  jal         func_503260
label_507f5c:
    if (ctx->pc == 0x507F5Cu) {
        ctx->pc = 0x507F5Cu;
            // 0x507f5c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x507F60u;
        goto label_507f60;
    }
    ctx->pc = 0x507F58u;
    SET_GPR_U32(ctx, 31, 0x507F60u);
    ctx->pc = 0x507F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507F58u;
            // 0x507f5c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503260u;
    if (runtime->hasFunction(0x503260u)) {
        auto targetFn = runtime->lookupFunction(0x503260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F60u; }
        if (ctx->pc != 0x507F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503260_0x503260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507F60u; }
        if (ctx->pc != 0x507F60u) { return; }
    }
    ctx->pc = 0x507F60u;
label_507f60:
    // 0x507f60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507f64:
    // 0x507f64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507f68:
    // 0x507f68: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x507f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
label_507f6c:
    // 0x507f6c: 0x24634850  addiu       $v1, $v1, 0x4850
    ctx->pc = 0x507f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18512));
label_507f70:
    // 0x507f70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_507f74:
    // 0x507f74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x507f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507f78:
    // 0x507f78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507f7c:
    // 0x507f7c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x507f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_507f80:
    // 0x507f80: 0x244248ac  addiu       $v0, $v0, 0x48AC
    ctx->pc = 0x507f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18604));
label_507f84:
    // 0x507f84: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x507f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_507f88:
    // 0x507f88: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_507f8c:
    if (ctx->pc == 0x507F8Cu) {
        ctx->pc = 0x507F8Cu;
            // 0x507f8c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x507F90u;
        goto label_507f90;
    }
    ctx->pc = 0x507F88u;
    {
        const bool branch_taken_0x507f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x507F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507F88u;
            // 0x507f8c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507f88) {
            ctx->pc = 0x507F94u;
            goto label_507f94;
        }
    }
    ctx->pc = 0x507F90u;
label_507f90:
    // 0x507f90: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x507f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_507f94:
    // 0x507f94: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x507f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_507f98:
    // 0x507f98: 0xc140c44  jal         func_503110
label_507f9c:
    if (ctx->pc == 0x507F9Cu) {
        ctx->pc = 0x507F9Cu;
            // 0x507f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507FA0u;
        goto label_507fa0;
    }
    ctx->pc = 0x507F98u;
    SET_GPR_U32(ctx, 31, 0x507FA0u);
    ctx->pc = 0x507F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507F98u;
            // 0x507f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503110u;
    if (runtime->hasFunction(0x503110u)) {
        auto targetFn = runtime->lookupFunction(0x503110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507FA0u; }
        if (ctx->pc != 0x507FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503110_0x503110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507FA0u; }
        if (ctx->pc != 0x507FA0u) { return; }
    }
    ctx->pc = 0x507FA0u;
label_507fa0:
    // 0x507fa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507fa4:
    // 0x507fa4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507fa8:
    // 0x507fa8: 0x24424ec0  addiu       $v0, $v0, 0x4EC0
    ctx->pc = 0x507fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
label_507fac:
    // 0x507fac: 0x261102b0  addiu       $s1, $s0, 0x2B0
    ctx->pc = 0x507facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_507fb0:
    // 0x507fb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_507fb4:
    // 0x507fb4: 0x24634f00  addiu       $v1, $v1, 0x4F00
    ctx->pc = 0x507fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20224));
label_507fb8:
    // 0x507fb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507fbc:
    // 0x507fbc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x507fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_507fc0:
    // 0x507fc0: 0x24424f5c  addiu       $v0, $v0, 0x4F5C
    ctx->pc = 0x507fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20316));
label_507fc4:
    // 0x507fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x507fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507fc8:
    // 0x507fc8: 0xc14139c  jal         func_504E70
label_507fcc:
    if (ctx->pc == 0x507FCCu) {
        ctx->pc = 0x507FCCu;
            // 0x507fcc: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x507FD0u;
        goto label_507fd0;
    }
    ctx->pc = 0x507FC8u;
    SET_GPR_U32(ctx, 31, 0x507FD0u);
    ctx->pc = 0x507FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507FC8u;
            // 0x507fcc: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504E70u;
    if (runtime->hasFunction(0x504E70u)) {
        auto targetFn = runtime->lookupFunction(0x504E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507FD0u; }
        if (ctx->pc != 0x507FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504E70_0x504e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507FD0u; }
        if (ctx->pc != 0x507FD0u) { return; }
    }
    ctx->pc = 0x507FD0u;
label_507fd0:
    // 0x507fd0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507fd4:
    // 0x507fd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507fd8:
    // 0x507fd8: 0x24634e10  addiu       $v1, $v1, 0x4E10
    ctx->pc = 0x507fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19984));
label_507fdc:
    // 0x507fdc: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x507fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
label_507fe0:
    // 0x507fe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x507fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_507fe4:
    // 0x507fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x507fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507fe8:
    // 0x507fe8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x507fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_507fec:
    // 0x507fec: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x507fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_507ff0:
    // 0x507ff0: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x507ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_507ff4:
    // 0x507ff4: 0xae3000e4  sw          $s0, 0xE4($s1)
    ctx->pc = 0x507ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 16));
label_507ff8:
    // 0x507ff8: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x507ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_507ffc:
    // 0x507ffc: 0xc142030  jal         func_5080C0
label_508000:
    if (ctx->pc == 0x508000u) {
        ctx->pc = 0x508000u;
            // 0x508000: 0xae2000ec  sw          $zero, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x508004u;
        goto label_508004;
    }
    ctx->pc = 0x507FFCu;
    SET_GPR_U32(ctx, 31, 0x508004u);
    ctx->pc = 0x508000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507FFCu;
            // 0x508000: 0xae2000ec  sw          $zero, 0xEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5080C0u;
    if (runtime->hasFunction(0x5080C0u)) {
        auto targetFn = runtime->lookupFunction(0x5080C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508004u; }
        if (ctx->pc != 0x508004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005080C0_0x5080c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508004u; }
        if (ctx->pc != 0x508004u) { return; }
    }
    ctx->pc = 0x508004u;
label_508004:
    // 0x508004: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x508004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_508008:
    // 0x508008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x508008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50800c:
    // 0x50800c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50800cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_508010:
    // 0x508010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x508010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_508014:
    // 0x508014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x508014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_508018:
    // 0x508018: 0x3e00008  jr          $ra
label_50801c:
    if (ctx->pc == 0x50801Cu) {
        ctx->pc = 0x50801Cu;
            // 0x50801c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x508020u;
        goto label_508020;
    }
    ctx->pc = 0x508018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508018u;
            // 0x50801c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x508020u;
label_508020:
    // 0x508020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x508020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_508024:
    // 0x508024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x508024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_508028:
    // 0x508028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x508028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50802c:
    // 0x50802c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_508030:
    // 0x508030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x508030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_508034:
    // 0x508034: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_508038:
    if (ctx->pc == 0x508038u) {
        ctx->pc = 0x508038u;
            // 0x508038: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50803Cu;
        goto label_50803c;
    }
    ctx->pc = 0x508034u;
    {
        const bool branch_taken_0x508034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x508038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x508034u;
            // 0x508038: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508034) {
            ctx->pc = 0x5080A8u;
            goto label_5080a8;
        }
    }
    ctx->pc = 0x50803Cu;
label_50803c:
    // 0x50803c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50803cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_508040:
    // 0x508040: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x508040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_508044:
    // 0x508044: 0x24634e10  addiu       $v1, $v1, 0x4E10
    ctx->pc = 0x508044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19984));
label_508048:
    // 0x508048: 0x24424e50  addiu       $v0, $v0, 0x4E50
    ctx->pc = 0x508048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20048));
label_50804c:
    // 0x50804c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50804cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508050:
    // 0x508050: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x508050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_508054:
    // 0x508054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x508054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_508058:
    // 0x508058: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x508058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_50805c:
    // 0x50805c: 0x320f809  jalr        $t9
label_508060:
    if (ctx->pc == 0x508060u) {
        ctx->pc = 0x508064u;
        goto label_508064;
    }
    ctx->pc = 0x50805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x508064u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x508064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x508064u; }
            if (ctx->pc != 0x508064u) { return; }
        }
        }
    }
    ctx->pc = 0x508064u;
label_508064:
    // 0x508064: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_508068:
    if (ctx->pc == 0x508068u) {
        ctx->pc = 0x508068u;
            // 0x508068: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x50806Cu;
        goto label_50806c;
    }
    ctx->pc = 0x508064u;
    {
        const bool branch_taken_0x508064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x508064) {
            ctx->pc = 0x508068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508064u;
            // 0x508068: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x508094u;
            goto label_508094;
        }
    }
    ctx->pc = 0x50806Cu;
label_50806c:
    // 0x50806c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_508070:
    // 0x508070: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x508070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_508074:
    // 0x508074: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x508074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_508078:
    // 0x508078: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x508078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_50807c:
    // 0x50807c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50807cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_508080:
    // 0x508080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_508084:
    // 0x508084: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x508084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_508088:
    // 0x508088: 0xc0aee40  jal         func_2BB900
label_50808c:
    if (ctx->pc == 0x50808Cu) {
        ctx->pc = 0x50808Cu;
            // 0x50808c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x508090u;
        goto label_508090;
    }
    ctx->pc = 0x508088u;
    SET_GPR_U32(ctx, 31, 0x508090u);
    ctx->pc = 0x50808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x508088u;
            // 0x50808c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508090u; }
        if (ctx->pc != 0x508090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x508090u; }
        if (ctx->pc != 0x508090u) { return; }
    }
    ctx->pc = 0x508090u;
label_508090:
    // 0x508090: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x508090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_508094:
    // 0x508094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x508094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_508098:
    // 0x508098: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_50809c:
    if (ctx->pc == 0x50809Cu) {
        ctx->pc = 0x50809Cu;
            // 0x50809c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5080A0u;
        goto label_5080a0;
    }
    ctx->pc = 0x508098u;
    {
        const bool branch_taken_0x508098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x508098) {
            ctx->pc = 0x50809Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x508098u;
            // 0x50809c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5080ACu;
            goto label_5080ac;
        }
    }
    ctx->pc = 0x5080A0u;
label_5080a0:
    // 0x5080a0: 0xc0400a8  jal         func_1002A0
label_5080a4:
    if (ctx->pc == 0x5080A4u) {
        ctx->pc = 0x5080A4u;
            // 0x5080a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5080A8u;
        goto label_5080a8;
    }
    ctx->pc = 0x5080A0u;
    SET_GPR_U32(ctx, 31, 0x5080A8u);
    ctx->pc = 0x5080A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5080A0u;
            // 0x5080a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5080A8u; }
        if (ctx->pc != 0x5080A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5080A8u; }
        if (ctx->pc != 0x5080A8u) { return; }
    }
    ctx->pc = 0x5080A8u;
label_5080a8:
    // 0x5080a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5080a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5080ac:
    // 0x5080ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5080acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5080b0:
    // 0x5080b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5080b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5080b4:
    // 0x5080b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5080b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5080b8:
    // 0x5080b8: 0x3e00008  jr          $ra
label_5080bc:
    if (ctx->pc == 0x5080BCu) {
        ctx->pc = 0x5080BCu;
            // 0x5080bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5080C0u;
        goto label_fallthrough_0x5080b8;
    }
    ctx->pc = 0x5080B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5080BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5080B8u;
            // 0x5080bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5080b8:
    ctx->pc = 0x5080C0u;
}
