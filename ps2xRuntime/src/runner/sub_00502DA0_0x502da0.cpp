#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502DA0
// Address: 0x502da0 - 0x503110
void sub_00502DA0_0x502da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502DA0_0x502da0");
#endif

    switch (ctx->pc) {
        case 0x502da0u: goto label_502da0;
        case 0x502da4u: goto label_502da4;
        case 0x502da8u: goto label_502da8;
        case 0x502dacu: goto label_502dac;
        case 0x502db0u: goto label_502db0;
        case 0x502db4u: goto label_502db4;
        case 0x502db8u: goto label_502db8;
        case 0x502dbcu: goto label_502dbc;
        case 0x502dc0u: goto label_502dc0;
        case 0x502dc4u: goto label_502dc4;
        case 0x502dc8u: goto label_502dc8;
        case 0x502dccu: goto label_502dcc;
        case 0x502dd0u: goto label_502dd0;
        case 0x502dd4u: goto label_502dd4;
        case 0x502dd8u: goto label_502dd8;
        case 0x502ddcu: goto label_502ddc;
        case 0x502de0u: goto label_502de0;
        case 0x502de4u: goto label_502de4;
        case 0x502de8u: goto label_502de8;
        case 0x502decu: goto label_502dec;
        case 0x502df0u: goto label_502df0;
        case 0x502df4u: goto label_502df4;
        case 0x502df8u: goto label_502df8;
        case 0x502dfcu: goto label_502dfc;
        case 0x502e00u: goto label_502e00;
        case 0x502e04u: goto label_502e04;
        case 0x502e08u: goto label_502e08;
        case 0x502e0cu: goto label_502e0c;
        case 0x502e10u: goto label_502e10;
        case 0x502e14u: goto label_502e14;
        case 0x502e18u: goto label_502e18;
        case 0x502e1cu: goto label_502e1c;
        case 0x502e20u: goto label_502e20;
        case 0x502e24u: goto label_502e24;
        case 0x502e28u: goto label_502e28;
        case 0x502e2cu: goto label_502e2c;
        case 0x502e30u: goto label_502e30;
        case 0x502e34u: goto label_502e34;
        case 0x502e38u: goto label_502e38;
        case 0x502e3cu: goto label_502e3c;
        case 0x502e40u: goto label_502e40;
        case 0x502e44u: goto label_502e44;
        case 0x502e48u: goto label_502e48;
        case 0x502e4cu: goto label_502e4c;
        case 0x502e50u: goto label_502e50;
        case 0x502e54u: goto label_502e54;
        case 0x502e58u: goto label_502e58;
        case 0x502e5cu: goto label_502e5c;
        case 0x502e60u: goto label_502e60;
        case 0x502e64u: goto label_502e64;
        case 0x502e68u: goto label_502e68;
        case 0x502e6cu: goto label_502e6c;
        case 0x502e70u: goto label_502e70;
        case 0x502e74u: goto label_502e74;
        case 0x502e78u: goto label_502e78;
        case 0x502e7cu: goto label_502e7c;
        case 0x502e80u: goto label_502e80;
        case 0x502e84u: goto label_502e84;
        case 0x502e88u: goto label_502e88;
        case 0x502e8cu: goto label_502e8c;
        case 0x502e90u: goto label_502e90;
        case 0x502e94u: goto label_502e94;
        case 0x502e98u: goto label_502e98;
        case 0x502e9cu: goto label_502e9c;
        case 0x502ea0u: goto label_502ea0;
        case 0x502ea4u: goto label_502ea4;
        case 0x502ea8u: goto label_502ea8;
        case 0x502eacu: goto label_502eac;
        case 0x502eb0u: goto label_502eb0;
        case 0x502eb4u: goto label_502eb4;
        case 0x502eb8u: goto label_502eb8;
        case 0x502ebcu: goto label_502ebc;
        case 0x502ec0u: goto label_502ec0;
        case 0x502ec4u: goto label_502ec4;
        case 0x502ec8u: goto label_502ec8;
        case 0x502eccu: goto label_502ecc;
        case 0x502ed0u: goto label_502ed0;
        case 0x502ed4u: goto label_502ed4;
        case 0x502ed8u: goto label_502ed8;
        case 0x502edcu: goto label_502edc;
        case 0x502ee0u: goto label_502ee0;
        case 0x502ee4u: goto label_502ee4;
        case 0x502ee8u: goto label_502ee8;
        case 0x502eecu: goto label_502eec;
        case 0x502ef0u: goto label_502ef0;
        case 0x502ef4u: goto label_502ef4;
        case 0x502ef8u: goto label_502ef8;
        case 0x502efcu: goto label_502efc;
        case 0x502f00u: goto label_502f00;
        case 0x502f04u: goto label_502f04;
        case 0x502f08u: goto label_502f08;
        case 0x502f0cu: goto label_502f0c;
        case 0x502f10u: goto label_502f10;
        case 0x502f14u: goto label_502f14;
        case 0x502f18u: goto label_502f18;
        case 0x502f1cu: goto label_502f1c;
        case 0x502f20u: goto label_502f20;
        case 0x502f24u: goto label_502f24;
        case 0x502f28u: goto label_502f28;
        case 0x502f2cu: goto label_502f2c;
        case 0x502f30u: goto label_502f30;
        case 0x502f34u: goto label_502f34;
        case 0x502f38u: goto label_502f38;
        case 0x502f3cu: goto label_502f3c;
        case 0x502f40u: goto label_502f40;
        case 0x502f44u: goto label_502f44;
        case 0x502f48u: goto label_502f48;
        case 0x502f4cu: goto label_502f4c;
        case 0x502f50u: goto label_502f50;
        case 0x502f54u: goto label_502f54;
        case 0x502f58u: goto label_502f58;
        case 0x502f5cu: goto label_502f5c;
        case 0x502f60u: goto label_502f60;
        case 0x502f64u: goto label_502f64;
        case 0x502f68u: goto label_502f68;
        case 0x502f6cu: goto label_502f6c;
        case 0x502f70u: goto label_502f70;
        case 0x502f74u: goto label_502f74;
        case 0x502f78u: goto label_502f78;
        case 0x502f7cu: goto label_502f7c;
        case 0x502f80u: goto label_502f80;
        case 0x502f84u: goto label_502f84;
        case 0x502f88u: goto label_502f88;
        case 0x502f8cu: goto label_502f8c;
        case 0x502f90u: goto label_502f90;
        case 0x502f94u: goto label_502f94;
        case 0x502f98u: goto label_502f98;
        case 0x502f9cu: goto label_502f9c;
        case 0x502fa0u: goto label_502fa0;
        case 0x502fa4u: goto label_502fa4;
        case 0x502fa8u: goto label_502fa8;
        case 0x502facu: goto label_502fac;
        case 0x502fb0u: goto label_502fb0;
        case 0x502fb4u: goto label_502fb4;
        case 0x502fb8u: goto label_502fb8;
        case 0x502fbcu: goto label_502fbc;
        case 0x502fc0u: goto label_502fc0;
        case 0x502fc4u: goto label_502fc4;
        case 0x502fc8u: goto label_502fc8;
        case 0x502fccu: goto label_502fcc;
        case 0x502fd0u: goto label_502fd0;
        case 0x502fd4u: goto label_502fd4;
        case 0x502fd8u: goto label_502fd8;
        case 0x502fdcu: goto label_502fdc;
        case 0x502fe0u: goto label_502fe0;
        case 0x502fe4u: goto label_502fe4;
        case 0x502fe8u: goto label_502fe8;
        case 0x502fecu: goto label_502fec;
        case 0x502ff0u: goto label_502ff0;
        case 0x502ff4u: goto label_502ff4;
        case 0x502ff8u: goto label_502ff8;
        case 0x502ffcu: goto label_502ffc;
        case 0x503000u: goto label_503000;
        case 0x503004u: goto label_503004;
        case 0x503008u: goto label_503008;
        case 0x50300cu: goto label_50300c;
        case 0x503010u: goto label_503010;
        case 0x503014u: goto label_503014;
        case 0x503018u: goto label_503018;
        case 0x50301cu: goto label_50301c;
        case 0x503020u: goto label_503020;
        case 0x503024u: goto label_503024;
        case 0x503028u: goto label_503028;
        case 0x50302cu: goto label_50302c;
        case 0x503030u: goto label_503030;
        case 0x503034u: goto label_503034;
        case 0x503038u: goto label_503038;
        case 0x50303cu: goto label_50303c;
        case 0x503040u: goto label_503040;
        case 0x503044u: goto label_503044;
        case 0x503048u: goto label_503048;
        case 0x50304cu: goto label_50304c;
        case 0x503050u: goto label_503050;
        case 0x503054u: goto label_503054;
        case 0x503058u: goto label_503058;
        case 0x50305cu: goto label_50305c;
        case 0x503060u: goto label_503060;
        case 0x503064u: goto label_503064;
        case 0x503068u: goto label_503068;
        case 0x50306cu: goto label_50306c;
        case 0x503070u: goto label_503070;
        case 0x503074u: goto label_503074;
        case 0x503078u: goto label_503078;
        case 0x50307cu: goto label_50307c;
        case 0x503080u: goto label_503080;
        case 0x503084u: goto label_503084;
        case 0x503088u: goto label_503088;
        case 0x50308cu: goto label_50308c;
        case 0x503090u: goto label_503090;
        case 0x503094u: goto label_503094;
        case 0x503098u: goto label_503098;
        case 0x50309cu: goto label_50309c;
        case 0x5030a0u: goto label_5030a0;
        case 0x5030a4u: goto label_5030a4;
        case 0x5030a8u: goto label_5030a8;
        case 0x5030acu: goto label_5030ac;
        case 0x5030b0u: goto label_5030b0;
        case 0x5030b4u: goto label_5030b4;
        case 0x5030b8u: goto label_5030b8;
        case 0x5030bcu: goto label_5030bc;
        case 0x5030c0u: goto label_5030c0;
        case 0x5030c4u: goto label_5030c4;
        case 0x5030c8u: goto label_5030c8;
        case 0x5030ccu: goto label_5030cc;
        case 0x5030d0u: goto label_5030d0;
        case 0x5030d4u: goto label_5030d4;
        case 0x5030d8u: goto label_5030d8;
        case 0x5030dcu: goto label_5030dc;
        case 0x5030e0u: goto label_5030e0;
        case 0x5030e4u: goto label_5030e4;
        case 0x5030e8u: goto label_5030e8;
        case 0x5030ecu: goto label_5030ec;
        case 0x5030f0u: goto label_5030f0;
        case 0x5030f4u: goto label_5030f4;
        case 0x5030f8u: goto label_5030f8;
        case 0x5030fcu: goto label_5030fc;
        case 0x503100u: goto label_503100;
        case 0x503104u: goto label_503104;
        case 0x503108u: goto label_503108;
        case 0x50310cu: goto label_50310c;
        default: break;
    }

    ctx->pc = 0x502da0u;

label_502da0:
    // 0x502da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x502da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_502da4:
    // 0x502da4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x502da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_502da8:
    // 0x502da8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x502da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_502dac:
    // 0x502dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x502dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_502db0:
    // 0x502db0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x502db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_502db4:
    // 0x502db4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x502db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502db8:
    // 0x502db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_502dbc:
    // 0x502dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502dc0:
    // 0x502dc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x502dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_502dc4:
    // 0x502dc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x502dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_502dc8:
    // 0x502dc8: 0xc10ca68  jal         func_4329A0
label_502dcc:
    if (ctx->pc == 0x502DCCu) {
        ctx->pc = 0x502DCCu;
            // 0x502dcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x502DD0u;
        goto label_502dd0;
    }
    ctx->pc = 0x502DC8u;
    SET_GPR_U32(ctx, 31, 0x502DD0u);
    ctx->pc = 0x502DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502DC8u;
            // 0x502dcc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502DD0u; }
        if (ctx->pc != 0x502DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502DD0u; }
        if (ctx->pc != 0x502DD0u) { return; }
    }
    ctx->pc = 0x502DD0u;
label_502dd0:
    // 0x502dd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x502dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_502dd4:
    // 0x502dd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x502dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_502dd8:
    // 0x502dd8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x502dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_502ddc:
    // 0x502ddc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x502ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_502de0:
    // 0x502de0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x502de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_502de4:
    // 0x502de4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x502de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_502de8:
    // 0x502de8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x502de8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_502dec:
    // 0x502dec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x502decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_502df0:
    // 0x502df0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x502df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_502df4:
    // 0x502df4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x502df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_502df8:
    // 0x502df8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x502df8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_502dfc:
    // 0x502dfc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x502dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_502e00:
    // 0x502e00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x502e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_502e04:
    // 0x502e04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x502e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_502e08:
    // 0x502e08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x502e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_502e0c:
    // 0x502e0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x502e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_502e10:
    // 0x502e10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x502e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_502e14:
    // 0x502e14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x502e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_502e18:
    // 0x502e18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x502e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_502e1c:
    // 0x502e1c: 0xc0582cc  jal         func_160B30
label_502e20:
    if (ctx->pc == 0x502E20u) {
        ctx->pc = 0x502E20u;
            // 0x502e20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x502E24u;
        goto label_502e24;
    }
    ctx->pc = 0x502E1Cu;
    SET_GPR_U32(ctx, 31, 0x502E24u);
    ctx->pc = 0x502E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502E1Cu;
            // 0x502e20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502E24u; }
        if (ctx->pc != 0x502E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502E24u; }
        if (ctx->pc != 0x502E24u) { return; }
    }
    ctx->pc = 0x502E24u;
label_502e24:
    // 0x502e24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502e28:
    // 0x502e28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x502e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_502e2c:
    // 0x502e2c: 0x246349d8  addiu       $v1, $v1, 0x49D8
    ctx->pc = 0x502e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18904));
label_502e30:
    // 0x502e30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x502e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_502e34:
    // 0x502e34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x502e34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_502e38:
    // 0x502e38: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x502e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_502e3c:
    // 0x502e3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502e40:
    // 0x502e40: 0xac44aae8  sw          $a0, -0x5518($v0)
    ctx->pc = 0x502e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945512), GPR_U32(ctx, 4));
label_502e44:
    // 0x502e44: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x502e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
label_502e48:
    // 0x502e48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502e4c:
    // 0x502e4c: 0x24424a28  addiu       $v0, $v0, 0x4A28
    ctx->pc = 0x502e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18984));
label_502e50:
    // 0x502e50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x502e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_502e54:
    // 0x502e54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x502e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_502e58:
    // 0x502e58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x502e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_502e5c:
    // 0x502e5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x502e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_502e60:
    // 0x502e60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x502e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_502e64:
    // 0x502e64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x502e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_502e68:
    // 0x502e68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x502e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_502e6c:
    // 0x502e6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x502e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_502e70:
    // 0x502e70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x502e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_502e74:
    // 0x502e74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x502e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_502e78:
    // 0x502e78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x502e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_502e7c:
    // 0x502e7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x502e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_502e80:
    // 0x502e80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x502e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_502e84:
    // 0x502e84: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_502e88:
    if (ctx->pc == 0x502E88u) {
        ctx->pc = 0x502E8Cu;
        goto label_502e8c;
    }
    ctx->pc = 0x502E84u;
    {
        const bool branch_taken_0x502e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x502e84) {
            ctx->pc = 0x502F20u;
            goto label_502f20;
        }
    }
    ctx->pc = 0x502E8Cu;
label_502e8c:
    // 0x502e8c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x502e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_502e90:
    // 0x502e90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x502e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_502e94:
    // 0x502e94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x502e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_502e98:
    // 0x502e98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x502e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_502e9c:
    // 0x502e9c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x502e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_502ea0:
    // 0x502ea0: 0xc040138  jal         func_1004E0
label_502ea4:
    if (ctx->pc == 0x502EA4u) {
        ctx->pc = 0x502EA4u;
            // 0x502ea4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x502EA8u;
        goto label_502ea8;
    }
    ctx->pc = 0x502EA0u;
    SET_GPR_U32(ctx, 31, 0x502EA8u);
    ctx->pc = 0x502EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502EA0u;
            // 0x502ea4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EA8u; }
        if (ctx->pc != 0x502EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EA8u; }
        if (ctx->pc != 0x502EA8u) { return; }
    }
    ctx->pc = 0x502EA8u;
label_502ea8:
    // 0x502ea8: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x502ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_502eac:
    // 0x502eac: 0x3c060050  lui         $a2, 0x50
    ctx->pc = 0x502eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
label_502eb0:
    // 0x502eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x502eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_502eb4:
    // 0x502eb4: 0x24a52f40  addiu       $a1, $a1, 0x2F40
    ctx->pc = 0x502eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12096));
label_502eb8:
    // 0x502eb8: 0x24c62ab0  addiu       $a2, $a2, 0x2AB0
    ctx->pc = 0x502eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10928));
label_502ebc:
    // 0x502ebc: 0x240702c0  addiu       $a3, $zero, 0x2C0
    ctx->pc = 0x502ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
label_502ec0:
    // 0x502ec0: 0xc040840  jal         func_102100
label_502ec4:
    if (ctx->pc == 0x502EC4u) {
        ctx->pc = 0x502EC4u;
            // 0x502ec4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502EC8u;
        goto label_502ec8;
    }
    ctx->pc = 0x502EC0u;
    SET_GPR_U32(ctx, 31, 0x502EC8u);
    ctx->pc = 0x502EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502EC0u;
            // 0x502ec4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EC8u; }
        if (ctx->pc != 0x502EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EC8u; }
        if (ctx->pc != 0x502EC8u) { return; }
    }
    ctx->pc = 0x502EC8u;
label_502ec8:
    // 0x502ec8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x502ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_502ecc:
    // 0x502ecc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x502eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_502ed0:
    // 0x502ed0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x502ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_502ed4:
    // 0x502ed4: 0xc0788fc  jal         func_1E23F0
label_502ed8:
    if (ctx->pc == 0x502ED8u) {
        ctx->pc = 0x502ED8u;
            // 0x502ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502EDCu;
        goto label_502edc;
    }
    ctx->pc = 0x502ED4u;
    SET_GPR_U32(ctx, 31, 0x502EDCu);
    ctx->pc = 0x502ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502ED4u;
            // 0x502ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EDCu; }
        if (ctx->pc != 0x502EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EDCu; }
        if (ctx->pc != 0x502EDCu) { return; }
    }
    ctx->pc = 0x502EDCu;
label_502edc:
    // 0x502edc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x502edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_502ee0:
    // 0x502ee0: 0xc0788fc  jal         func_1E23F0
label_502ee4:
    if (ctx->pc == 0x502EE4u) {
        ctx->pc = 0x502EE4u;
            // 0x502ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502EE8u;
        goto label_502ee8;
    }
    ctx->pc = 0x502EE0u;
    SET_GPR_U32(ctx, 31, 0x502EE8u);
    ctx->pc = 0x502EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502EE0u;
            // 0x502ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EE8u; }
        if (ctx->pc != 0x502EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502EE8u; }
        if (ctx->pc != 0x502EE8u) { return; }
    }
    ctx->pc = 0x502EE8u;
label_502ee8:
    // 0x502ee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x502ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_502eec:
    // 0x502eec: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x502eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_502ef0:
    // 0x502ef0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x502ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_502ef4:
    // 0x502ef4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x502ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_502ef8:
    // 0x502ef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x502ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_502efc:
    // 0x502efc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x502efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_502f00:
    // 0x502f00: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x502f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_502f04:
    // 0x502f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x502f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_502f08:
    // 0x502f08: 0xc0a997c  jal         func_2A65F0
label_502f0c:
    if (ctx->pc == 0x502F0Cu) {
        ctx->pc = 0x502F0Cu;
            // 0x502f0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x502F10u;
        goto label_502f10;
    }
    ctx->pc = 0x502F08u;
    SET_GPR_U32(ctx, 31, 0x502F10u);
    ctx->pc = 0x502F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502F08u;
            // 0x502f0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F10u; }
        if (ctx->pc != 0x502F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F10u; }
        if (ctx->pc != 0x502F10u) { return; }
    }
    ctx->pc = 0x502F10u;
label_502f10:
    // 0x502f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x502f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_502f14:
    // 0x502f14: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x502f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_502f18:
    // 0x502f18: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_502f1c:
    if (ctx->pc == 0x502F1Cu) {
        ctx->pc = 0x502F1Cu;
            // 0x502f1c: 0x265202c0  addiu       $s2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x502F20u;
        goto label_502f20;
    }
    ctx->pc = 0x502F18u;
    {
        const bool branch_taken_0x502f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x502F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502F18u;
            // 0x502f1c: 0x265202c0  addiu       $s2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502f18) {
            ctx->pc = 0x502EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_502eec;
        }
    }
    ctx->pc = 0x502F20u;
label_502f20:
    // 0x502f20: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x502f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_502f24:
    // 0x502f24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x502f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_502f28:
    // 0x502f28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x502f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_502f2c:
    // 0x502f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x502f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_502f30:
    // 0x502f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x502f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_502f34:
    // 0x502f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_502f38:
    // 0x502f38: 0x3e00008  jr          $ra
label_502f3c:
    if (ctx->pc == 0x502F3Cu) {
        ctx->pc = 0x502F3Cu;
            // 0x502f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x502F40u;
        goto label_502f40;
    }
    ctx->pc = 0x502F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502F38u;
            // 0x502f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502F40u;
label_502f40:
    // 0x502f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x502f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_502f44:
    // 0x502f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x502f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_502f48:
    // 0x502f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502f4c:
    // 0x502f4c: 0xc0b1370  jal         func_2C4DC0
label_502f50:
    if (ctx->pc == 0x502F50u) {
        ctx->pc = 0x502F50u;
            // 0x502f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502F54u;
        goto label_502f54;
    }
    ctx->pc = 0x502F4Cu;
    SET_GPR_U32(ctx, 31, 0x502F54u);
    ctx->pc = 0x502F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502F4Cu;
            // 0x502f50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F54u; }
        if (ctx->pc != 0x502F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F54u; }
        if (ctx->pc != 0x502F54u) { return; }
    }
    ctx->pc = 0x502F54u;
label_502f54:
    // 0x502f54: 0xc140c98  jal         func_503260
label_502f58:
    if (ctx->pc == 0x502F58u) {
        ctx->pc = 0x502F58u;
            // 0x502f58: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x502F5Cu;
        goto label_502f5c;
    }
    ctx->pc = 0x502F54u;
    SET_GPR_U32(ctx, 31, 0x502F5Cu);
    ctx->pc = 0x502F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502F54u;
            // 0x502f58: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503260u;
    if (runtime->hasFunction(0x503260u)) {
        auto targetFn = runtime->lookupFunction(0x503260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F5Cu; }
        if (ctx->pc != 0x502F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503260_0x503260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F5Cu; }
        if (ctx->pc != 0x502F5Cu) { return; }
    }
    ctx->pc = 0x502F5Cu;
label_502f5c:
    // 0x502f5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502f60:
    // 0x502f60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502f64:
    // 0x502f64: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x502f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
label_502f68:
    // 0x502f68: 0x24634850  addiu       $v1, $v1, 0x4850
    ctx->pc = 0x502f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18512));
label_502f6c:
    // 0x502f6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x502f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_502f70:
    // 0x502f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x502f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_502f74:
    // 0x502f74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502f78:
    // 0x502f78: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x502f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_502f7c:
    // 0x502f7c: 0x244248ac  addiu       $v0, $v0, 0x48AC
    ctx->pc = 0x502f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18604));
label_502f80:
    // 0x502f80: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x502f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_502f84:
    // 0x502f84: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_502f88:
    if (ctx->pc == 0x502F88u) {
        ctx->pc = 0x502F88u;
            // 0x502f88: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x502F8Cu;
        goto label_502f8c;
    }
    ctx->pc = 0x502F84u;
    {
        const bool branch_taken_0x502f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x502F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502F84u;
            // 0x502f88: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502f84) {
            ctx->pc = 0x502F90u;
            goto label_502f90;
        }
    }
    ctx->pc = 0x502F8Cu;
label_502f8c:
    // 0x502f8c: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x502f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_502f90:
    // 0x502f90: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x502f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_502f94:
    // 0x502f94: 0xc140c44  jal         func_503110
label_502f98:
    if (ctx->pc == 0x502F98u) {
        ctx->pc = 0x502F98u;
            // 0x502f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502F9Cu;
        goto label_502f9c;
    }
    ctx->pc = 0x502F94u;
    SET_GPR_U32(ctx, 31, 0x502F9Cu);
    ctx->pc = 0x502F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502F94u;
            // 0x502f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503110u;
    if (runtime->hasFunction(0x503110u)) {
        auto targetFn = runtime->lookupFunction(0x503110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F9Cu; }
        if (ctx->pc != 0x502F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00503110_0x503110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502F9Cu; }
        if (ctx->pc != 0x502F9Cu) { return; }
    }
    ctx->pc = 0x502F9Cu;
label_502f9c:
    // 0x502f9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502fa0:
    // 0x502fa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502fa4:
    // 0x502fa4: 0x246348f0  addiu       $v1, $v1, 0x48F0
    ctx->pc = 0x502fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18672));
label_502fa8:
    // 0x502fa8: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x502fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
label_502fac:
    // 0x502fac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x502facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_502fb0:
    // 0x502fb0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502fb4:
    // 0x502fb4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x502fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_502fb8:
    // 0x502fb8: 0x2463498c  addiu       $v1, $v1, 0x498C
    ctx->pc = 0x502fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18828));
label_502fbc:
    // 0x502fbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x502fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_502fc0:
    // 0x502fc0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x502fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_502fc4:
    // 0x502fc4: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x502fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_502fc8:
    // 0x502fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x502fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_502fcc:
    // 0x502fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_502fd0:
    // 0x502fd0: 0x3e00008  jr          $ra
label_502fd4:
    if (ctx->pc == 0x502FD4u) {
        ctx->pc = 0x502FD4u;
            // 0x502fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x502FD8u;
        goto label_502fd8;
    }
    ctx->pc = 0x502FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502FD0u;
            // 0x502fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502FD8u;
label_502fd8:
    // 0x502fd8: 0x0  nop
    ctx->pc = 0x502fd8u;
    // NOP
label_502fdc:
    // 0x502fdc: 0x0  nop
    ctx->pc = 0x502fdcu;
    // NOP
label_502fe0:
    // 0x502fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_502fe4:
    // 0x502fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x502fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_502fe8:
    // 0x502fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_502fec:
    // 0x502fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502ff0:
    // 0x502ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x502ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502ff4:
    // 0x502ff4: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_502ff8:
    if (ctx->pc == 0x502FF8u) {
        ctx->pc = 0x502FF8u;
            // 0x502ff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502FFCu;
        goto label_502ffc;
    }
    ctx->pc = 0x502FF4u;
    {
        const bool branch_taken_0x502ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x502FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502FF4u;
            // 0x502ff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502ff4) {
            ctx->pc = 0x5030F0u;
            goto label_5030f0;
        }
    }
    ctx->pc = 0x502FFCu;
label_502ffc:
    // 0x502ffc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_503000:
    // 0x503000: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x503000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_503004:
    // 0x503004: 0x24634810  addiu       $v1, $v1, 0x4810
    ctx->pc = 0x503004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18448));
label_503008:
    // 0x503008: 0x24424850  addiu       $v0, $v0, 0x4850
    ctx->pc = 0x503008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
label_50300c:
    // 0x50300c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50300cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_503010:
    // 0x503010: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x503010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_503014:
    // 0x503014: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x503014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_503018:
    // 0x503018: 0x246348ac  addiu       $v1, $v1, 0x48AC
    ctx->pc = 0x503018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18604));
label_50301c:
    // 0x50301c: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x50301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_503020:
    // 0x503020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_503024:
    if (ctx->pc == 0x503024u) {
        ctx->pc = 0x503024u;
            // 0x503024: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x503028u;
        goto label_503028;
    }
    ctx->pc = 0x503020u;
    {
        const bool branch_taken_0x503020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x503024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503020u;
            // 0x503024: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503020) {
            ctx->pc = 0x503040u;
            goto label_503040;
        }
    }
    ctx->pc = 0x503028u;
label_503028:
    // 0x503028: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x503028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_50302c:
    // 0x50302c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_503030:
    if (ctx->pc == 0x503030u) {
        ctx->pc = 0x503030u;
            // 0x503030: 0x262200d0  addiu       $v0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x503034u;
        goto label_503034;
    }
    ctx->pc = 0x50302Cu;
    {
        const bool branch_taken_0x50302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50302c) {
            ctx->pc = 0x503030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50302Cu;
            // 0x503030: 0x262200d0  addiu       $v0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503044u;
            goto label_503044;
        }
    }
    ctx->pc = 0x503034u;
label_503034:
    // 0x503034: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x503034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_503038:
    // 0x503038: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x503038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_50303c:
    // 0x50303c: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x50303cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
label_503040:
    // 0x503040: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x503040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_503044:
    // 0x503044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_503048:
    if (ctx->pc == 0x503048u) {
        ctx->pc = 0x50304Cu;
        goto label_50304c;
    }
    ctx->pc = 0x503044u;
    {
        const bool branch_taken_0x503044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x503044) {
            ctx->pc = 0x503058u;
            goto label_503058;
        }
    }
    ctx->pc = 0x50304Cu;
label_50304c:
    // 0x50304c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50304cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_503050:
    // 0x503050: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x503050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
label_503054:
    // 0x503054: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x503054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_503058:
    // 0x503058: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_50305c:
    if (ctx->pc == 0x50305Cu) {
        ctx->pc = 0x50305Cu;
            // 0x50305c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x503060u;
        goto label_503060;
    }
    ctx->pc = 0x503058u;
    {
        const bool branch_taken_0x503058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x503058) {
            ctx->pc = 0x50305Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503058u;
            // 0x50305c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5030DCu;
            goto label_5030dc;
        }
    }
    ctx->pc = 0x503060u;
label_503060:
    // 0x503060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x503060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_503064:
    // 0x503064: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x503064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_503068:
    // 0x503068: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x503068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_50306c:
    // 0x50306c: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x50306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_503070:
    // 0x503070: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x503070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_503074:
    // 0x503074: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x503074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_503078:
    // 0x503078: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x503078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_50307c:
    // 0x50307c: 0xc0aecc4  jal         func_2BB310
label_503080:
    if (ctx->pc == 0x503080u) {
        ctx->pc = 0x503080u;
            // 0x503080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x503084u;
        goto label_503084;
    }
    ctx->pc = 0x50307Cu;
    SET_GPR_U32(ctx, 31, 0x503084u);
    ctx->pc = 0x503080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50307Cu;
            // 0x503080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503084u; }
        if (ctx->pc != 0x503084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503084u; }
        if (ctx->pc != 0x503084u) { return; }
    }
    ctx->pc = 0x503084u;
label_503084:
    // 0x503084: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x503084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_503088:
    // 0x503088: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x503088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_50308c:
    // 0x50308c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_503090:
    if (ctx->pc == 0x503090u) {
        ctx->pc = 0x503090u;
            // 0x503090: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x503094u;
        goto label_503094;
    }
    ctx->pc = 0x50308Cu;
    {
        const bool branch_taken_0x50308c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50308c) {
            ctx->pc = 0x503090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50308Cu;
            // 0x503090: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5030A8u;
            goto label_5030a8;
        }
    }
    ctx->pc = 0x503094u;
label_503094:
    // 0x503094: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x503094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_503098:
    // 0x503098: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x503098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50309c:
    // 0x50309c: 0x320f809  jalr        $t9
label_5030a0:
    if (ctx->pc == 0x5030A0u) {
        ctx->pc = 0x5030A0u;
            // 0x5030a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5030A4u;
        goto label_5030a4;
    }
    ctx->pc = 0x50309Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5030A4u);
        ctx->pc = 0x5030A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50309Cu;
            // 0x5030a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5030A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5030A4u; }
            if (ctx->pc != 0x5030A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5030A4u;
label_5030a4:
    // 0x5030a4: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x5030a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_5030a8:
    // 0x5030a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5030a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5030ac:
    // 0x5030ac: 0xc0aec9c  jal         func_2BB270
label_5030b0:
    if (ctx->pc == 0x5030B0u) {
        ctx->pc = 0x5030B0u;
            // 0x5030b0: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x5030B4u;
        goto label_5030b4;
    }
    ctx->pc = 0x5030ACu;
    SET_GPR_U32(ctx, 31, 0x5030B4u);
    ctx->pc = 0x5030B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5030ACu;
            // 0x5030b0: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030B4u; }
        if (ctx->pc != 0x5030B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030B4u; }
        if (ctx->pc != 0x5030B4u) { return; }
    }
    ctx->pc = 0x5030B4u;
label_5030b4:
    // 0x5030b4: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x5030b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_5030b8:
    // 0x5030b8: 0xc0aec88  jal         func_2BB220
label_5030bc:
    if (ctx->pc == 0x5030BCu) {
        ctx->pc = 0x5030BCu;
            // 0x5030bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5030C0u;
        goto label_5030c0;
    }
    ctx->pc = 0x5030B8u;
    SET_GPR_U32(ctx, 31, 0x5030C0u);
    ctx->pc = 0x5030BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5030B8u;
            // 0x5030bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030C0u; }
        if (ctx->pc != 0x5030C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030C0u; }
        if (ctx->pc != 0x5030C0u) { return; }
    }
    ctx->pc = 0x5030C0u;
label_5030c0:
    // 0x5030c0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x5030c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_5030c4:
    // 0x5030c4: 0xc0aec0c  jal         func_2BB030
label_5030c8:
    if (ctx->pc == 0x5030C8u) {
        ctx->pc = 0x5030C8u;
            // 0x5030c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5030CCu;
        goto label_5030cc;
    }
    ctx->pc = 0x5030C4u;
    SET_GPR_U32(ctx, 31, 0x5030CCu);
    ctx->pc = 0x5030C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5030C4u;
            // 0x5030c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030CCu; }
        if (ctx->pc != 0x5030CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030CCu; }
        if (ctx->pc != 0x5030CCu) { return; }
    }
    ctx->pc = 0x5030CCu;
label_5030cc:
    // 0x5030cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5030ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5030d0:
    // 0x5030d0: 0xc0aeaa8  jal         func_2BAAA0
label_5030d4:
    if (ctx->pc == 0x5030D4u) {
        ctx->pc = 0x5030D4u;
            // 0x5030d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5030D8u;
        goto label_5030d8;
    }
    ctx->pc = 0x5030D0u;
    SET_GPR_U32(ctx, 31, 0x5030D8u);
    ctx->pc = 0x5030D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5030D0u;
            // 0x5030d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030D8u; }
        if (ctx->pc != 0x5030D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030D8u; }
        if (ctx->pc != 0x5030D8u) { return; }
    }
    ctx->pc = 0x5030D8u;
label_5030d8:
    // 0x5030d8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5030d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5030dc:
    // 0x5030dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5030dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5030e0:
    // 0x5030e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5030e4:
    if (ctx->pc == 0x5030E4u) {
        ctx->pc = 0x5030E4u;
            // 0x5030e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5030E8u;
        goto label_5030e8;
    }
    ctx->pc = 0x5030E0u;
    {
        const bool branch_taken_0x5030e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5030e0) {
            ctx->pc = 0x5030E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5030E0u;
            // 0x5030e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5030F4u;
            goto label_5030f4;
        }
    }
    ctx->pc = 0x5030E8u;
label_5030e8:
    // 0x5030e8: 0xc0400a8  jal         func_1002A0
label_5030ec:
    if (ctx->pc == 0x5030ECu) {
        ctx->pc = 0x5030ECu;
            // 0x5030ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5030F0u;
        goto label_5030f0;
    }
    ctx->pc = 0x5030E8u;
    SET_GPR_U32(ctx, 31, 0x5030F0u);
    ctx->pc = 0x5030ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5030E8u;
            // 0x5030ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030F0u; }
        if (ctx->pc != 0x5030F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5030F0u; }
        if (ctx->pc != 0x5030F0u) { return; }
    }
    ctx->pc = 0x5030F0u;
label_5030f0:
    // 0x5030f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5030f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5030f4:
    // 0x5030f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5030f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5030f8:
    // 0x5030f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5030f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5030fc:
    // 0x5030fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5030fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503100:
    // 0x503100: 0x3e00008  jr          $ra
label_503104:
    if (ctx->pc == 0x503104u) {
        ctx->pc = 0x503104u;
            // 0x503104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x503108u;
        goto label_503108;
    }
    ctx->pc = 0x503100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503100u;
            // 0x503104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503108u;
label_503108:
    // 0x503108: 0x0  nop
    ctx->pc = 0x503108u;
    // NOP
label_50310c:
    // 0x50310c: 0x0  nop
    ctx->pc = 0x50310cu;
    // NOP
}
