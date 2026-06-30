#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271E00
// Address: 0x271e00 - 0x2722d0
void sub_00271E00_0x271e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271E00_0x271e00");
#endif

    switch (ctx->pc) {
        case 0x271e00u: goto label_271e00;
        case 0x271e04u: goto label_271e04;
        case 0x271e08u: goto label_271e08;
        case 0x271e0cu: goto label_271e0c;
        case 0x271e10u: goto label_271e10;
        case 0x271e14u: goto label_271e14;
        case 0x271e18u: goto label_271e18;
        case 0x271e1cu: goto label_271e1c;
        case 0x271e20u: goto label_271e20;
        case 0x271e24u: goto label_271e24;
        case 0x271e28u: goto label_271e28;
        case 0x271e2cu: goto label_271e2c;
        case 0x271e30u: goto label_271e30;
        case 0x271e34u: goto label_271e34;
        case 0x271e38u: goto label_271e38;
        case 0x271e3cu: goto label_271e3c;
        case 0x271e40u: goto label_271e40;
        case 0x271e44u: goto label_271e44;
        case 0x271e48u: goto label_271e48;
        case 0x271e4cu: goto label_271e4c;
        case 0x271e50u: goto label_271e50;
        case 0x271e54u: goto label_271e54;
        case 0x271e58u: goto label_271e58;
        case 0x271e5cu: goto label_271e5c;
        case 0x271e60u: goto label_271e60;
        case 0x271e64u: goto label_271e64;
        case 0x271e68u: goto label_271e68;
        case 0x271e6cu: goto label_271e6c;
        case 0x271e70u: goto label_271e70;
        case 0x271e74u: goto label_271e74;
        case 0x271e78u: goto label_271e78;
        case 0x271e7cu: goto label_271e7c;
        case 0x271e80u: goto label_271e80;
        case 0x271e84u: goto label_271e84;
        case 0x271e88u: goto label_271e88;
        case 0x271e8cu: goto label_271e8c;
        case 0x271e90u: goto label_271e90;
        case 0x271e94u: goto label_271e94;
        case 0x271e98u: goto label_271e98;
        case 0x271e9cu: goto label_271e9c;
        case 0x271ea0u: goto label_271ea0;
        case 0x271ea4u: goto label_271ea4;
        case 0x271ea8u: goto label_271ea8;
        case 0x271eacu: goto label_271eac;
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        default: break;
    }

    ctx->pc = 0x271e00u;

label_271e00:
    // 0x271e00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271e04:
    // 0x271e04: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
label_271e08:
    // 0x271e08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x271e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_271e0c:
    // 0x271e0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x271e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_271e10:
    // 0x271e10: 0x2442f330  addiu       $v0, $v0, -0xCD0
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964016));
label_271e14:
    // 0x271e14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x271e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_271e18:
    // 0x271e18: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x271e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_271e1c:
    // 0x271e1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x271e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271e20:
    // 0x271e20: 0x3e00008  jr          $ra
label_271e24:
    if (ctx->pc == 0x271E24u) {
        ctx->pc = 0x271E24u;
            // 0x271e24: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->pc = 0x271E28u;
        goto label_271e28;
    }
    ctx->pc = 0x271E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E20u;
            // 0x271e24: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271E28u;
label_271e28:
    // 0x271e28: 0x0  nop
    ctx->pc = 0x271e28u;
    // NOP
label_271e2c:
    // 0x271e2c: 0x0  nop
    ctx->pc = 0x271e2cu;
    // NOP
label_271e30:
    // 0x271e30: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_271e34:
    // 0x271e34: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x271e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_271e38:
    // 0x271e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x271e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_271e3c:
    // 0x271e3c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x271e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_271e40:
    // 0x271e40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_271e44:
    // 0x271e44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x271e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_271e48:
    // 0x271e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_271e4c:
    // 0x271e4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271e50:
    // 0x271e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_271e54:
    // 0x271e54: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271e58:
    // 0x271e58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_271e5c:
    // 0x271e5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x271e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271e60:
    // 0x271e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_271e64:
    // 0x271e64: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x271e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_271e68:
    // 0x271e68: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271e6c:
    // 0x271e6c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_271e70:
    // 0x271e70: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x271e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_271e74:
    // 0x271e74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x271e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_271e78:
    // 0x271e78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x271e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_271e7c:
    // 0x271e7c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x271e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_271e80:
    // 0x271e80: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_271e84:
    // 0x271e84: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x271e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_271e88:
    // 0x271e88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_271e8c:
    if (ctx->pc == 0x271E8Cu) {
        ctx->pc = 0x271E90u;
        goto label_271e90;
    }
    ctx->pc = 0x271E88u;
    {
        const bool branch_taken_0x271e88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x271e88) {
            ctx->pc = 0x271E98u;
            goto label_271e98;
        }
    }
    ctx->pc = 0x271E90u;
label_271e90:
    // 0x271e90: 0x10000005  b           . + 4 + (0x5 << 2)
label_271e94:
    if (ctx->pc == 0x271E94u) {
        ctx->pc = 0x271E94u;
            // 0x271e94: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x271E98u;
        goto label_271e98;
    }
    ctx->pc = 0x271E90u;
    {
        const bool branch_taken_0x271e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E90u;
            // 0x271e94: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e90) {
            ctx->pc = 0x271EA8u;
            goto label_271ea8;
        }
    }
    ctx->pc = 0x271E98u;
label_271e98:
    // 0x271e98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271e9c:
    // 0x271e9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x271e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_271ea0:
    // 0x271ea0: 0x320f809  jalr        $t9
label_271ea4:
    if (ctx->pc == 0x271EA4u) {
        ctx->pc = 0x271EA8u;
        goto label_271ea8;
    }
    ctx->pc = 0x271EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271EA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x271EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271EA8u; }
            if (ctx->pc != 0x271EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x271EA8u;
label_271ea8:
    // 0x271ea8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x271ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_271eac:
    // 0x271eac: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x271eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_271eb0:
    // 0x271eb0: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_271eb4:
    if (ctx->pc == 0x271EB4u) {
        ctx->pc = 0x271EB4u;
            // 0x271eb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271EB8u;
        goto label_271eb8;
    }
    ctx->pc = 0x271EB0u;
    {
        const bool branch_taken_0x271eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EB0u;
            // 0x271eb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271eb0) {
            ctx->pc = 0x271FB8u;
            goto label_271fb8;
        }
    }
    ctx->pc = 0x271EB8u;
label_271eb8:
    // 0x271eb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x271eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271ebc:
    // 0x271ebc: 0x0  nop
    ctx->pc = 0x271ebcu;
    // NOP
label_271ec0:
    // 0x271ec0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x271ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_271ec4:
    // 0x271ec4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x271ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_271ec8:
    // 0x271ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x271ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271ecc:
    // 0x271ecc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x271eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_271ed0:
    // 0x271ed0: 0x320f809  jalr        $t9
label_271ed4:
    if (ctx->pc == 0x271ED4u) {
        ctx->pc = 0x271ED4u;
            // 0x271ed4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x271ED8u;
        goto label_271ed8;
    }
    ctx->pc = 0x271ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271ED8u);
        ctx->pc = 0x271ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ED0u;
            // 0x271ed4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x271ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271ED8u; }
            if (ctx->pc != 0x271ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x271ED8u;
label_271ed8:
    // 0x271ed8: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x271ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_271edc:
    // 0x271edc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x271edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_271ee0:
    // 0x271ee0: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x271ee0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_271ee4:
    // 0x271ee4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x271ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_271ee8:
    // 0x271ee8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x271ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_271eec:
    // 0x271eec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x271eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_271ef0:
    // 0x271ef0: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x271ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
label_271ef4:
    // 0x271ef4: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x271ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_271ef8:
    // 0x271ef8: 0x84440006  lh          $a0, 0x6($v0)
    ctx->pc = 0x271ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_271efc:
    // 0x271efc: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x271efcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
label_271f00:
    // 0x271f00: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_271f04:
    // 0x271f04: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x271f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_271f08:
    // 0x271f08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x271f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f0c:
    // 0x271f0c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x271f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_271f10:
    // 0x271f10: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x271f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f14:
    // 0x271f14: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x271f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_271f18:
    // 0x271f18: 0x94440014  lhu         $a0, 0x14($v0)
    ctx->pc = 0x271f18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_271f1c:
    // 0x271f1c: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x271f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
label_271f20:
    // 0x271f20: 0x90440016  lbu         $a0, 0x16($v0)
    ctx->pc = 0x271f20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
label_271f24:
    // 0x271f24: 0xa0a40016  sb          $a0, 0x16($a1)
    ctx->pc = 0x271f24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 4));
label_271f28:
    // 0x271f28: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x271f28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_271f2c:
    // 0x271f2c: 0xa0a40017  sb          $a0, 0x17($a1)
    ctx->pc = 0x271f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 4));
label_271f30:
    // 0x271f30: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x271f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f34:
    // 0x271f34: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x271f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_271f38:
    // 0x271f38: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x271f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f3c:
    // 0x271f3c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x271f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_271f40:
    // 0x271f40: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x271f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f44:
    // 0x271f44: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x271f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_271f48:
    // 0x271f48: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x271f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f4c:
    // 0x271f4c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x271f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_271f50:
    // 0x271f50: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x271f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f54:
    // 0x271f54: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x271f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
label_271f58:
    // 0x271f58: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x271f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f5c:
    // 0x271f5c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x271f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_271f60:
    // 0x271f60: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x271f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f64:
    // 0x271f64: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x271f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_271f68:
    // 0x271f68: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x271f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f6c:
    // 0x271f6c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x271f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_271f70:
    // 0x271f70: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x271f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f74:
    // 0x271f74: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x271f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_271f78:
    // 0x271f78: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x271f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f7c:
    // 0x271f7c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x271f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_271f80:
    // 0x271f80: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x271f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f84:
    // 0x271f84: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x271f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_271f88:
    // 0x271f88: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x271f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f8c:
    // 0x271f8c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x271f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_271f90:
    // 0x271f90: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x271f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f94:
    // 0x271f94: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x271f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_271f98:
    // 0x271f98: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x271f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f9c:
    // 0x271f9c: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x271f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_271fa0:
    // 0x271fa0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x271fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271fa4:
    // 0x271fa4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x271fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_271fa8:
    // 0x271fa8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x271fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271fac:
    // 0x271fac: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_271fb0:
    if (ctx->pc == 0x271FB0u) {
        ctx->pc = 0x271FB0u;
            // 0x271fb0: 0xe4a0005c  swc1        $f0, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->pc = 0x271FB4u;
        goto label_271fb4;
    }
    ctx->pc = 0x271FACu;
    {
        const bool branch_taken_0x271fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271FACu;
            // 0x271fb0: 0xe4a0005c  swc1        $f0, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fac) {
            ctx->pc = 0x271EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271ec0;
        }
    }
    ctx->pc = 0x271FB4u;
label_271fb4:
    // 0x271fb4: 0x0  nop
    ctx->pc = 0x271fb4u;
    // NOP
label_271fb8:
    // 0x271fb8: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x271fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_271fbc:
    // 0x271fbc: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x271fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_271fc0:
    // 0x271fc0: 0xc08318c  jal         func_20C630
label_271fc4:
    if (ctx->pc == 0x271FC4u) {
        ctx->pc = 0x271FC4u;
            // 0x271fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x271FC8u;
        goto label_271fc8;
    }
    ctx->pc = 0x271FC0u;
    SET_GPR_U32(ctx, 31, 0x271FC8u);
    ctx->pc = 0x271FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271FC0u;
            // 0x271fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C630u;
    if (runtime->hasFunction(0x20C630u)) {
        auto targetFn = runtime->lookupFunction(0x20C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FC8u; }
        if (ctx->pc != 0x271FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C630_0x20c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271FC8u; }
        if (ctx->pc != 0x271FC8u) { return; }
    }
    ctx->pc = 0x271FC8u;
label_271fc8:
    // 0x271fc8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_271fcc:
    // 0x271fcc: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x271fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_271fd0:
    // 0x271fd0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_271fd4:
    // 0x271fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271fd8:
    // 0x271fd8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x271fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_271fdc:
    // 0x271fdc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x271fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_271fe0:
    // 0x271fe0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_271fe4:
    if (ctx->pc == 0x271FE4u) {
        ctx->pc = 0x271FE8u;
        goto label_271fe8;
    }
    ctx->pc = 0x271FE0u;
    {
        const bool branch_taken_0x271fe0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x271fe0) {
            ctx->pc = 0x271FF8u;
            goto label_271ff8;
        }
    }
    ctx->pc = 0x271FE8u;
label_271fe8:
    // 0x271fe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x271fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_271fec:
    // 0x271fec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_271ff0:
    // 0x271ff0: 0x320f809  jalr        $t9
label_271ff4:
    if (ctx->pc == 0x271FF4u) {
        ctx->pc = 0x271FF8u;
        goto label_271ff8;
    }
    ctx->pc = 0x271FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x271FF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x271FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x271FF8u; }
            if (ctx->pc != 0x271FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x271FF8u;
label_271ff8:
    // 0x271ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x271ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271ffc:
    // 0x271ffc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x271ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_272000:
    // 0x272000: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x272000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_272004:
    // 0x272004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x272004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_272008:
    // 0x272008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27200c:
    // 0x27200c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27200cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_272010:
    // 0x272010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_272014:
    // 0x272014: 0x3e00008  jr          $ra
label_272018:
    if (ctx->pc == 0x272018u) {
        ctx->pc = 0x272018u;
            // 0x272018: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x27201Cu;
        goto label_27201c;
    }
    ctx->pc = 0x272014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272014u;
            // 0x272018: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27201Cu;
label_27201c:
    // 0x27201c: 0x0  nop
    ctx->pc = 0x27201cu;
    // NOP
label_272020:
    // 0x272020: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_272024:
    // 0x272024: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x272024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_272028:
    // 0x272028: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x272028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_27202c:
    // 0x27202c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_272030:
    // 0x272030: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x272030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_272034:
    // 0x272034: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_272038:
    // 0x272038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x272038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27203c:
    // 0x27203c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27203cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272040:
    // 0x272040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x272040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_272044:
    // 0x272044: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x272044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_272048:
    // 0x272048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x272048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27204c:
    // 0x27204c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27204cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272050:
    // 0x272050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_272054:
    // 0x272054: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x272054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_272058:
    // 0x272058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27205c:
    // 0x27205c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_272060:
    // 0x272060: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_272064:
    // 0x272064: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_272068:
    // 0x272068: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x272068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27206c:
    // 0x27206c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_272070:
    // 0x272070: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x272070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_272074:
    // 0x272074: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x272074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_272078:
    // 0x272078: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x272078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27207c:
    // 0x27207c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_272080:
    if (ctx->pc == 0x272080u) {
        ctx->pc = 0x272080u;
            // 0x272080: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272084u;
        goto label_272084;
    }
    ctx->pc = 0x27207Cu;
    {
        const bool branch_taken_0x27207c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x272080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27207Cu;
            // 0x272080: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27207c) {
            ctx->pc = 0x272090u;
            goto label_272090;
        }
    }
    ctx->pc = 0x272084u;
label_272084:
    // 0x272084: 0x10000006  b           . + 4 + (0x6 << 2)
label_272088:
    if (ctx->pc == 0x272088u) {
        ctx->pc = 0x272088u;
            // 0x272088: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27208Cu;
        goto label_27208c;
    }
    ctx->pc = 0x272084u;
    {
        const bool branch_taken_0x272084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272084u;
            // 0x272088: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272084) {
            ctx->pc = 0x2720A0u;
            goto label_2720a0;
        }
    }
    ctx->pc = 0x27208Cu;
label_27208c:
    // 0x27208c: 0x0  nop
    ctx->pc = 0x27208cu;
    // NOP
label_272090:
    // 0x272090: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272094:
    // 0x272094: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x272094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272098:
    // 0x272098: 0x320f809  jalr        $t9
label_27209c:
    if (ctx->pc == 0x27209Cu) {
        ctx->pc = 0x2720A0u;
        goto label_2720a0;
    }
    ctx->pc = 0x272098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2720A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2720A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2720A0u; }
            if (ctx->pc != 0x2720A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2720A0u;
label_2720a0:
    // 0x2720a0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2720a4:
    // 0x2720a4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2720a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2720a8:
    // 0x2720a8: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x2720a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2720ac:
    // 0x2720ac: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x2720acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
label_2720b0:
    // 0x2720b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2720b4:
    // 0x2720b4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2720b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2720b8:
    // 0x2720b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2720b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2720bc:
    // 0x2720bc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2720c0:
    // 0x2720c0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2720c4:
    // 0x2720c4: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2720c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2720c8:
    // 0x2720c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2720cc:
    if (ctx->pc == 0x2720CCu) {
        ctx->pc = 0x2720D0u;
        goto label_2720d0;
    }
    ctx->pc = 0x2720C8u;
    {
        const bool branch_taken_0x2720c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720c8) {
            ctx->pc = 0x2720D8u;
            goto label_2720d8;
        }
    }
    ctx->pc = 0x2720D0u;
label_2720d0:
    // 0x2720d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2720d4:
    if (ctx->pc == 0x2720D4u) {
        ctx->pc = 0x2720D4u;
            // 0x2720d4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2720D8u;
        goto label_2720d8;
    }
    ctx->pc = 0x2720D0u;
    {
        const bool branch_taken_0x2720d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720D0u;
            // 0x2720d4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720d0) {
            ctx->pc = 0x2720E8u;
            goto label_2720e8;
        }
    }
    ctx->pc = 0x2720D8u;
label_2720d8:
    // 0x2720d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2720d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2720dc:
    // 0x2720dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2720dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2720e0:
    // 0x2720e0: 0x320f809  jalr        $t9
label_2720e4:
    if (ctx->pc == 0x2720E4u) {
        ctx->pc = 0x2720E8u;
        goto label_2720e8;
    }
    ctx->pc = 0x2720E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2720E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2720E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2720E8u; }
            if (ctx->pc != 0x2720E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2720E8u;
label_2720e8:
    // 0x2720e8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2720e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2720ec:
    // 0x2720ec: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x2720ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_2720f0:
    // 0x2720f0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_2720f4:
    if (ctx->pc == 0x2720F4u) {
        ctx->pc = 0x2720F4u;
            // 0x2720f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2720F8u;
        goto label_2720f8;
    }
    ctx->pc = 0x2720F0u;
    {
        const bool branch_taken_0x2720f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2720F0u;
            // 0x2720f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720f0) {
            ctx->pc = 0x272220u;
            goto label_272220;
        }
    }
    ctx->pc = 0x2720F8u;
label_2720f8:
    // 0x2720f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2720f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2720fc:
    // 0x2720fc: 0x0  nop
    ctx->pc = 0x2720fcu;
    // NOP
label_272100:
    // 0x272100: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x272100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_272104:
    // 0x272104: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x272104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_272108:
    // 0x272108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x272108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27210c:
    // 0x27210c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27210cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_272110:
    // 0x272110: 0x320f809  jalr        $t9
label_272114:
    if (ctx->pc == 0x272114u) {
        ctx->pc = 0x272114u;
            // 0x272114: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x272118u;
        goto label_272118;
    }
    ctx->pc = 0x272110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x272118u);
        ctx->pc = 0x272114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272110u;
            // 0x272114: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x272118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x272118u; }
            if (ctx->pc != 0x272118u) { return; }
        }
        }
    }
    ctx->pc = 0x272118u;
label_272118:
    // 0x272118: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x272118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_27211c:
    // 0x27211c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27211cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_272120:
    // 0x272120: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x272120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_272124:
    // 0x272124: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x272124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_272128:
    // 0x272128: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x272128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_27212c:
    // 0x27212c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x27212cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_272130:
    // 0x272130: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_272134:
    // 0x272134: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x272134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_272138:
    // 0x272138: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x272138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27213c:
    // 0x27213c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x27213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_272140:
    // 0x272140: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x272140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272144:
    // 0x272144: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x272144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_272148:
    // 0x272148: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x272148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_27214c:
    // 0x27214c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x27214cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
label_272150:
    // 0x272150: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x272150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
label_272154:
    // 0x272154: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x272154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
label_272158:
    // 0x272158: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x272158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_27215c:
    // 0x27215c: 0xa0830017  sb          $v1, 0x17($a0)
    ctx->pc = 0x27215cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 3));
label_272160:
    // 0x272160: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x272160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272164:
    // 0x272164: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x272164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_272168:
    // 0x272168: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x272168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27216c:
    // 0x27216c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x27216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_272170:
    // 0x272170: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x272170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272174:
    // 0x272174: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x272174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_272178:
    // 0x272178: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x272178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27217c:
    // 0x27217c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x27217cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_272180:
    // 0x272180: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x272180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272184:
    // 0x272184: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x272184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_272188:
    // 0x272188: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x272188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27218c:
    // 0x27218c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x27218cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_272190:
    // 0x272190: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x272190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272194:
    // 0x272194: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x272194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_272198:
    // 0x272198: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x272198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27219c:
    // 0x27219c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x27219cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_2721a0:
    // 0x2721a0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2721a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721a4:
    // 0x2721a4: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2721a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_2721a8:
    // 0x2721a8: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x2721a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721ac:
    // 0x2721ac: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2721acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_2721b0:
    // 0x2721b0: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x2721b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721b4:
    // 0x2721b4: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2721b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_2721b8:
    // 0x2721b8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2721b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721bc:
    // 0x2721bc: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2721bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_2721c0:
    // 0x2721c0: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x2721c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721c4:
    // 0x2721c4: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2721c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_2721c8:
    // 0x2721c8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x2721c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721cc:
    // 0x2721cc: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x2721ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_2721d0:
    // 0x2721d0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x2721d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721d4:
    // 0x2721d4: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2721d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_2721d8:
    // 0x2721d8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x2721d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2721dc:
    // 0x2721dc: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x2721dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_2721e0:
    // 0x2721e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2721e4:
    // 0x2721e4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2721e8:
    if (ctx->pc == 0x2721E8u) {
        ctx->pc = 0x2721ECu;
        goto label_2721ec;
    }
    ctx->pc = 0x2721E4u;
    {
        const bool branch_taken_0x2721e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2721e4) {
            ctx->pc = 0x272208u;
            goto label_272208;
        }
    }
    ctx->pc = 0x2721ECu;
label_2721ec:
    // 0x2721ec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2721ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2721f0:
    // 0x2721f0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2721f4:
    // 0x2721f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2721f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2721f8:
    // 0x2721f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2721f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2721fc:
    // 0x2721fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_272200:
    // 0x272200: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x272200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_272204:
    // 0x272204: 0x0  nop
    ctx->pc = 0x272204u;
    // NOP
label_272208:
    // 0x272208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x272208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27220c:
    // 0x27220c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x27220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_272210:
    // 0x272210: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x272210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_272214:
    // 0x272214: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_272218:
    if (ctx->pc == 0x272218u) {
        ctx->pc = 0x272218u;
            // 0x272218: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x27221Cu;
        goto label_27221c;
    }
    ctx->pc = 0x272214u;
    {
        const bool branch_taken_0x272214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272214u;
            // 0x272218: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272214) {
            ctx->pc = 0x272100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272100;
        }
    }
    ctx->pc = 0x27221Cu;
label_27221c:
    // 0x27221c: 0x0  nop
    ctx->pc = 0x27221cu;
    // NOP
label_272220:
    // 0x272220: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_272224:
    // 0x272224: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_272228:
    if (ctx->pc == 0x272228u) {
        ctx->pc = 0x272228u;
            // 0x272228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27222Cu;
        goto label_27222c;
    }
    ctx->pc = 0x272224u;
    {
        const bool branch_taken_0x272224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272224u;
            // 0x272228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272224) {
            ctx->pc = 0x272230u;
            goto label_272230;
        }
    }
    ctx->pc = 0x27222Cu;
label_27222c:
    // 0x27222c: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x27222cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_272230:
    // 0x272230: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x272230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_272234:
    // 0x272234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272238:
    // 0x272238: 0xc0831ec  jal         func_20C7B0
label_27223c:
    if (ctx->pc == 0x27223Cu) {
        ctx->pc = 0x27223Cu;
            // 0x27223c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x272240u;
        goto label_272240;
    }
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 31, 0x272240u);
    ctx->pc = 0x27223Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272238u;
            // 0x27223c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C7B0u;
    if (runtime->hasFunction(0x20C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x20C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272240u; }
        if (ctx->pc != 0x272240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020C7B0_0x20c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272240u; }
        if (ctx->pc != 0x272240u) { return; }
    }
    ctx->pc = 0x272240u;
label_272240:
    // 0x272240: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x272240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_272244:
    // 0x272244: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_272248:
    // 0x272248: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27224c:
    // 0x27224c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27224cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_272250:
    // 0x272250: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x272250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_272254:
    // 0x272254: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_272258:
    if (ctx->pc == 0x272258u) {
        ctx->pc = 0x27225Cu;
        goto label_27225c;
    }
    ctx->pc = 0x272254u;
    {
        const bool branch_taken_0x272254 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x272254) {
            ctx->pc = 0x272270u;
            goto label_272270;
        }
    }
    ctx->pc = 0x27225Cu;
label_27225c:
    // 0x27225c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272260:
    // 0x272260: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_272264:
    // 0x272264: 0x320f809  jalr        $t9
label_272268:
    if (ctx->pc == 0x272268u) {
        ctx->pc = 0x27226Cu;
        goto label_27226c;
    }
    ctx->pc = 0x272264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27226Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27226Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27226Cu; }
            if (ctx->pc != 0x27226Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27226Cu;
label_27226c:
    // 0x27226c: 0x0  nop
    ctx->pc = 0x27226cu;
    // NOP
label_272270:
    // 0x272270: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x272270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_272274:
    // 0x272274: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_272278:
    // 0x272278: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27227c:
    // 0x27227c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27227cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_272280:
    // 0x272280: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x272280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_272284:
    // 0x272284: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_272288:
    if (ctx->pc == 0x272288u) {
        ctx->pc = 0x27228Cu;
        goto label_27228c;
    }
    ctx->pc = 0x272284u;
    {
        const bool branch_taken_0x272284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x272284) {
            ctx->pc = 0x2722A0u;
            goto label_2722a0;
        }
    }
    ctx->pc = 0x27228Cu;
label_27228c:
    // 0x27228c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27228cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_272290:
    // 0x272290: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_272294:
    // 0x272294: 0x320f809  jalr        $t9
label_272298:
    if (ctx->pc == 0x272298u) {
        ctx->pc = 0x27229Cu;
        goto label_27229c;
    }
    ctx->pc = 0x272294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27229Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27229Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27229Cu; }
            if (ctx->pc != 0x27229Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27229Cu;
label_27229c:
    // 0x27229c: 0x0  nop
    ctx->pc = 0x27229cu;
    // NOP
label_2722a0:
    // 0x2722a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2722a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2722a4:
    // 0x2722a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2722a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2722a8:
    // 0x2722a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2722a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2722ac:
    // 0x2722ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2722acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2722b0:
    // 0x2722b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2722b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2722b4:
    // 0x2722b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2722b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2722b8:
    // 0x2722b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2722b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2722bc:
    // 0x2722bc: 0x3e00008  jr          $ra
label_2722c0:
    if (ctx->pc == 0x2722C0u) {
        ctx->pc = 0x2722C0u;
            // 0x2722c0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2722C4u;
        goto label_2722c4;
    }
    ctx->pc = 0x2722BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2722C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2722BCu;
            // 0x2722c0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2722C4u;
label_2722c4:
    // 0x2722c4: 0x0  nop
    ctx->pc = 0x2722c4u;
    // NOP
label_2722c8:
    // 0x2722c8: 0x0  nop
    ctx->pc = 0x2722c8u;
    // NOP
label_2722cc:
    // 0x2722cc: 0x0  nop
    ctx->pc = 0x2722ccu;
    // NOP
}
