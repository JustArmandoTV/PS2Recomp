#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435E10
// Address: 0x435e10 - 0x436230
void sub_00435E10_0x435e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435E10_0x435e10");
#endif

    switch (ctx->pc) {
        case 0x435e10u: goto label_435e10;
        case 0x435e14u: goto label_435e14;
        case 0x435e18u: goto label_435e18;
        case 0x435e1cu: goto label_435e1c;
        case 0x435e20u: goto label_435e20;
        case 0x435e24u: goto label_435e24;
        case 0x435e28u: goto label_435e28;
        case 0x435e2cu: goto label_435e2c;
        case 0x435e30u: goto label_435e30;
        case 0x435e34u: goto label_435e34;
        case 0x435e38u: goto label_435e38;
        case 0x435e3cu: goto label_435e3c;
        case 0x435e40u: goto label_435e40;
        case 0x435e44u: goto label_435e44;
        case 0x435e48u: goto label_435e48;
        case 0x435e4cu: goto label_435e4c;
        case 0x435e50u: goto label_435e50;
        case 0x435e54u: goto label_435e54;
        case 0x435e58u: goto label_435e58;
        case 0x435e5cu: goto label_435e5c;
        case 0x435e60u: goto label_435e60;
        case 0x435e64u: goto label_435e64;
        case 0x435e68u: goto label_435e68;
        case 0x435e6cu: goto label_435e6c;
        case 0x435e70u: goto label_435e70;
        case 0x435e74u: goto label_435e74;
        case 0x435e78u: goto label_435e78;
        case 0x435e7cu: goto label_435e7c;
        case 0x435e80u: goto label_435e80;
        case 0x435e84u: goto label_435e84;
        case 0x435e88u: goto label_435e88;
        case 0x435e8cu: goto label_435e8c;
        case 0x435e90u: goto label_435e90;
        case 0x435e94u: goto label_435e94;
        case 0x435e98u: goto label_435e98;
        case 0x435e9cu: goto label_435e9c;
        case 0x435ea0u: goto label_435ea0;
        case 0x435ea4u: goto label_435ea4;
        case 0x435ea8u: goto label_435ea8;
        case 0x435eacu: goto label_435eac;
        case 0x435eb0u: goto label_435eb0;
        case 0x435eb4u: goto label_435eb4;
        case 0x435eb8u: goto label_435eb8;
        case 0x435ebcu: goto label_435ebc;
        case 0x435ec0u: goto label_435ec0;
        case 0x435ec4u: goto label_435ec4;
        case 0x435ec8u: goto label_435ec8;
        case 0x435eccu: goto label_435ecc;
        case 0x435ed0u: goto label_435ed0;
        case 0x435ed4u: goto label_435ed4;
        case 0x435ed8u: goto label_435ed8;
        case 0x435edcu: goto label_435edc;
        case 0x435ee0u: goto label_435ee0;
        case 0x435ee4u: goto label_435ee4;
        case 0x435ee8u: goto label_435ee8;
        case 0x435eecu: goto label_435eec;
        case 0x435ef0u: goto label_435ef0;
        case 0x435ef4u: goto label_435ef4;
        case 0x435ef8u: goto label_435ef8;
        case 0x435efcu: goto label_435efc;
        case 0x435f00u: goto label_435f00;
        case 0x435f04u: goto label_435f04;
        case 0x435f08u: goto label_435f08;
        case 0x435f0cu: goto label_435f0c;
        case 0x435f10u: goto label_435f10;
        case 0x435f14u: goto label_435f14;
        case 0x435f18u: goto label_435f18;
        case 0x435f1cu: goto label_435f1c;
        case 0x435f20u: goto label_435f20;
        case 0x435f24u: goto label_435f24;
        case 0x435f28u: goto label_435f28;
        case 0x435f2cu: goto label_435f2c;
        case 0x435f30u: goto label_435f30;
        case 0x435f34u: goto label_435f34;
        case 0x435f38u: goto label_435f38;
        case 0x435f3cu: goto label_435f3c;
        case 0x435f40u: goto label_435f40;
        case 0x435f44u: goto label_435f44;
        case 0x435f48u: goto label_435f48;
        case 0x435f4cu: goto label_435f4c;
        case 0x435f50u: goto label_435f50;
        case 0x435f54u: goto label_435f54;
        case 0x435f58u: goto label_435f58;
        case 0x435f5cu: goto label_435f5c;
        case 0x435f60u: goto label_435f60;
        case 0x435f64u: goto label_435f64;
        case 0x435f68u: goto label_435f68;
        case 0x435f6cu: goto label_435f6c;
        case 0x435f70u: goto label_435f70;
        case 0x435f74u: goto label_435f74;
        case 0x435f78u: goto label_435f78;
        case 0x435f7cu: goto label_435f7c;
        case 0x435f80u: goto label_435f80;
        case 0x435f84u: goto label_435f84;
        case 0x435f88u: goto label_435f88;
        case 0x435f8cu: goto label_435f8c;
        case 0x435f90u: goto label_435f90;
        case 0x435f94u: goto label_435f94;
        case 0x435f98u: goto label_435f98;
        case 0x435f9cu: goto label_435f9c;
        case 0x435fa0u: goto label_435fa0;
        case 0x435fa4u: goto label_435fa4;
        case 0x435fa8u: goto label_435fa8;
        case 0x435facu: goto label_435fac;
        case 0x435fb0u: goto label_435fb0;
        case 0x435fb4u: goto label_435fb4;
        case 0x435fb8u: goto label_435fb8;
        case 0x435fbcu: goto label_435fbc;
        case 0x435fc0u: goto label_435fc0;
        case 0x435fc4u: goto label_435fc4;
        case 0x435fc8u: goto label_435fc8;
        case 0x435fccu: goto label_435fcc;
        case 0x435fd0u: goto label_435fd0;
        case 0x435fd4u: goto label_435fd4;
        case 0x435fd8u: goto label_435fd8;
        case 0x435fdcu: goto label_435fdc;
        case 0x435fe0u: goto label_435fe0;
        case 0x435fe4u: goto label_435fe4;
        case 0x435fe8u: goto label_435fe8;
        case 0x435fecu: goto label_435fec;
        case 0x435ff0u: goto label_435ff0;
        case 0x435ff4u: goto label_435ff4;
        case 0x435ff8u: goto label_435ff8;
        case 0x435ffcu: goto label_435ffc;
        case 0x436000u: goto label_436000;
        case 0x436004u: goto label_436004;
        case 0x436008u: goto label_436008;
        case 0x43600cu: goto label_43600c;
        case 0x436010u: goto label_436010;
        case 0x436014u: goto label_436014;
        case 0x436018u: goto label_436018;
        case 0x43601cu: goto label_43601c;
        case 0x436020u: goto label_436020;
        case 0x436024u: goto label_436024;
        case 0x436028u: goto label_436028;
        case 0x43602cu: goto label_43602c;
        case 0x436030u: goto label_436030;
        case 0x436034u: goto label_436034;
        case 0x436038u: goto label_436038;
        case 0x43603cu: goto label_43603c;
        case 0x436040u: goto label_436040;
        case 0x436044u: goto label_436044;
        case 0x436048u: goto label_436048;
        case 0x43604cu: goto label_43604c;
        case 0x436050u: goto label_436050;
        case 0x436054u: goto label_436054;
        case 0x436058u: goto label_436058;
        case 0x43605cu: goto label_43605c;
        case 0x436060u: goto label_436060;
        case 0x436064u: goto label_436064;
        case 0x436068u: goto label_436068;
        case 0x43606cu: goto label_43606c;
        case 0x436070u: goto label_436070;
        case 0x436074u: goto label_436074;
        case 0x436078u: goto label_436078;
        case 0x43607cu: goto label_43607c;
        case 0x436080u: goto label_436080;
        case 0x436084u: goto label_436084;
        case 0x436088u: goto label_436088;
        case 0x43608cu: goto label_43608c;
        case 0x436090u: goto label_436090;
        case 0x436094u: goto label_436094;
        case 0x436098u: goto label_436098;
        case 0x43609cu: goto label_43609c;
        case 0x4360a0u: goto label_4360a0;
        case 0x4360a4u: goto label_4360a4;
        case 0x4360a8u: goto label_4360a8;
        case 0x4360acu: goto label_4360ac;
        case 0x4360b0u: goto label_4360b0;
        case 0x4360b4u: goto label_4360b4;
        case 0x4360b8u: goto label_4360b8;
        case 0x4360bcu: goto label_4360bc;
        case 0x4360c0u: goto label_4360c0;
        case 0x4360c4u: goto label_4360c4;
        case 0x4360c8u: goto label_4360c8;
        case 0x4360ccu: goto label_4360cc;
        case 0x4360d0u: goto label_4360d0;
        case 0x4360d4u: goto label_4360d4;
        case 0x4360d8u: goto label_4360d8;
        case 0x4360dcu: goto label_4360dc;
        case 0x4360e0u: goto label_4360e0;
        case 0x4360e4u: goto label_4360e4;
        case 0x4360e8u: goto label_4360e8;
        case 0x4360ecu: goto label_4360ec;
        case 0x4360f0u: goto label_4360f0;
        case 0x4360f4u: goto label_4360f4;
        case 0x4360f8u: goto label_4360f8;
        case 0x4360fcu: goto label_4360fc;
        case 0x436100u: goto label_436100;
        case 0x436104u: goto label_436104;
        case 0x436108u: goto label_436108;
        case 0x43610cu: goto label_43610c;
        case 0x436110u: goto label_436110;
        case 0x436114u: goto label_436114;
        case 0x436118u: goto label_436118;
        case 0x43611cu: goto label_43611c;
        case 0x436120u: goto label_436120;
        case 0x436124u: goto label_436124;
        case 0x436128u: goto label_436128;
        case 0x43612cu: goto label_43612c;
        case 0x436130u: goto label_436130;
        case 0x436134u: goto label_436134;
        case 0x436138u: goto label_436138;
        case 0x43613cu: goto label_43613c;
        case 0x436140u: goto label_436140;
        case 0x436144u: goto label_436144;
        case 0x436148u: goto label_436148;
        case 0x43614cu: goto label_43614c;
        case 0x436150u: goto label_436150;
        case 0x436154u: goto label_436154;
        case 0x436158u: goto label_436158;
        case 0x43615cu: goto label_43615c;
        case 0x436160u: goto label_436160;
        case 0x436164u: goto label_436164;
        case 0x436168u: goto label_436168;
        case 0x43616cu: goto label_43616c;
        case 0x436170u: goto label_436170;
        case 0x436174u: goto label_436174;
        case 0x436178u: goto label_436178;
        case 0x43617cu: goto label_43617c;
        case 0x436180u: goto label_436180;
        case 0x436184u: goto label_436184;
        case 0x436188u: goto label_436188;
        case 0x43618cu: goto label_43618c;
        case 0x436190u: goto label_436190;
        case 0x436194u: goto label_436194;
        case 0x436198u: goto label_436198;
        case 0x43619cu: goto label_43619c;
        case 0x4361a0u: goto label_4361a0;
        case 0x4361a4u: goto label_4361a4;
        case 0x4361a8u: goto label_4361a8;
        case 0x4361acu: goto label_4361ac;
        case 0x4361b0u: goto label_4361b0;
        case 0x4361b4u: goto label_4361b4;
        case 0x4361b8u: goto label_4361b8;
        case 0x4361bcu: goto label_4361bc;
        case 0x4361c0u: goto label_4361c0;
        case 0x4361c4u: goto label_4361c4;
        case 0x4361c8u: goto label_4361c8;
        case 0x4361ccu: goto label_4361cc;
        case 0x4361d0u: goto label_4361d0;
        case 0x4361d4u: goto label_4361d4;
        case 0x4361d8u: goto label_4361d8;
        case 0x4361dcu: goto label_4361dc;
        case 0x4361e0u: goto label_4361e0;
        case 0x4361e4u: goto label_4361e4;
        case 0x4361e8u: goto label_4361e8;
        case 0x4361ecu: goto label_4361ec;
        case 0x4361f0u: goto label_4361f0;
        case 0x4361f4u: goto label_4361f4;
        case 0x4361f8u: goto label_4361f8;
        case 0x4361fcu: goto label_4361fc;
        case 0x436200u: goto label_436200;
        case 0x436204u: goto label_436204;
        case 0x436208u: goto label_436208;
        case 0x43620cu: goto label_43620c;
        case 0x436210u: goto label_436210;
        case 0x436214u: goto label_436214;
        case 0x436218u: goto label_436218;
        case 0x43621cu: goto label_43621c;
        case 0x436220u: goto label_436220;
        case 0x436224u: goto label_436224;
        case 0x436228u: goto label_436228;
        case 0x43622cu: goto label_43622c;
        default: break;
    }

    ctx->pc = 0x435e10u;

label_435e10:
    // 0x435e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x435e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_435e14:
    // 0x435e14: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x435e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_435e18:
    // 0x435e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x435e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_435e1c:
    // 0x435e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x435e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_435e20:
    // 0x435e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x435e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_435e24:
    // 0x435e24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x435e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435e28:
    // 0x435e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_435e2c:
    // 0x435e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435e30:
    // 0x435e30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x435e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_435e34:
    // 0x435e34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x435e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_435e38:
    // 0x435e38: 0xc10ca68  jal         func_4329A0
label_435e3c:
    if (ctx->pc == 0x435E3Cu) {
        ctx->pc = 0x435E3Cu;
            // 0x435e3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x435E40u;
        goto label_435e40;
    }
    ctx->pc = 0x435E38u;
    SET_GPR_U32(ctx, 31, 0x435E40u);
    ctx->pc = 0x435E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435E38u;
            // 0x435e3c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435E40u; }
        if (ctx->pc != 0x435E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435E40u; }
        if (ctx->pc != 0x435E40u) { return; }
    }
    ctx->pc = 0x435E40u;
label_435e40:
    // 0x435e40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x435e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_435e44:
    // 0x435e44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x435e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_435e48:
    // 0x435e48: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x435e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_435e4c:
    // 0x435e4c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x435e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_435e50:
    // 0x435e50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x435e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_435e54:
    // 0x435e54: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x435e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_435e58:
    // 0x435e58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x435e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_435e5c:
    // 0x435e5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x435e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_435e60:
    // 0x435e60: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x435e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_435e64:
    // 0x435e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x435e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_435e68:
    // 0x435e68: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x435e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_435e6c:
    // 0x435e6c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x435e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_435e70:
    // 0x435e70: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x435e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_435e74:
    // 0x435e74: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x435e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_435e78:
    // 0x435e78: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x435e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_435e7c:
    // 0x435e7c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x435e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_435e80:
    // 0x435e80: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x435e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_435e84:
    // 0x435e84: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x435e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_435e88:
    // 0x435e88: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x435e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_435e8c:
    // 0x435e8c: 0xc0582cc  jal         func_160B30
label_435e90:
    if (ctx->pc == 0x435E90u) {
        ctx->pc = 0x435E90u;
            // 0x435e90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x435E94u;
        goto label_435e94;
    }
    ctx->pc = 0x435E8Cu;
    SET_GPR_U32(ctx, 31, 0x435E94u);
    ctx->pc = 0x435E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435E8Cu;
            // 0x435e90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435E94u; }
        if (ctx->pc != 0x435E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435E94u; }
        if (ctx->pc != 0x435E94u) { return; }
    }
    ctx->pc = 0x435E94u;
label_435e94:
    // 0x435e94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x435e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_435e98:
    // 0x435e98: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x435e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_435e9c:
    // 0x435e9c: 0x2463cb98  addiu       $v1, $v1, -0x3468
    ctx->pc = 0x435e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953880));
label_435ea0:
    // 0x435ea0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x435ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_435ea4:
    // 0x435ea4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x435ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_435ea8:
    // 0x435ea8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x435ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_435eac:
    // 0x435eac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x435eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_435eb0:
    // 0x435eb0: 0xac440d10  sw          $a0, 0xD10($v0)
    ctx->pc = 0x435eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3344), GPR_U32(ctx, 4));
label_435eb4:
    // 0x435eb4: 0x2463cbb0  addiu       $v1, $v1, -0x3450
    ctx->pc = 0x435eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953904));
label_435eb8:
    // 0x435eb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_435ebc:
    // 0x435ebc: 0x2442cbe8  addiu       $v0, $v0, -0x3418
    ctx->pc = 0x435ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953960));
label_435ec0:
    // 0x435ec0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x435ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_435ec4:
    // 0x435ec4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x435ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_435ec8:
    // 0x435ec8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x435ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_435ecc:
    // 0x435ecc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x435eccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_435ed0:
    // 0x435ed0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x435ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_435ed4:
    // 0x435ed4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x435ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_435ed8:
    // 0x435ed8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x435ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_435edc:
    // 0x435edc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x435edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_435ee0:
    // 0x435ee0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x435ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_435ee4:
    // 0x435ee4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x435ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_435ee8:
    // 0x435ee8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x435ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_435eec:
    // 0x435eec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x435eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_435ef0:
    // 0x435ef0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x435ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_435ef4:
    // 0x435ef4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_435ef8:
    if (ctx->pc == 0x435EF8u) {
        ctx->pc = 0x435EFCu;
        goto label_435efc;
    }
    ctx->pc = 0x435EF4u;
    {
        const bool branch_taken_0x435ef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x435ef4) {
            ctx->pc = 0x435F90u;
            goto label_435f90;
        }
    }
    ctx->pc = 0x435EFCu;
label_435efc:
    // 0x435efc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x435efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_435f00:
    // 0x435f00: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x435f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_435f04:
    // 0x435f04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x435f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_435f08:
    // 0x435f08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x435f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_435f0c:
    // 0x435f0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x435f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_435f10:
    // 0x435f10: 0xc040138  jal         func_1004E0
label_435f14:
    if (ctx->pc == 0x435F14u) {
        ctx->pc = 0x435F14u;
            // 0x435f14: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x435F18u;
        goto label_435f18;
    }
    ctx->pc = 0x435F10u;
    SET_GPR_U32(ctx, 31, 0x435F18u);
    ctx->pc = 0x435F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435F10u;
            // 0x435f14: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F18u; }
        if (ctx->pc != 0x435F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F18u; }
        if (ctx->pc != 0x435F18u) { return; }
    }
    ctx->pc = 0x435F18u;
label_435f18:
    // 0x435f18: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x435f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_435f1c:
    // 0x435f1c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x435f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_435f20:
    // 0x435f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_435f24:
    // 0x435f24: 0x24a56f80  addiu       $a1, $a1, 0x6F80
    ctx->pc = 0x435f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
label_435f28:
    // 0x435f28: 0x24c65560  addiu       $a2, $a2, 0x5560
    ctx->pc = 0x435f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21856));
label_435f2c:
    // 0x435f2c: 0x24070130  addiu       $a3, $zero, 0x130
    ctx->pc = 0x435f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_435f30:
    // 0x435f30: 0xc040840  jal         func_102100
label_435f34:
    if (ctx->pc == 0x435F34u) {
        ctx->pc = 0x435F34u;
            // 0x435f34: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435F38u;
        goto label_435f38;
    }
    ctx->pc = 0x435F30u;
    SET_GPR_U32(ctx, 31, 0x435F38u);
    ctx->pc = 0x435F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435F30u;
            // 0x435f34: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F38u; }
        if (ctx->pc != 0x435F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F38u; }
        if (ctx->pc != 0x435F38u) { return; }
    }
    ctx->pc = 0x435F38u;
label_435f38:
    // 0x435f38: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x435f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_435f3c:
    // 0x435f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x435f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_435f40:
    // 0x435f40: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x435f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_435f44:
    // 0x435f44: 0xc0788fc  jal         func_1E23F0
label_435f48:
    if (ctx->pc == 0x435F48u) {
        ctx->pc = 0x435F48u;
            // 0x435f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435F4Cu;
        goto label_435f4c;
    }
    ctx->pc = 0x435F44u;
    SET_GPR_U32(ctx, 31, 0x435F4Cu);
    ctx->pc = 0x435F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435F44u;
            // 0x435f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F4Cu; }
        if (ctx->pc != 0x435F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F4Cu; }
        if (ctx->pc != 0x435F4Cu) { return; }
    }
    ctx->pc = 0x435F4Cu;
label_435f4c:
    // 0x435f4c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x435f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_435f50:
    // 0x435f50: 0xc0788fc  jal         func_1E23F0
label_435f54:
    if (ctx->pc == 0x435F54u) {
        ctx->pc = 0x435F54u;
            // 0x435f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435F58u;
        goto label_435f58;
    }
    ctx->pc = 0x435F50u;
    SET_GPR_U32(ctx, 31, 0x435F58u);
    ctx->pc = 0x435F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435F50u;
            // 0x435f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F58u; }
        if (ctx->pc != 0x435F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F58u; }
        if (ctx->pc != 0x435F58u) { return; }
    }
    ctx->pc = 0x435F58u;
label_435f58:
    // 0x435f58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x435f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435f5c:
    // 0x435f5c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x435f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_435f60:
    // 0x435f60: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x435f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_435f64:
    // 0x435f64: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x435f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_435f68:
    // 0x435f68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x435f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_435f6c:
    // 0x435f6c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x435f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_435f70:
    // 0x435f70: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x435f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_435f74:
    // 0x435f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x435f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_435f78:
    // 0x435f78: 0xc0a997c  jal         func_2A65F0
label_435f7c:
    if (ctx->pc == 0x435F7Cu) {
        ctx->pc = 0x435F7Cu;
            // 0x435f7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x435F80u;
        goto label_435f80;
    }
    ctx->pc = 0x435F78u;
    SET_GPR_U32(ctx, 31, 0x435F80u);
    ctx->pc = 0x435F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435F78u;
            // 0x435f7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F80u; }
        if (ctx->pc != 0x435F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435F80u; }
        if (ctx->pc != 0x435F80u) { return; }
    }
    ctx->pc = 0x435F80u;
label_435f80:
    // 0x435f80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x435f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_435f84:
    // 0x435f84: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x435f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_435f88:
    // 0x435f88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_435f8c:
    if (ctx->pc == 0x435F8Cu) {
        ctx->pc = 0x435F8Cu;
            // 0x435f8c: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->pc = 0x435F90u;
        goto label_435f90;
    }
    ctx->pc = 0x435F88u;
    {
        const bool branch_taken_0x435f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435F88u;
            // 0x435f8c: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435f88) {
            ctx->pc = 0x435F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435f5c;
        }
    }
    ctx->pc = 0x435F90u;
label_435f90:
    // 0x435f90: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x435f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_435f94:
    // 0x435f94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x435f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_435f98:
    // 0x435f98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x435f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_435f9c:
    // 0x435f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x435f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_435fa0:
    // 0x435fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435fa4:
    // 0x435fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435fa8:
    // 0x435fa8: 0x3e00008  jr          $ra
label_435fac:
    if (ctx->pc == 0x435FACu) {
        ctx->pc = 0x435FACu;
            // 0x435fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x435FB0u;
        goto label_435fb0;
    }
    ctx->pc = 0x435FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435FA8u;
            // 0x435fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435FB0u;
label_435fb0:
    // 0x435fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x435fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_435fb4:
    // 0x435fb4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x435fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_435fb8:
    // 0x435fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_435fbc:
    // 0x435fbc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x435fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_435fc0:
    // 0x435fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435fc4:
    // 0x435fc4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x435fc4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_435fc8:
    // 0x435fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x435fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_435fcc:
    // 0x435fcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x435fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_435fd0:
    // 0x435fd0: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x435fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_435fd4:
    // 0x435fd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x435fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_435fd8:
    // 0x435fd8: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x435fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_435fdc:
    // 0x435fdc: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x435fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_435fe0:
    // 0x435fe0: 0xc0bafb8  jal         func_2EBEE0
label_435fe4:
    if (ctx->pc == 0x435FE4u) {
        ctx->pc = 0x435FE4u;
            // 0x435fe4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x435FE8u;
        goto label_435fe8;
    }
    ctx->pc = 0x435FE0u;
    SET_GPR_U32(ctx, 31, 0x435FE8u);
    ctx->pc = 0x435FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435FE0u;
            // 0x435fe4: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435FE8u; }
        if (ctx->pc != 0x435FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435FE8u; }
        if (ctx->pc != 0x435FE8u) { return; }
    }
    ctx->pc = 0x435FE8u;
label_435fe8:
    // 0x435fe8: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x435fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_435fec:
    // 0x435fec: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x435fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_435ff0:
    // 0x435ff0: 0xc122d2c  jal         func_48B4B0
label_435ff4:
    if (ctx->pc == 0x435FF4u) {
        ctx->pc = 0x435FF4u;
            // 0x435ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x435FF8u;
        goto label_435ff8;
    }
    ctx->pc = 0x435FF0u;
    SET_GPR_U32(ctx, 31, 0x435FF8u);
    ctx->pc = 0x435FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435FF0u;
            // 0x435ff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435FF8u; }
        if (ctx->pc != 0x435FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435FF8u; }
        if (ctx->pc != 0x435FF8u) { return; }
    }
    ctx->pc = 0x435FF8u;
label_435ff8:
    // 0x435ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_435ffc:
    // 0x435ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_436000:
    // 0x436000: 0x3e00008  jr          $ra
label_436004:
    if (ctx->pc == 0x436004u) {
        ctx->pc = 0x436004u;
            // 0x436004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x436008u;
        goto label_436008;
    }
    ctx->pc = 0x436000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x436004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436000u;
            // 0x436004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436008u;
label_436008:
    // 0x436008: 0x0  nop
    ctx->pc = 0x436008u;
    // NOP
label_43600c:
    // 0x43600c: 0x0  nop
    ctx->pc = 0x43600cu;
    // NOP
label_436010:
    // 0x436010: 0x3e00008  jr          $ra
label_436014:
    if (ctx->pc == 0x436014u) {
        ctx->pc = 0x436018u;
        goto label_436018;
    }
    ctx->pc = 0x436010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436018u;
label_436018:
    // 0x436018: 0x0  nop
    ctx->pc = 0x436018u;
    // NOP
label_43601c:
    // 0x43601c: 0x0  nop
    ctx->pc = 0x43601cu;
    // NOP
label_436020:
    // 0x436020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x436020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_436024:
    // 0x436024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x436024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_436028:
    // 0x436028: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x436028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43602c:
    // 0x43602c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x43602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_436030:
    // 0x436030: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x436030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_436034:
    // 0x436034: 0xc04cbd8  jal         func_132F60
label_436038:
    if (ctx->pc == 0x436038u) {
        ctx->pc = 0x436038u;
            // 0x436038: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x43603Cu;
        goto label_43603c;
    }
    ctx->pc = 0x436034u;
    SET_GPR_U32(ctx, 31, 0x43603Cu);
    ctx->pc = 0x436038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436034u;
            // 0x436038: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43603Cu; }
        if (ctx->pc != 0x43603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43603Cu; }
        if (ctx->pc != 0x43603Cu) { return; }
    }
    ctx->pc = 0x43603Cu;
label_43603c:
    // 0x43603c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x43603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_436040:
    // 0x436040: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x436040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_436044:
    // 0x436044: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x436044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_436048:
    // 0x436048: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x436048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_43604c:
    // 0x43604c: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x43604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_436050:
    // 0x436050: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x436050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_436054:
    // 0x436054: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x436054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_436058:
    // 0x436058: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x436058u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_43605c:
    // 0x43605c: 0xc0bafb8  jal         func_2EBEE0
label_436060:
    if (ctx->pc == 0x436060u) {
        ctx->pc = 0x436060u;
            // 0x436060: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x436064u;
        goto label_436064;
    }
    ctx->pc = 0x43605Cu;
    SET_GPR_U32(ctx, 31, 0x436064u);
    ctx->pc = 0x436060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43605Cu;
            // 0x436060: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436064u; }
        if (ctx->pc != 0x436064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436064u; }
        if (ctx->pc != 0x436064u) { return; }
    }
    ctx->pc = 0x436064u;
label_436064:
    // 0x436064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x436064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_436068:
    // 0x436068: 0x3e00008  jr          $ra
label_43606c:
    if (ctx->pc == 0x43606Cu) {
        ctx->pc = 0x43606Cu;
            // 0x43606c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x436070u;
        goto label_436070;
    }
    ctx->pc = 0x436068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436068u;
            // 0x43606c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x436070u;
label_436070:
    // 0x436070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x436070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_436074:
    // 0x436074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x436074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436078:
    // 0x436078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x436078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43607c:
    // 0x43607c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_436080:
    // 0x436080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436084:
    // 0x436084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x436084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436088:
    // 0x436088: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x436088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_43608c:
    // 0x43608c: 0xc08914c  jal         func_224530
label_436090:
    if (ctx->pc == 0x436090u) {
        ctx->pc = 0x436090u;
            // 0x436090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436094u;
        goto label_436094;
    }
    ctx->pc = 0x43608Cu;
    SET_GPR_U32(ctx, 31, 0x436094u);
    ctx->pc = 0x436090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43608Cu;
            // 0x436090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436094u; }
        if (ctx->pc != 0x436094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436094u; }
        if (ctx->pc != 0x436094u) { return; }
    }
    ctx->pc = 0x436094u;
label_436094:
    // 0x436094: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x436094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_436098:
    // 0x436098: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x436098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_43609c:
    // 0x43609c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x43609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_4360a0:
    // 0x4360a0: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x4360a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_4360a4:
    // 0x4360a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4360a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4360a8:
    // 0x4360a8: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4360a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4360ac:
    // 0x4360ac: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x4360acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4360b0:
    // 0x4360b0: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
label_4360b4:
    if (ctx->pc == 0x4360B4u) {
        ctx->pc = 0x4360B4u;
            // 0x4360b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4360B8u;
        goto label_4360b8;
    }
    ctx->pc = 0x4360B0u;
    {
        const bool branch_taken_0x4360b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4360b0) {
            ctx->pc = 0x4360B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4360B0u;
            // 0x4360b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4360D8u;
            goto label_4360d8;
        }
    }
    ctx->pc = 0x4360B8u;
label_4360b8:
    // 0x4360b8: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x4360b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_4360bc:
    // 0x4360bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x4360bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_4360c0:
    // 0x4360c0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x4360c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_4360c4:
    // 0x4360c4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4360c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4360c8:
    // 0x4360c8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x4360c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_4360cc:
    // 0x4360cc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4360ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4360d0:
    // 0x4360d0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x4360d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_4360d4:
    // 0x4360d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4360d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4360d8:
    // 0x4360d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4360d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4360dc:
    // 0x4360dc: 0x3e00008  jr          $ra
label_4360e0:
    if (ctx->pc == 0x4360E0u) {
        ctx->pc = 0x4360E0u;
            // 0x4360e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4360E4u;
        goto label_4360e4;
    }
    ctx->pc = 0x4360DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4360E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4360DCu;
            // 0x4360e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4360E4u;
label_4360e4:
    // 0x4360e4: 0x0  nop
    ctx->pc = 0x4360e4u;
    // NOP
label_4360e8:
    // 0x4360e8: 0x0  nop
    ctx->pc = 0x4360e8u;
    // NOP
label_4360ec:
    // 0x4360ec: 0x0  nop
    ctx->pc = 0x4360ecu;
    // NOP
label_4360f0:
    // 0x4360f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4360f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4360f4:
    // 0x4360f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4360f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4360f8:
    // 0x4360f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4360f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4360fc:
    // 0x4360fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4360fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_436100:
    // 0x436100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x436100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_436104:
    // 0x436104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x436104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_436108:
    // 0x436108: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x436108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_43610c:
    // 0x43610c: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_436110:
    if (ctx->pc == 0x436110u) {
        ctx->pc = 0x436110u;
            // 0x436110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436114u;
        goto label_436114;
    }
    ctx->pc = 0x43610Cu;
    {
        const bool branch_taken_0x43610c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x436110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43610Cu;
            // 0x436110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43610c) {
            ctx->pc = 0x436198u;
            goto label_436198;
        }
    }
    ctx->pc = 0x436114u;
label_436114:
    // 0x436114: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x436114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_436118:
    // 0x436118: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x436118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_43611c:
    // 0x43611c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x43611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_436120:
    // 0x436120: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_436124:
    if (ctx->pc == 0x436124u) {
        ctx->pc = 0x436124u;
            // 0x436124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436128u;
        goto label_436128;
    }
    ctx->pc = 0x436120u;
    {
        const bool branch_taken_0x436120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x436120) {
            ctx->pc = 0x436124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x436120u;
            // 0x436124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43612Cu;
            goto label_43612c;
        }
    }
    ctx->pc = 0x436128u;
label_436128:
    // 0x436128: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x436128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_43612c:
    // 0x43612c: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_436130:
    if (ctx->pc == 0x436130u) {
        ctx->pc = 0x436130u;
            // 0x436130: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->pc = 0x436134u;
        goto label_436134;
    }
    ctx->pc = 0x43612Cu;
    {
        const bool branch_taken_0x43612c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43612c) {
            ctx->pc = 0x436130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43612Cu;
            // 0x436130: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43618Cu;
            goto label_43618c;
        }
    }
    ctx->pc = 0x436134u;
label_436134:
    // 0x436134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x436134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_436138:
    // 0x436138: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x436138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_43613c:
    // 0x43613c: 0x320f809  jalr        $t9
label_436140:
    if (ctx->pc == 0x436140u) {
        ctx->pc = 0x436144u;
        goto label_436144;
    }
    ctx->pc = 0x43613Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436144u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x436144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436144u; }
            if (ctx->pc != 0x436144u) { return; }
        }
        }
    }
    ctx->pc = 0x436144u;
label_436144:
    // 0x436144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x436144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_436148:
    // 0x436148: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_43614c:
    if (ctx->pc == 0x43614Cu) {
        ctx->pc = 0x436150u;
        goto label_436150;
    }
    ctx->pc = 0x436148u;
    {
        const bool branch_taken_0x436148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x436148) {
            ctx->pc = 0x436188u;
            goto label_436188;
        }
    }
    ctx->pc = 0x436150u;
label_436150:
    // 0x436150: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x436150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_436154:
    // 0x436154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x436154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_436158:
    // 0x436158: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x436158u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_43615c:
    // 0x43615c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_436160:
    if (ctx->pc == 0x436160u) {
        ctx->pc = 0x436160u;
            // 0x436160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436164u;
        goto label_436164;
    }
    ctx->pc = 0x43615Cu;
    {
        const bool branch_taken_0x43615c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43615c) {
            ctx->pc = 0x436160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43615Cu;
            // 0x436160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43616Cu;
            goto label_43616c;
        }
    }
    ctx->pc = 0x436164u;
label_436164:
    // 0x436164: 0x80820010  lb          $v0, 0x10($a0)
    ctx->pc = 0x436164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_436168:
    // 0x436168: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x436168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_43616c:
    // 0x43616c: 0x8c420200  lw          $v0, 0x200($v0)
    ctx->pc = 0x43616cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
label_436170:
    // 0x436170: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x436170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_436174:
    // 0x436174: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_436178:
    if (ctx->pc == 0x436178u) {
        ctx->pc = 0x43617Cu;
        goto label_43617c;
    }
    ctx->pc = 0x436174u;
    {
        const bool branch_taken_0x436174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x436174) {
            ctx->pc = 0x436188u;
            goto label_436188;
        }
    }
    ctx->pc = 0x43617Cu;
label_43617c:
    // 0x43617c: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x43617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_436180:
    // 0x436180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x436180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_436184:
    // 0x436184: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x436184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_436188:
    // 0x436188: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x436188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_43618c:
    // 0x43618c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x43618cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_436190:
    // 0x436190: 0xc122d2c  jal         func_48B4B0
label_436194:
    if (ctx->pc == 0x436194u) {
        ctx->pc = 0x436194u;
            // 0x436194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x436198u;
        goto label_436198;
    }
    ctx->pc = 0x436190u;
    SET_GPR_U32(ctx, 31, 0x436198u);
    ctx->pc = 0x436194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x436190u;
            // 0x436194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436198u; }
        if (ctx->pc != 0x436198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x436198u; }
        if (ctx->pc != 0x436198u) { return; }
    }
    ctx->pc = 0x436198u;
label_436198:
    // 0x436198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x436198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43619c:
    // 0x43619c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43619cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4361a0:
    // 0x4361a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4361a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4361a4:
    // 0x4361a4: 0x3e00008  jr          $ra
label_4361a8:
    if (ctx->pc == 0x4361A8u) {
        ctx->pc = 0x4361A8u;
            // 0x4361a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4361ACu;
        goto label_4361ac;
    }
    ctx->pc = 0x4361A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4361A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4361A4u;
            // 0x4361a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4361ACu;
label_4361ac:
    // 0x4361ac: 0x0  nop
    ctx->pc = 0x4361acu;
    // NOP
label_4361b0:
    // 0x4361b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4361b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4361b4:
    // 0x4361b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4361b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4361b8:
    // 0x4361b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4361b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4361bc:
    // 0x4361bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4361bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4361c0:
    // 0x4361c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4361c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4361c4:
    // 0x4361c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4361c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4361c8:
    // 0x4361c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4361c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4361cc:
    // 0x4361cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4361ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4361d0:
    // 0x4361d0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4361d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4361d4:
    // 0x4361d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4361d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4361d8:
    // 0x4361d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4361d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4361dc:
    // 0x4361dc: 0xc08914c  jal         func_224530
label_4361e0:
    if (ctx->pc == 0x4361E0u) {
        ctx->pc = 0x4361E0u;
            // 0x4361e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4361E4u;
        goto label_4361e4;
    }
    ctx->pc = 0x4361DCu;
    SET_GPR_U32(ctx, 31, 0x4361E4u);
    ctx->pc = 0x4361E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4361DCu;
            // 0x4361e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4361E4u; }
        if (ctx->pc != 0x4361E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4361E4u; }
        if (ctx->pc != 0x4361E4u) { return; }
    }
    ctx->pc = 0x4361E4u;
label_4361e4:
    // 0x4361e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4361e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4361e8:
    // 0x4361e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4361e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4361ec:
    // 0x4361ec: 0xc0e34b0  jal         func_38D2C0
label_4361f0:
    if (ctx->pc == 0x4361F0u) {
        ctx->pc = 0x4361F0u;
            // 0x4361f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4361F4u;
        goto label_4361f4;
    }
    ctx->pc = 0x4361ECu;
    SET_GPR_U32(ctx, 31, 0x4361F4u);
    ctx->pc = 0x4361F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4361ECu;
            // 0x4361f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4361F4u; }
        if (ctx->pc != 0x4361F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4361F4u; }
        if (ctx->pc != 0x4361F4u) { return; }
    }
    ctx->pc = 0x4361F4u;
label_4361f4:
    // 0x4361f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4361f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4361f8:
    // 0x4361f8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4361f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4361fc:
    // 0x4361fc: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x4361fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
label_436200:
    // 0x436200: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x436200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_436204:
    // 0x436204: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x436204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_436208:
    // 0x436208: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x436208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_43620c:
    // 0x43620c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x43620cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_436210:
    // 0x436210: 0x320f809  jalr        $t9
label_436214:
    if (ctx->pc == 0x436214u) {
        ctx->pc = 0x436214u;
            // 0x436214: 0x240513a9  addiu       $a1, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->pc = 0x436218u;
        goto label_436218;
    }
    ctx->pc = 0x436210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x436218u);
        ctx->pc = 0x436214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436210u;
            // 0x436214: 0x240513a9  addiu       $a1, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x436218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x436218u; }
            if (ctx->pc != 0x436218u) { return; }
        }
        }
    }
    ctx->pc = 0x436218u;
label_436218:
    // 0x436218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x436218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43621c:
    // 0x43621c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43621cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_436220:
    // 0x436220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x436220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_436224:
    // 0x436224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x436224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_436228:
    // 0x436228: 0x3e00008  jr          $ra
label_43622c:
    if (ctx->pc == 0x43622Cu) {
        ctx->pc = 0x43622Cu;
            // 0x43622c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x436230u;
        goto label_fallthrough_0x436228;
    }
    ctx->pc = 0x436228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x436228u;
            // 0x43622c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x436228:
    ctx->pc = 0x436230u;
}
